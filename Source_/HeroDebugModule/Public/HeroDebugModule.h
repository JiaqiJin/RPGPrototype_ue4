#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(HeroDebugModule, All, All);

class FHeroDebugModule : public FDefaultGameModuleImpl
{
	/* This will get called when the editor loads the module */
	virtual void StartupModule() override;

	/* This will get called when the editor unloads the module */
	virtual void ShutdownModule() override;

public:
	FHeroDebugModule();
};