// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "HeroGameplayAbility.generated.h"

/**
 * The Hero Gameplay Ability extends from UHeroGameplayAbility and should be used fpr all Gameplay Ability in Hero
 */
UCLASS()
class RPG_API UHeroGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UHeroGameplayAbility(const class FObjectInitializer& InitializerObject);
};
