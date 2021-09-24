// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TitanSoul : ModuleRules
{
	public TitanSoul(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags",
			"GameplayTasks", "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG", "AIModule",
			"Json", "JsonUtilities",});

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
	}
}
