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
	//UE_LOG(LogTemp, Warning, TEXT("ApplyCost"));
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
	//UE_LOG(LogTemp, Warning, TEXT("CommitAbilityCost"));
	Super::CommitAbilityCost(Handle, ActorInfo, ActivationInfo);
	return true;
}

bool UHeroGameplayAbility::CommitAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags)
{
	//UE_LOG(LogTemp, Warning, TEXT("CommitAbility"));
	// Last chance to fail (maybe we no longer have resources to commit since we after we started this ability activation)
	if (!CommitCheck(Handle, ActorInfo, ActivationInfo, OptionalRelevantTags))
	{
		return false;
	}

	if (bAutoApplyCooldown)
	{
		ApplyCooldown(Handle, ActorInfo, ActivationInfo);

	}

	if (bAutoApplyCost)
	{
		ApplyCost(Handle, ActorInfo, ActivationInfo);
	}

	CommitExecute(Handle, ActorInfo, ActivationInfo);

	// Fixme: Should we always call this or only if it is implemented? A noop may not hurt but could be bad for perf (storing a HasBlueprintCommit per instance isn't good either)
	K2_CommitExecute();

	// Broadcast this commitment
	ActorInfo->AbilitySystemComponent->NotifyAbilityCommit(this);

	return true;
}

bool UHeroGameplayAbility::CommitCheck(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags)
{
	//UE_LOG(LogTemp, Warning, TEXT("CommitCheck"));
	if (bAutoApplyCooldown)
	{
		ApplyCooldown(Handle, ActorInfo, ActivationInfo);

	}

	if (bAutoApplyCost)
	{
		ApplyCost(Handle, ActorInfo, ActivationInfo);
	}

	return Super::CommitCheck(Handle, ActorInfo, ActivationInfo);
}
