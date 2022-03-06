// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileDownloader/Public/TaskInformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskInformation() {}
// Cross Module References
	FILEDOWNLOADER_API UScriptStruct* Z_Construct_UScriptStruct_FTaskInformation();
	UPackage* Z_Construct_UPackage__Script_FileDownloader();
// End Cross Module References
class UScriptStruct* FTaskInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FILEDOWNLOADER_API uint32 Get_Z_Construct_UScriptStruct_FTaskInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskInformation, Z_Construct_UPackage__Script_FileDownloader(), TEXT("TaskInformation"), sizeof(FTaskInformation), Get_Z_Construct_UScriptStruct_FTaskInformation_Hash());
	}
	return Singleton;
}
template<> FILEDOWNLOADER_API UScriptStruct* StaticStruct<FTaskInformation>()
{
	return FTaskInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaskInformation(FTaskInformation::StaticStruct, TEXT("/Script/FileDownloader"), TEXT("TaskInformation"), false, nullptr, nullptr);
static struct FScriptStruct_FileDownloader_StaticRegisterNativesFTaskInformation
{
	FScriptStruct_FileDownloader_StaticRegisterNativesFTaskInformation()
	{
		UScriptStruct::DeferCppStructOps<FTaskInformation>(FName(TEXT("TaskInformation")));
	}
} ScriptStruct_FileDownloader_StaticRegisterNativesFTaskInformation;
	struct Z_Construct_UScriptStruct_FTaskInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ETag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ETag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * describe a task's information\n */" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
		{ "ToolTip", "describe a task's information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "TaskInformation" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskInformation, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_DestDirectory_MetaData[] = {
		{ "Category", "TaskInformation" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_DestDirectory = { "DestDirectory", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskInformation, DestDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_DestDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_DestDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_SourceUrl_MetaData[] = {
		{ "Category", "TaskInformation" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_SourceUrl = { "SourceUrl", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskInformation, SourceUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_SourceUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_SourceUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_ETag_MetaData[] = {
		{ "Category", "TaskInformation" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_ETag = { "ETag", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskInformation, ETag), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_ETag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_ETag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_CurrentSize_MetaData[] = {
		{ "Category", "TaskInformation" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_CurrentSize = { "CurrentSize", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskInformation, CurrentSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_CurrentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_CurrentSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_TotalSize_MetaData[] = {
		{ "Category", "TaskInformation" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_TotalSize = { "TotalSize", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskInformation, TotalSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_TotalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_TotalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_GUID_MetaData[] = {
		{ "Category", "TaskInformation" },
		{ "ModuleRelativePath", "Public/TaskInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskInformation, GUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_GUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_GUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_DestDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_SourceUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_ETag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_CurrentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_TotalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskInformation_Statics::NewProp_GUID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FileDownloader,
		nullptr,
		&NewStructOps,
		"TaskInformation",
		sizeof(FTaskInformation),
		alignof(FTaskInformation),
		Z_Construct_UScriptStruct_FTaskInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaskInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FileDownloader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaskInformation"), sizeof(FTaskInformation), Get_Z_Construct_UScriptStruct_FTaskInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaskInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaskInformation_Hash() { return 905488854U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
