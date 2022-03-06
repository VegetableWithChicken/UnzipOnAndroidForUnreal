// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FILEDOWNLOADER_DownloadEvent_generated_h
#error "DownloadEvent.generated.h already included, missing '#pragma once' in DownloadEvent.h"
#endif
#define FILEDOWNLOADER_DownloadEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestWebService_Plugins_FileDownloader_Source_FileDownloader_Public_DownloadEvent_h


#define FOREACH_ENUM_ETASKSTATE(op) \
	op(ETaskState::WAIT) \
	op(ETaskState::DOWNLOADING) \
	op(ETaskState::COMPLETED) \
	op(ETaskState::ERROR) 

enum class ETaskState : uint8;
template<> FILEDOWNLOADER_API UEnum* StaticEnum<ETaskState>();

#define FOREACH_ENUM_ETASKEVENT(op) \
	op(ETaskEvent::START_DOWNLOAD) \
	op(ETaskEvent::DOWNLOAD_UPDATE) \
	op(ETaskEvent::STOP) \
	op(ETaskEvent::DOWNLOAD_COMPLETED) \
	op(ETaskEvent::ERROR_OCCUR) 

enum class ETaskEvent : uint8;
template<> FILEDOWNLOADER_API UEnum* StaticEnum<ETaskEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
