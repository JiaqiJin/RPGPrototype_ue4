// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "RPG/RPGCharacter.h"
#include "HeroDamageExcCalculation.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroDamageExcCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	UHeroDamageExcCalculation();

	void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const;

private:
	class UHeroDamageData* DamageData;

	void ApplyHealthRegenerationPreventionEffect(AActor* TargetActor) const;
};

