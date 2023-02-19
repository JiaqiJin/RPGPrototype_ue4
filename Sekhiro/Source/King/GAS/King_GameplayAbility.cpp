// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/King_GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"

UKing_GameplayAbility::UKing_GameplayAbility()
{
	// Default to Instance Per Actor
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

}

void UKing_GameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);

	if (ActivateAbilityOnGranted)
	{
		bool ActivatedAbility = ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle, false);
	}
}