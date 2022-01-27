// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HeroHealthData.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroHealthData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// Health Regeneration Prevention GE
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> HealthRegenerationPreventionEffect;

};
