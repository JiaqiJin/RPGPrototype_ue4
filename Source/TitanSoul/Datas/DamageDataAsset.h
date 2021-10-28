// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DamageDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TITANSOUL_API UDamageDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Tag")
	FGameplayTag DamageTag;

	UPROPERTY(EditDefaultsOnly, Category = "GameplayEffect")
	TSubclassOf<class UGameplayEffect> DamageGameplayEffect;

	UPROPERTY(EditDefaultsOnly, Category = "GameplayEffect")
	TSubclassOf<class UGameplayEffect> DamageOverTimeGameplayEffect;

public:
	UFUNCTION()
	FName GetDataTag();
};
