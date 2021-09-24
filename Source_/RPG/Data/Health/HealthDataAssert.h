// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HealthDataAssert.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHealthDataAssert : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// Health Over time
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> HealthRegPreventionEffect;

	// Health regenration efffect
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> HealthRegenerationEffect;

};
