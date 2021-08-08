// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#include "RPG/RPGCharacter.h"

UHeroGameplayAbility::UHeroGameplayAbility(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
	// Default to Instance Per Actor
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

ARPGCharacter* UHeroGameplayAbility::GetKawaiiCharacter() const
{
	AHeroPlayerState* OWingPlayerState = Cast<AHeroPlayerState>(GetOwningActorFromActorInfo());
	if (OWingPlayerState)
	{
		ARPGCharacter* OwingHeroCharacter = Cast<ARPGCharacter>(OWingPlayerState->GetPawn());
		if (OwingHeroCharacter)
		{
			return OwingHeroCharacter;
		}
	}

	return nullptr;
}
