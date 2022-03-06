#pragma once

#include "Modules/ModuleManager.h"

class WebServer_PluginModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();
};