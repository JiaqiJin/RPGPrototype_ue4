// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "HeroCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroCheatManager : public UCheatManager
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Exec, meta = (OverrideNativeName = "Hero.Attributes.SetPlayerAttributte"))
	void SetPlayerAttributte(FString AttributeName, float NewValue);
};
