// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility_FeatherFall.h"
#include "RPG/Controller/HeroCharacterMovementComponent.h"
#include "RPG/RPGCharacter.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"

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

		AHeroPlayerController* PC = Cast<AHeroPlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
		UAnimMontage* MontageToPlay = FeatherFallMontage;
		UAnimInstance* FeatherFallAnimInstance = GetOwningComponentFromActorInfo()->GetAnimInstance();
		UAbilityTask_PlayMontageAndWait* FeatherFallMontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this,
			"FeatherFallMontage", FeatherFallMontage);

		if (FeatherFallAnimInstance && MontageToPlay)
		{
			/*FeatherFallAnimInstance->Montage_Play(FeatherFallMontage);
			FeatherFallAnimInstance->OnPlayMontageNotifyBegin.AddUniqueDynamic()*/
		}
		else
		{
			EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		}
		//UAbilityTask_PlayMontageAndWait* Task;
		//Task->OnCompleted.AddDynamic(this, &UHeroGameplayAbility_FeatherFall::Oncompleted);
		// Play fire montage and wait for event telling us to spawn the projectile
		//UGDAT_PlayMontageAndWaitForEvent* Task = UGDAT_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(this, NAME_None, MontageToPlay, FGameplayTagContainer(), 1.0f, NAME_None, false, 1.0f);
		//Task->OnBlendOut.AddDynamic(this, &UGDGA_FireGun::OnCompleted);
		//Task->OnCompleted.AddDynamic(this, &UGDGA_FireGun::OnCompleted);
		//Task->OnInterrupted.AddDynamic(this, &UGDGA_FireGun::OnCancelled);
		//Task->OnCancelled.AddDynamic(this, &UGDGA_FireGun::OnCancelled);
		//Task->EventReceived.AddDynamic(this, &UGDGA_FireGun::EventReceived);
		//// ReadyForActivation() is how you activate the AbilityTask in C++. Blueprint has magic from K2Node_LatentGameplayTaskCall that will automatically call ReadyForActivation().
		//Task->ReadyForActivation();
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
		AHeroPlayerController* PC = Cast<AHeroPlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
		PC->SetIgnoreMoveInput(true);
	}
}



