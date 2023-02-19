// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class King : ModuleRules
{
	public King(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay",

			"GameplayAbilities", "GameplayTags", "GameplayTasks","AIModule","Niagara","NavigationSystem", "MoviePlayer"});


		PublicIncludePaths.Add("King");
	}
}
