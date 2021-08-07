// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HeroDebugModule : ModuleRules
{
	public HeroDebugModule(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		//Public module names that this module uses.
		//In case you would like to add various classes that you're going to use in your game
		//you should add the core,coreuobject and engine dependencies.
		PublicDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags",
			"GameplayTasks", "Core", "CoreUObject", "Engine", "RPG" });

		//The path for the header files
		PublicIncludePaths.AddRange(new string[] { "HeroDebugModule/Public" });

		//The path for the source files
		PrivateIncludePaths.AddRange(new string[] { "HeroDebugModule/Private" });

		if ((Target.bBuildDeveloperTools || Target.Configuration != UnrealTargetConfiguration.Shipping && Target.Configuration != UnrealTargetConfiguration.Test))
		{
			PrivateDependencyModuleNames.Add("GameplayDebugger");
			PublicDefinitions.Add("WITH_GAMEPLAY_DEBUGGER=1");
		}
		else
		{
			PublicDefinitions.Add("WITH_GAMEPLAY_DEBUGGER=0");
		}
	}
}