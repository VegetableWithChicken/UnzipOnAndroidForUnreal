// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileDownloader/Public/DownloadEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadEvent() {}
// Cross Module References
	FILEDOWNLOADER_API UEnum* Z_Construct_UEnum_FileDownloader_ETaskState();
	UPackage* Z_Construct_UPackage__Script_FileDownloader();
	FILEDOWNLOADER_API UEnum* Z_Construct_UEnum_FileDownloader_ETaskEvent();
// End Cross Module References
	static UEnum* ETaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FileDownloader_ETaskState, Z_Construct_UPackage__Script_FileDownloader(), TEXT("ETaskState"));
		}
		return Singleton;
	}
	template<> FILEDOWNLOADER_API UEnum* StaticEnum<ETaskState>()
	{
		return ETaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskState(ETaskState_StaticEnum, TEXT("/Script/FileDownloader"), TEXT("ETaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FileDownloader_ETaskState_Hash() { return 2467649328U; }
	UEnum* Z_Construct_UEnum_FileDownloader_ETaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FileDownloader();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskState"), 0, Get_Z_Construct_UEnum_FileDownloader_ETaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskState::WAIT", (int64)ETaskState::WAIT },
				{ "ETaskState::DOWNLOADING", (int64)ETaskState::DOWNLOADING },
				{ "ETaskState::COMPLETED", (int64)ETaskState::COMPLETED },
				{ "ETaskState::ERROR", (int64)ETaskState::ERROR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COMPLETED.Comment", "//task completed\n" },
				{ "COMPLETED.Name", "ETaskState::COMPLETED" },
				{ "COMPLETED.ToolTip", "task completed" },
				{ "DOWNLOADING.Comment", "//is being downloading\n" },
				{ "DOWNLOADING.Name", "ETaskState::DOWNLOADING" },
				{ "DOWNLOADING.ToolTip", "is being downloading" },
				{ "ERROR.Comment", "//error state\n" },
				{ "ERROR.Name", "ETaskState::ERROR" },
				{ "ERROR.ToolTip", "error state" },
				{ "ModuleRelativePath", "Public/DownloadEvent.h" },
				{ "WAIT.Comment", "//wait for getting information\n" },
				{ "WAIT.Name", "ETaskState::WAIT" },
				{ "WAIT.ToolTip", "wait for getting information" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FileDownloader,
				nullptr,
				"ETaskState",
				"ETaskState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETaskEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FileDownloader_ETaskEvent, Z_Construct_UPackage__Script_FileDownloader(), TEXT("ETaskEvent"));
		}
		return Singleton;
	}
	template<> FILEDOWNLOADER_API UEnum* StaticEnum<ETaskEvent>()
	{
		return ETaskEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskEvent(ETaskEvent_StaticEnum, TEXT("/Script/FileDownloader"), TEXT("ETaskEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FileDownloader_ETaskEvent_Hash() { return 2509754423U; }
	UEnum* Z_Construct_UEnum_FileDownloader_ETaskEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FileDownloader();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskEvent"), 0, Get_Z_Construct_UEnum_FileDownloader_ETaskEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskEvent::START_DOWNLOAD", (int64)ETaskEvent::START_DOWNLOAD },
				{ "ETaskEvent::DOWNLOAD_UPDATE", (int64)ETaskEvent::DOWNLOAD_UPDATE },
				{ "ETaskEvent::STOP", (int64)ETaskEvent::STOP },
				{ "ETaskEvent::DOWNLOAD_COMPLETED", (int64)ETaskEvent::DOWNLOAD_COMPLETED },
				{ "ETaskEvent::ERROR_OCCUR", (int64)ETaskEvent::ERROR_OCCUR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "DOWNLOAD_COMPLETED.Comment", "//download completed\n" },
				{ "DOWNLOAD_COMPLETED.Name", "ETaskEvent::DOWNLOAD_COMPLETED" },
				{ "DOWNLOAD_COMPLETED.ToolTip", "download completed" },
				{ "DOWNLOAD_UPDATE.Comment", "//Update\n" },
				{ "DOWNLOAD_UPDATE.Name", "ETaskEvent::DOWNLOAD_UPDATE" },
				{ "DOWNLOAD_UPDATE.ToolTip", "Update" },
				{ "ERROR_OCCUR.Comment", "//meet error during downloading or get task information\n" },
				{ "ERROR_OCCUR.Name", "ETaskEvent::ERROR_OCCUR" },
				{ "ERROR_OCCUR.ToolTip", "meet error during downloading or get task information" },
				{ "ModuleRelativePath", "Public/DownloadEvent.h" },
				{ "START_DOWNLOAD.Comment", "/**\n * \n *///start downloading task\n" },
				{ "START_DOWNLOAD.Name", "ETaskEvent::START_DOWNLOAD" },
				{ "START_DOWNLOAD.ToolTip", "//start downloading task" },
				{ "STOP.Comment", "//stop\n" },
				{ "STOP.Name", "ETaskEvent::STOP" },
				{ "STOP.ToolTip", "stop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FileDownloader,
				nullptr,
				"ETaskEvent",
				"ETaskEvent",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
