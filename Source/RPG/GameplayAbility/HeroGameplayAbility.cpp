// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility.h"

UHeroGameplayAbility::UHeroGameplayAbility(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
	// Default to Instance Per Actor
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}
