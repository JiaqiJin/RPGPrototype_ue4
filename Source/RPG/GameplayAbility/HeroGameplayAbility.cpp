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

void UHeroGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo) const
{
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
}

bool UHeroGameplayAbility::CommitAbilityCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	OUT FGameplayTagContainer* OptionalRelevantTags)
{
	Super::CommitAbilityCost(Handle, ActorInfo, ActivationInfo);
	return true;
}

/** The last chance to fail before committing, this will usually be the same as CanActivateAbility. Some abilities may need to do extra checks here if they are consuming extra stuff in CommitExecute */
bool UHeroGameplayAbility::CommitCheck(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	OUT FGameplayTagContainer* OptionalRelevantTags)
{
	if (bAutoApplyCooldown)
	{
		ApplyCooldown(Handle, ActorInfo, ActivationInfo);

	}
	
	if (bAutoApplyCost)
	{
		ApplyCost(Handle, ActorInfo, ActivationInfo);
	}
	
	return false;
}


