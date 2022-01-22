// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility.h"
#include "Excalibur/Character/HeroPlayerState.h"
#include "Excalibur/ExcaliburCharacter.h"

UHeroGameplayAbility::UHeroGameplayAbility()
{
	// Default to Instance Per Actor
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

AExcaliburCharacter* UHeroGameplayAbility::GetOwningHeroCharacter() const
{
	AHeroPlayerState* PS = Cast<AHeroPlayerState>(GetOwningActorFromActorInfo());
	if (PS)
	{
		AExcaliburCharacter* ExCharacter = Cast<AExcaliburCharacter>(PS->GetPawn());
		if (ExCharacter)
			return ExCharacter;
	}
	return nullptr;
}

void UHeroGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);
}


void UHeroGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo) const
{
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
}

void UHeroGameplayAbility::ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo) const
{
	Super::ApplyCooldown(Handle, ActorInfo, ActivationInfo);
}

bool UHeroGameplayAbility::CommitAbilityCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags)
{
	return Super::CommitAbilityCost(Handle, ActorInfo, ActivationInfo);
}

bool UHeroGameplayAbility::CommitAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags)
{
	return true;
}

bool UHeroGameplayAbility::CommitCheck(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags)
{
	return Super::CommitCheck(Handle, ActorInfo, ActivationInfo);
}
