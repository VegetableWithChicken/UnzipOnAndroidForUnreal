// Copyright Epic Games, Inc. All Rights Reserved.
#include "UsefulBluePrintLibraryBPLibrary.h"
#include "MiniCodeConvert.h"
#include "UsefulIncludeFile.h"


UUsefulBluePrintLibraryBPLibrary::UUsefulBluePrintLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UUsefulBluePrintLibraryBPLibrary::FileDataTableFromJsonFile(class UDataTable* inDataTable, const FString& inJSONFilePath)
{
	FString TempPath=FPaths::ProjectDir()+ "DataFile/"+inJSONFilePath;
	UE_LOG(LogTemp, Warning, TEXT("Current FilePath is :%s"), *TempPath);
	FString JsonString;
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*TempPath))
	{
		FFileHelper::LoadFileToString(JsonString, *TempPath);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("FileDataTableFromJsonFile Canot find Json File %s"),*TempPath);
		return false;
	}

	return FillDataTableFromJSONString(inDataTable,JsonString);
}
bool UUsefulBluePrintLibraryBPLibrary::FillDataTableFromJSONString(UDataTable* inDataTable, FString& outJSONString)
{
	if (!inDataTable || (outJSONString.Len() == 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("FillDataTableFromJSONString -> Can't fill DataTable with JSONString: %."), *outJSONString);
		return false;
	}
	// Call bulit-in function
	TArray<FString> Errors = inDataTable->CreateTableFromJSONString(outJSONString);

	if (Errors.Num())
	{
		// It has some error message
		for (const FString& Error : Errors)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Error);
		}
		return false;
	}
	return true;
}

void UUsefulBluePrintLibraryBPLibrary::UnZipFile(FString ZipFilename)
{
    

#if PALTFORM_WINDOWS
    ZipFilename = FPaths::ProjectContentDir() + "Download/" + ZipFilename;
    ZipDir = FPaths::ProjectContentDir() + ZipDir;
    UE_LOG(LogTemp, Warning, TEXT("ZipFilename full Path=%s"), *ZipFilename);
    UE_LOG(LogTemp, Warning, TEXT("ZipDir out full Path=:%s"), *ZipDir);
	uint32 ErrorCount = 0; // 解压错误的数量
	uint32 TotalCount = 0; // 文件总数（包括文件和文件夹）
	const unzFile ZFile = unzOpen64(FMiniCodeConvert::WideCharToMultiByte(*ZipFilename).c_str());
    // 2. 获取zip文件全局信息
    unz_global_info64 ZGlobalInfo;
    unzGetGlobalInfo64(ZFile, &ZGlobalInfo);

    // 3. 获取zip文件大小，方便做解压进度记录
    const int64 TotalCompressedSize = IFileManager::Get().FileSize(*ZipFilename);
    int64 CurrentCompressedSize = 0;

    // 4. 遍历zip中的所有文件，将解压后的文件字节流写入本地文件
    unz_file_info64 ZFileInfo;

    const int NAME_BUFF_SIZE = 512;
    const int FILE_DATA_INIT_BUFF_SIZE = 512 * 1024;
    char* Filename = new char[NAME_BUFF_SIZE];
    char* FileData = new char[FILE_DATA_INIT_BUFF_SIZE];

    int ReadLength = 0;
    TotalCount = ZGlobalInfo.number_entry;
    for (int i = 0; i < ZGlobalInfo.number_entry; ++i)
    {
        if (i > 0)
        {
            unzCloseCurrentFile(ZFile); // 关闭当前文件
            unzGoToNextFile(ZFile);	 // 指向下一个文件
        }

        // 获取当前指向文件的信息
        if (unzGetCurrentFileInfo64(ZFile, &ZFileInfo, Filename, NAME_BUFF_SIZE,
            nullptr, 0, nullptr, 0) != UNZ_OK)
        {
            ErrorCount++;
            continue;
        }

        // 打开当前文件，为了做读取
        if (unzOpenCurrentFile(ZFile) != UNZ_OK)
        {
            ErrorCount++;
            continue;
        }

        // 此处需要将zip文件中名字的编码转换成FString对应的编码
        FString FullFilePath = ZipDir+Filename;
        if (ZFileInfo.uncompressed_size == 0)
        {
            if (FullFilePath.EndsWith(TEXT("/")) || FullFilePath.EndsWith(TEXT("\\")))
            {
                if (!IFileManager::Get().MakeDirectory(*FullFilePath, true))
                {
                    ErrorCount++;
                    continue;
                }
            }
            else
            {
                if (!FFileHelper::SaveStringToFile(TEXT(""), *FullFilePath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
                {
                    ErrorCount++;
                    continue;
                }
            }
        }
        else
        {
            TSharedPtr<FArchive> ArchivePtr = TSharedPtr<FArchive>(IFileManager::Get().CreateFileWriter(*FullFilePath));
            if (ArchivePtr != nullptr)
            {
                const double UnCompressRadio = ((double)ZFileInfo.compressed_size) / ZFileInfo.uncompressed_size;
                const int BlockCount = (ZFileInfo.uncompressed_size + FILE_DATA_INIT_BUFF_SIZE - 1) / FILE_DATA_INIT_BUFF_SIZE;
                for (int Block = 0; Block < BlockCount; ++Block)
                {
                    // 读取解压的字节流
                    ReadLength = unzReadCurrentFile(ZFile, FileData, FILE_DATA_INIT_BUFF_SIZE);
                    ArchivePtr->Serialize(FileData, ReadLength);

                    // 记录当前解压进度，此处可以自己做日志输出或者做一些广播
                    CurrentCompressedSize += ReadLength * UnCompressRadio;
                }

                if (!ArchivePtr->Close())
                {
                    ErrorCount++;
                    continue;
                }
            }
            else
            {
                ErrorCount++;
                continue;
            }
        }
    }

    unzClose(ZFile);
    delete[] Filename;
    delete[] FileData;
#endif//PALTFORM_WINDOWS

#if PLATFORM_ANDROID
    ZipFilename = "/sdcard/UE4Game/TestWebService/TestWebService/Content/Download/" + ZipFilename;
    ZipDir = "/sdcard/UE4Game/TestWebService/TestWebService/Content/";
    UE_LOG(LogTemp, Warning, TEXT("ZipFilename full Path=%s"), *ZipFilename);
    UE_LOG(LogTemp, Warning, TEXT("ZipDir out full Path=:%s"), *ZipDir);
        if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
        {
            bool bIsOptional = false;
            static jmethodID AndroidThunkJava_unzip = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_unzip", "(Ljava/lang/String;Ljava/lang/String;)V", bIsOptional);
            if (AndroidThunkJava_unzip)
            {
                //UE_LOG(LogTemp, Warning, TEXT("jmethodID is vaild :%s "), AndroidThunkJava_unzip);
                jstring ZipFile = Env->NewStringUTF(TCHAR_TO_UTF8(*ZipFilename));
                jstring OutDir = Env->NewStringUTF(TCHAR_TO_UTF8(*ZipDir));
                FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, AndroidThunkJava_unzip, ZipFile, OutDir);
                UE_LOG(LogTemp, Warning, TEXT("jmethodID is vaild :AndroidThunkJava_GetMessage "));
            }
            else {
                UE_LOG(LogTemp, Warning, TEXT("jmethodID is invaild"));
            }
        }
#endif//PALTFORM_ANDROOT
	
}
