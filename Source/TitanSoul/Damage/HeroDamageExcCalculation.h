// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "TitanSoul/TitanSoulCharacter.h"
#include "HeroDamageExcCalculation.generated.h"

/**
 * 
 */
UCLASS()
class TITANSOUL_API UHeroDamageExcCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
	UHeroDamageExcCalculation();

	void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const;
private:
	class UDamageDataAsset* DamageData;

	void ApplyHealthRegenerationPreventionEffect(AActor* TargetActor) const;
};
