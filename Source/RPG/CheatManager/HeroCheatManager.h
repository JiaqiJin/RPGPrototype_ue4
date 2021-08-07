// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "HeroCheatManager.generated.h"

/**
 * Cheat Manager is a central blueprint to implement test and debug code and actions that are not to ship with the game.
 */
UCLASS()
class RPG_API UHeroCheatManager : public UCheatManager
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Exec, meta = (OverrideNativeName = "Hero.Attributes.SetPlayerAttributte"))
	void SetPlayerAttributte(FString AttributeName, float NewValue);
};
