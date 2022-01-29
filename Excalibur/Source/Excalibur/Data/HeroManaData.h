// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HeroManaData.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroManaData : public UDataAsset
{
	GENERATED_BODY()
public:
	// Mana Regeneration Prevention GE
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> ManaRegenerationPreventionEffect;

	// Mana Regeneration Prevention GE
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> ManaRegenerationEffect;
};
