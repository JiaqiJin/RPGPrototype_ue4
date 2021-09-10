// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#include "RPG/Controller/HeroCharacterMovementComponent.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#include "RPG/RPGCharacter.h"
#include "Kismet/GameplayStatics.h"

UHeroGameplayAbility::UHeroGameplayAbility(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
	// Default to Instance Per Actor
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	bIsActiveAbility = true;
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
	AHeroPlayerState* PlayerState = GetOwingHeroPlayerState();
	if (PlayerState)
	{
		if (!PlayerState->GetIgnoreAbilityManaCost())
		{
			Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
		}
	}
	//Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
}

/** Applies CooldownGameplayEffect to the target */
void UHeroGameplayAbility::ApplyCooldown(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	AHeroPlayerState* PlayerState = GetOwingHeroPlayerState();
	if (PlayerState)
	{
		if (!PlayerState->GetIgnoreAbilityCooldown())
		{
			Super::ApplyCooldown(Handle, ActorInfo, ActivationInfo);
		}
	}
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
	
	return Super::CommitCheck(Handle, ActorInfo, ActivationInfo);
}


bool UHeroGameplayAbility::CommitAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	OUT FGameplayTagContainer* OptionalRelevantTags)
{
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

AHeroPlayerState* UHeroGameplayAbility::GetOwingHeroPlayerState() const
{
	ARPGCharacter* PlayerCharacter = Cast<ARPGCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		AHeroPlayerState* PlayerState = Cast<AHeroPlayerState>(PlayerCharacter->GetPlayerState());
		return PlayerState ? PlayerState : nullptr;
	}

	return nullptr;
}
