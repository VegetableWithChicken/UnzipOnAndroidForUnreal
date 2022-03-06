// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileDownloader/Public/FileDownloadManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileDownloadManager() {}
// Cross Module References
	FILEDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FileDownloader();
	FILEDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature();
	FILEDOWNLOADER_API UEnum* Z_Construct_UEnum_FileDownloader_ETaskEvent();
	FILEDOWNLOADER_API UClass* Z_Construct_UClass_UFileDownloadManager_NoRegister();
	FILEDOWNLOADER_API UClass* Z_Construct_UClass_UFileDownloadManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FILEDOWNLOADER_API UScriptStruct* Z_Construct_UScriptStruct_FTaskInformation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics
	{
		struct _Script_FileDownloader_eventOnAllTaskCompleted_Parms
		{
			int32 ErrorCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::NewProp_ErrorCount = { "ErrorCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileDownloader_eventOnAllTaskCompleted_Parms, ErrorCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::NewProp_ErrorCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileDownloader, nullptr, "OnAllTaskCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_FileDownloader_eventOnAllTaskCompleted_Parms), Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics
	{
		struct _Script_FileDownloader_eventDLManagerDelegate_Parms
		{
			ETaskEvent InEvent;
			int32 InTaskID;
			int32 InHttpCode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InTaskID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InHttpCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InEvent = { "InEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileDownloader_eventDLManagerDelegate_Parms, InEvent), Z_Construct_UEnum_FileDownloader_ETaskEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InTaskID = { "InTaskID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileDownloader_eventDLManagerDelegate_Parms, InTaskID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InHttpCode = { "InHttpCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FileDownloader_eventDLManagerDelegate_Parms, InHttpCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InTaskID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::NewProp_InHttpCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileDownloader, nullptr, "DLManagerDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FileDownloader_eventDLManagerDelegate_Parms), Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execSetTotalSizeByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTotalSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTotalSizeByIndex(Z_Param_InIndex,Z_Param_InTotalSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execAddTaskByUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddTaskByUrl(Z_Param_InUrl,Z_Param_InDirectory,Z_Param_InFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execGetTaskInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTaskInformation*)Z_Param__Result=P_THIS->GetTaskInfo(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execGetAllTaskInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTaskInformation>*)Z_Param__Result=P_THIS->GetAllTaskInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execSaveTaskToJsonFile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveTaskToJsonFile(Z_Param_InIndex,Z_Param_InFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execGetByteSize)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutCurrentSize);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutTotalSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetByteSize(Z_Param_Out_OutCurrentSize,Z_Param_Out_OutTotalSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execGetTotalPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execStopTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTask(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execStopAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execStartTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTask(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileDownloadManager::execStartAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAll();
		P_NATIVE_END;
	}
	void UFileDownloadManager::StaticRegisterNativesUFileDownloadManager()
	{
		UClass* Class = UFileDownloadManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTaskByUrl", &UFileDownloadManager::execAddTaskByUrl },
			{ "Clear", &UFileDownloadManager::execClear },
			{ "GetAllTaskInformation", &UFileDownloadManager::execGetAllTaskInformation },
			{ "GetByteSize", &UFileDownloadManager::execGetByteSize },
			{ "GetTaskInfo", &UFileDownloadManager::execGetTaskInfo },
			{ "GetTotalPercent", &UFileDownloadManager::execGetTotalPercent },
			{ "SaveTaskToJsonFile", &UFileDownloadManager::execSaveTaskToJsonFile },
			{ "SetTotalSizeByIndex", &UFileDownloadManager::execSetTotalSizeByIndex },
			{ "StartAll", &UFileDownloadManager::execStartAll },
			{ "StartTask", &UFileDownloadManager::execStartTask },
			{ "StopAll", &UFileDownloadManager::execStopAll },
			{ "StopTask", &UFileDownloadManager::execStopTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics
	{
		struct FileDownloadManager_eventAddTaskByUrl_Parms
		{
			FString InUrl;
			FString InDirectory;
			FString InFileName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InUrl = { "InUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventAddTaskByUrl_Parms, InUrl), METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InDirectory = { "InDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventAddTaskByUrl_Parms, InDirectory), METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventAddTaskByUrl_Parms, InFileName), METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InFileName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventAddTaskByUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_InFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Add a new task(exist task will be ignored, detected via Guid), first cannot be empty!!!\n\x09 @ param : InUrl cannot be empty!\n\x09 @ param : InDirectory ignore this param(Default directory will be used ../Content/FileDownload) \n   \x09 @ param : InFileName ignore this param(Default file name will be used, cutting & copy name from InUrl)\n\x09 */" },
		{ "CPP_Default_InDirectory", "" },
		{ "CPP_Default_InFileName", "" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "Add a new task(exist task will be ignored, detected via Guid), first cannot be empty!!!\n        @ param : InUrl cannot be empty!\n        @ param : InDirectory ignore this param(Default directory will be used ../Content/FileDownload)\n        @ param : InFileName ignore this param(Default file name will be used, cutting & copy name from InUrl)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "AddTaskByUrl", nullptr, nullptr, sizeof(FileDownloadManager_eventAddTaskByUrl_Parms), Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_Clear_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 *stop and remove all tasks\n\x09 **/" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "*stop and remove all tasks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics
	{
		struct FileDownloadManager_eventGetAllTaskInformation_Parms
		{
			TArray<FTaskInformation> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaskInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventGetAllTaskInformation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "GetAllTaskInformation", nullptr, nullptr, sizeof(FileDownloadManager_eventGetAllTaskInformation_Parms), Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics
	{
		struct FileDownloadManager_eventGetByteSize_Parms
		{
			int64 OutCurrentSize;
			int64 OutTotalSize;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_OutCurrentSize;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_OutTotalSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::NewProp_OutCurrentSize = { "OutCurrentSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventGetByteSize_Parms, OutCurrentSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::NewProp_OutTotalSize = { "OutTotalSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventGetByteSize_Parms, OutTotalSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::NewProp_OutCurrentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::NewProp_OutTotalSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "GetByteSize", nullptr, nullptr, sizeof(FileDownloadManager_eventGetByteSize_Parms), Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_GetByteSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_GetByteSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics
	{
		struct FileDownloadManager_eventGetTaskInfo_Parms
		{
			int32 InIndex;
			FTaskInformation ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventGetTaskInfo_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventGetTaskInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaskInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "GetTaskInfo", nullptr, nullptr, sizeof(FileDownloadManager_eventGetTaskInfo_Parms), Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics
	{
		struct FileDownloadManager_eventGetTotalPercent_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventGetTotalPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 *get total progress of all tasks\n\x09 *@return tasks percent [0, 100]\n\x09 **/" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "*get total progress of all tasks\n*@return tasks percent [0, 100]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "GetTotalPercent", nullptr, nullptr, sizeof(FileDownloadManager_eventGetTotalPercent_Parms), Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics
	{
		struct FileDownloadManager_eventSaveTaskToJsonFile_Parms
		{
			int32 InIndex;
			FString InFileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventSaveTaskToJsonFile_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventSaveTaskToJsonFile_Parms, InFileName), METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_InFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_InFileName_MetaData)) };
	void Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileDownloadManager_eventSaveTaskToJsonFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileDownloadManager_eventSaveTaskToJsonFile_Parms), &Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_InFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*save task information to a Json file, so you can load the task later.\n\x09 @Param InGuid can not be invalid, identify a task\n\x09 @Param InFileName figure out the target json file name, you can ignore this param\n\x09*/" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "save task information to a Json file, so you can load the task later.\n        @Param InGuid can not be invalid, identify a task\n        @Param InFileName figure out the target json file name, you can ignore this param" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "SaveTaskToJsonFile", nullptr, nullptr, sizeof(FileDownloadManager_eventSaveTaskToJsonFile_Parms), Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics
	{
		struct FileDownloadManager_eventSetTotalSizeByIndex_Parms
		{
			int32 InIndex;
			int32 InTotalSize;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InTotalSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventSetTotalSizeByIndex_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_InTotalSize = { "InTotalSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventSetTotalSizeByIndex_Parms, InTotalSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileDownloadManager_eventSetTotalSizeByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileDownloadManager_eventSetTotalSizeByIndex_Parms), &Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_InTotalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "SetTotalSizeByIndex", nullptr, nullptr, sizeof(FileDownloadManager_eventSetTotalSizeByIndex_Parms), Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_StartAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_StartAll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 *start download action for all task by sequence\n\x09 **/" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "*start download action for all task by sequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_StartAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "StartAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_StartAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_StartAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_StartAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_StartAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics
	{
		struct FileDownloadManager_eventStartTask_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventStartTask_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 *start a task, only change state, if current works up to MaxDoingWorks, the task is wait\n\x09 **/" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "*start a task, only change state, if current works up to MaxDoingWorks, the task is wait" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "StartTask", nullptr, nullptr, sizeof(FileDownloadManager_eventStartTask_Parms), Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_StartTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_StartTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_StopAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_StopAll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 *stop all task, release file handle and cancel HTTP\n\x09 **/" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "*stop all task, release file handle and cancel HTTP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "StopAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_StopAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_StopAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_StopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_StopAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics
	{
		struct FileDownloadManager_eventStopTask_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileDownloadManager_eventStopTask_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 *stop a task immediately\n\x09 **/" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "*stop a task immediately" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileDownloadManager, nullptr, "StopTask", nullptr, nullptr, sizeof(FileDownloadManager_eventStopTask_Parms), Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileDownloadManager_StopTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileDownloadManager_StopTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileDownloadManager_NoRegister()
	{
		return UFileDownloadManager::StaticClass();
	}
	struct Z_Construct_UClass_UFileDownloadManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParallelTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParallelTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDlManagerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDlManagerEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAllTaskCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllTaskCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileDownloadManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FileDownloader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileDownloadManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileDownloadManager_AddTaskByUrl, "AddTaskByUrl" }, // 2744856691
		{ &Z_Construct_UFunction_UFileDownloadManager_Clear, "Clear" }, // 1153647376
		{ &Z_Construct_UFunction_UFileDownloadManager_GetAllTaskInformation, "GetAllTaskInformation" }, // 4285763362
		{ &Z_Construct_UFunction_UFileDownloadManager_GetByteSize, "GetByteSize" }, // 186689524
		{ &Z_Construct_UFunction_UFileDownloadManager_GetTaskInfo, "GetTaskInfo" }, // 2627426942
		{ &Z_Construct_UFunction_UFileDownloadManager_GetTotalPercent, "GetTotalPercent" }, // 2699175217
		{ &Z_Construct_UFunction_UFileDownloadManager_SaveTaskToJsonFile, "SaveTaskToJsonFile" }, // 1823742075
		{ &Z_Construct_UFunction_UFileDownloadManager_SetTotalSizeByIndex, "SetTotalSizeByIndex" }, // 1533862468
		{ &Z_Construct_UFunction_UFileDownloadManager_StartAll, "StartAll" }, // 2126508164
		{ &Z_Construct_UFunction_UFileDownloadManager_StartTask, "StartTask" }, // 3502538812
		{ &Z_Construct_UFunction_UFileDownloadManager_StopAll, "StopAll" }, // 116198832
		{ &Z_Construct_UFunction_UFileDownloadManager_StopTask, "StopTask" }, // 1915938261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileDownloadManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FileDownloadManager, this class is the interface of the plugin, use this class download file as far as possible (both c++ & blueprint)\n */" },
		{ "IncludePath", "FileDownloadManager.h" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "FileDownloadManager, this class is the interface of the plugin, use this class download file as far as possible (both c++ & blueprint)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "FileDownloadManager" },
		{ "Comment", "//tick interval\n" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
		{ "ToolTip", "tick interval" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileDownloadManager, TickInterval), METADATA_PARAMS(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_MaxParallelTask_MetaData[] = {
		{ "Category", "FileDownloadManager" },
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_MaxParallelTask = { "MaxParallelTask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileDownloadManager, MaxParallelTask), METADATA_PARAMS(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_MaxParallelTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_MaxParallelTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnDlManagerEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnDlManagerEvent = { "OnDlManagerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileDownloadManager, OnDlManagerEvent), Z_Construct_UDelegateFunction_FileDownloader_DLManagerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnDlManagerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnDlManagerEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnAllTaskCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/FileDownloadManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnAllTaskCompleted = { "OnAllTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileDownloadManager, OnAllTaskCompleted), Z_Construct_UDelegateFunction_FileDownloader_OnAllTaskCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnAllTaskCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnAllTaskCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileDownloadManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_TickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_MaxParallelTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnDlManagerEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileDownloadManager_Statics::NewProp_OnAllTaskCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileDownloadManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileDownloadManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileDownloadManager_Statics::ClassParams = {
		&UFileDownloadManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFileDownloadManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFileDownloadManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileDownloadManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileDownloadManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileDownloadManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileDownloadManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileDownloadManager, 3650122094);
	template<> FILEDOWNLOADER_API UClass* StaticClass<UFileDownloadManager>()
	{
		return UFileDownloadManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileDownloadManager(Z_Construct_UClass_UFileDownloadManager, &UFileDownloadManager::StaticClass, TEXT("/Script/FileDownloader"), TEXT("UFileDownloadManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileDownloadManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
