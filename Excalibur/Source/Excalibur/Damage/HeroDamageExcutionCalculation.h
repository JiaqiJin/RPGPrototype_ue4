// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "HeroDamageExcutionCalculation.generated.h"

/**
 * GameplayEffectExecutionCalculations for GameplayEffects to make changes to an ASC.
 * ExecutionCalculations can only be used with Instant and Periodic GameplayEffects
 */
UCLASS()
class EXCALIBUR_API UHeroDamageExcutionCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
	UHeroDamageExcutionCalculation();

	void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const;

private:
	class UHeroDamageDataAsset* DamageData;
};
