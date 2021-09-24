// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "HeroGameplayEffect.generated.h"

/**
 * The Hero Gameplay Effect extends from UGameplayEffect and should be used fpr all Gameplay Effect in Hero
 */
UCLASS()
class RPG_API UHeroGameplayEffect : public UGameplayEffect
{
	GENERATED_BODY()
	
public:
	UHeroGameplayEffect();
};
