// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#include "RPG/Controller/HeroCharacterMovementComponent.h"
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

UHeroCharacterMovementComponent* UHeroGameplayAbility::GetHeroCharacterMovementComponent() const
{
	AHeroPlayerState* OWingPlayerState = Cast<AHeroPlayerState>(GetOwningActorFromActorInfo());
	if (OWingPlayerState)
	{
		ARPGCharacter* OwingHeroCharacter = Cast<ARPGCharacter>(OWingPlayerState->GetPawn());
		if (OwingHeroCharacter)
		{
			return OwingHeroCharacter->GetHeroCharacterMovementComponent();
		}
	}
	return nullptr;
}

void UHeroGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);

	if (bActivateWhenGranted)
	{
		bool ActivatedAbility = ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle);
	}
}
