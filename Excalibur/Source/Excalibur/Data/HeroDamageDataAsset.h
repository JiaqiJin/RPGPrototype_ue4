// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HeroDamageDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroDamageDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTag")
	FGameplayTag DamageTag;

	// Base Damage
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> DamageGameplayEffect;

	// Damager Over time
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> DamageOverTimeGameplayEffect;

	UFUNCTION()
	FName GetDataTag();
};
