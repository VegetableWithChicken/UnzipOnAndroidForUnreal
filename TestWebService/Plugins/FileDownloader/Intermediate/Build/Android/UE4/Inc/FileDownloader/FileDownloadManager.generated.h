// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETaskEvent : uint8;
struct FTaskInformation;
#ifdef FILEDOWNLOADER_FileDownloadManager_generated_h
#error "FileDownloadManager.generated.h already included, missing '#pragma once' in FileDownloadManager.h"
#endif
#define FILEDOWNLOADER_FileDownloadManager_generated_h

#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_14_DELEGATE \
struct _Script_FileDownloader_eventOnAllTaskCompleted_Parms \
{ \
	int32 ErrorCount; \
}; \
static inline void FOnAllTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAllTaskCompleted, int32 ErrorCount) \
{ \
	_Script_FileDownloader_eventOnAllTaskCompleted_Parms Parms; \
	Parms.ErrorCount=ErrorCount; \
	OnAllTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_13_DELEGATE \
struct _Script_FileDownloader_eventDLManagerDelegate_Parms \
{ \
	ETaskEvent InEvent; \
	int32 InTaskID; \
	int32 InHttpCode; \
}; \
static inline void FDLManagerDelegate_DelegateWrapper(const FMulticastScriptDelegate& DLManagerDelegate, ETaskEvent InEvent, int32 InTaskID, int32 InHttpCode) \
{ \
	_Script_FileDownloader_eventDLManagerDelegate_Parms Parms; \
	Parms.InEvent=InEvent; \
	Parms.InTaskID=InTaskID; \
	Parms.InHttpCode=InHttpCode; \
	DLManagerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_SPARSE_DATA
#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTotalSizeByIndex); \
	DECLARE_FUNCTION(execAddTaskByUrl); \
	DECLARE_FUNCTION(execGetTaskInfo); \
	DECLARE_FUNCTION(execGetAllTaskInformation); \
	DECLARE_FUNCTION(execSaveTaskToJsonFile); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execGetByteSize); \
	DECLARE_FUNCTION(execGetTotalPercent); \
	DECLARE_FUNCTION(execStopTask); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStartTask); \
	DECLARE_FUNCTION(execStartAll);


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTotalSizeByIndex); \
	DECLARE_FUNCTION(execAddTaskByUrl); \
	DECLARE_FUNCTION(execGetTaskInfo); \
	DECLARE_FUNCTION(execGetAllTaskInformation); \
	DECLARE_FUNCTION(execSaveTaskToJsonFile); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execGetByteSize); \
	DECLARE_FUNCTION(execGetTotalPercent); \
	DECLARE_FUNCTION(execStopTask); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStartTask); \
	DECLARE_FUNCTION(execStartAll);


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileDownloadManager(); \
	friend struct Z_Construct_UClass_UFileDownloadManager_Statics; \
public: \
	DECLARE_CLASS(UFileDownloadManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileDownloader"), NO_API) \
	DECLARE_SERIALIZER(UFileDownloadManager)


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFileDownloadManager(); \
	friend struct Z_Construct_UClass_UFileDownloadManager_Statics; \
public: \
	DECLARE_CLASS(UFileDownloadManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileDownloader"), NO_API) \
	DECLARE_SERIALIZER(UFileDownloadManager)


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileDownloadManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileDownloadManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileDownloadManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileDownloadManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileDownloadManager(UFileDownloadManager&&); \
	NO_API UFileDownloadManager(const UFileDownloadManager&); \
public:


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileDownloadManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileDownloadManager(UFileDownloadManager&&); \
	NO_API UFileDownloadManager(const UFileDownloadManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileDownloadManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileDownloadManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileDownloadManager)


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_PRIVATE_PROPERTY_OFFSET
#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_19_PROLOG
#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_PRIVATE_PROPERTY_OFFSET \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_SPARSE_DATA \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_RPC_WRAPPERS \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_INCLASS \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_PRIVATE_PROPERTY_OFFSET \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_SPARSE_DATA \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_INCLASS_NO_PURE_DECLS \
	TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILEDOWNLOADER_API UClass* StaticClass<class UFileDownloadManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_FileDownloadManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
