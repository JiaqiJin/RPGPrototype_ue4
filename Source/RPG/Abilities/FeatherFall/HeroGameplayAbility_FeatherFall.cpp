// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility_FeatherFall.h"
#include "RPG/Controller/HeroCharacterMovementComponent.h"
#include "RPG/RPGCharacter.h"

UHeroGameplayAbility_FeatherFall::UHeroGameplayAbility_FeatherFall(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
}

void UHeroGameplayAbility_FeatherFall::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (HasAuthorityOrPredictionKey(ActorInfo, &ActivationInfo))
	{
		if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			return;
		}

		UHeroCharacterMovementComponent* HeroMovementComponent = GetHeroCharacterMovementComponent();
		if (HeroMovementComponent)
		{
			HeroMovementComponent->bNotifyApex = true;
		}
	}
}

bool UHeroGameplayAbility_FeatherFall::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	return true;
}

/** Native function, called if an ability ends normally or abnormally. If bReplicate is set to true, try to replicate the ending to the client/server */
void UHeroGameplayAbility_FeatherFall::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	UHeroCharacterMovementComponent* HeroMovementComponent = GetHeroCharacterMovementComponent();
	if (HeroMovementComponent)
	{
		HeroMovementComponent->bNotifyApex = true;
	}
}



