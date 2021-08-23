// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HeroDamageData.generated.h"


/**
 * 
 */
UCLASS()
class RPG_API UHeroDamageData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTag DamageTag;

	// Base Damage
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> DamageGameplayEffect;

	// Damager Over time
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> DamageOverTimeGameplayEffect;

public:

	UFUNCTION()
	FName GetDataTag();
};
