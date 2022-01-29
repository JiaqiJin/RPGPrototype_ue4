// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HeroStaminaData.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroStaminaData : public UDataAsset
{
	GENERATED_BODY()
public:
	// Stamina Regeneration Prevention GE
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> StaminaRegenerationPreventionEffect;

	// Stamina Regeneration Prevention GE
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> StaminaRegenerationEffect;
};
