// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayMontageandWait.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/Character.h"

UHeroPlayMontageandWait::UHeroPlayMontageandWait(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Rate = 1.f;
	bStopWhenAbilityEnds = true;
}

UAbilitySystemComponent* UHeroPlayMontageandWait::GetTargetASC()
{
	return Cast<UAbilitySystemComponent>(AbilitySystemComponent);
}

UHeroPlayMontageandWait* UHeroPlayMontageandWait::PlayMontageAndWaitForNotify(UGameplayAbility* OwningAbility, FName TaskInstanceName,
	UAnimMontage* MontageToPlay,/* FGameplayTagContainer EventTags,*/ float Rate, FName StartSection,
	bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
	UHeroPlayMontageandWait* MyObj = NewAbilityTask<UHeroPlayMontageandWait>(OwningAbility, TaskInstanceName);
	MyObj->MontageToPlay = MontageToPlay;
	//MyObj->EventTags = EventTags;
	MyObj->Rate = Rate;
	MyObj->StartSection = StartSection;
	MyObj->AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	MyObj->bStopWhenAbilityEnds = bStopWhenAbilityEnds;

	return MyObj;
}

void UHeroPlayMontageandWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{
	if (Ability && Ability->GetCurrentMontage() == MontageToPlay)
	{
		if (Montage == MontageToPlay)
		{
			AbilitySystemComponent->ClearAnimatingAbility(Ability);

			// Reset AnimRootMotionTranslationScale
			ACharacter* Character = Cast<ACharacter>(GetAvatarActor());
			if (Character && (Character->GetLocalRole() == ROLE_Authority ||
				(Character->GetLocalRole() == ROLE_AutonomousProxy && Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalPredicted)))
			{
				Character->SetAnimRootMotionTranslationScale(1.f);
			}

		}
	}

	if (bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			//OnInterrupted.Broadcast(FGameplayTag(), FGameplayEventData());
			OnInterrupted.Broadcast("NONE");
		}
	}
	else
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			//OnBlendOut.Broadcast(FGameplayTag(), FGameplayEventData());
			OnBlendOut.Broadcast("NONE");
		}
	}
}

void UHeroPlayMontageandWait::OnAbilityCancelled()
{
	if (StopPlayingMontage())
	{
		// Let the BP handle the interrupt as well
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			//OnCancelled.Broadcast(FGameplayTag(), FGameplayEventData());
			OnCancelled.Broadcast("NONE");
		}
	}
}

void UHeroPlayMontageandWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			//OnCompleted.Broadcast(FGameplayTag(), FGameplayEventData());
			OnCompleted.Broadcast("NONE");
		}
	}

	EndTask();
}

//void UHeroPlayMontageandWait::OnGameplayEvent(FGameplayTag EventTag, const FGameplayEventData* Payload)
//{
//	if (ShouldBroadcastAbilityTaskDelegates())
//	{
//		FGameplayEventData TempData = *Payload;
//		TempData.EventTag = EventTag;
//
//		EventReceived.Broadcast(EventTag, TempData);
//	}
//}

void UHeroPlayMontageandWait::NotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnNotifyBegin.Broadcast(NotifyName);
	}
}

void UHeroPlayMontageandWait::Activate()
{
	if (Ability == nullptr)
	{
		return;
	}

	bool bPlayedMontage = false;
	UAbilitySystemComponent* abilitySystemComponent = GetTargetASC();

	if (abilitySystemComponent)
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &UHeroPlayMontageandWait::NotifyBegin);

			// Bind to event callback
			/*EventHandle = abilitySystemComponent->AddGameplayEventTagContainerDelegate(EventTags,
				FGameplayEventTagMulticastDelegate::FDelegate::CreateUObject(this, &UHeroPlayMontageandWait::OnGameplayEvent));*/

			if (abilitySystemComponent->PlayMontage(Ability, Ability->GetCurrentActivationInfo(), MontageToPlay, Rate, StartSection) > 0.f)
			{
				// Playing a montage could potentially fire off a callback into game code which could kill this ability! Early out if we are  pending kill.
				if (ShouldBroadcastAbilityTaskDelegates() == false)
				{
					return;
				}

				CancelledHandle = Ability->OnGameplayAbilityCancelled.AddUObject(this, &UHeroPlayMontageandWait::OnAbilityCancelled);

				BlendingOutDelegate.BindUObject(this, &UHeroPlayMontageandWait::OnMontageBlendingOut);
				AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, MontageToPlay);

				MontageEndedDelegate.BindUObject(this, &UHeroPlayMontageandWait::OnMontageEnded);
				AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, MontageToPlay);

				ACharacter* Character = Cast<ACharacter>(GetAvatarActor());
				if (Character && (Character->GetLocalRole() == ROLE_Authority ||
					(Character->GetLocalRole() == ROLE_AutonomousProxy && Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalPredicted)))
				{
					Character->SetAnimRootMotionTranslationScale(AnimRootMotionTranslationScale);
				}

				bPlayedMontage = true;
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UGDAbilityTask_PlayMontageAndWaitForEvent call to PlayMontage failed!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UGDAbilityTask_PlayMontageAndWaitForEvent called on invalid AbilitySystemComponent"));
	}

	if (!bPlayedMontage)
	{
		UE_LOG(LogTemp, Warning, TEXT("UGDAbilityTask_PlayMontageAndWaitForEvent called in Ability %s failed to play montage %s; Task Instance Name %s."), *Ability->GetName(), *GetNameSafe(MontageToPlay), *InstanceName.ToString());
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			//ABILITY_LOG(Display, TEXT("%s: OnCancelled"), *GetName());
			OnCancelled.Broadcast("NONE");
		}
	}

	SetWaitingOnAvatar();
}

void UHeroPlayMontageandWait::ExternalCancel()
{
	check(AbilitySystemComponent);

	OnAbilityCancelled();

	Super::ExternalCancel();
}

FString UHeroPlayMontageandWait::GetDebugString() const
{
	UAnimMontage* PlayingMontage = nullptr;
	if (Ability)
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();

		if (AnimInstance != nullptr)
		{
			PlayingMontage = AnimInstance->Montage_IsActive(MontageToPlay) ? MontageToPlay : AnimInstance->GetCurrentActiveMontage();
		}
	}

	return FString::Printf(TEXT("PlayMontageAndWaitForEvent. MontageToPlay: %s  (Currently Playing): %s"),
		*GetNameSafe(MontageToPlay), *GetNameSafe(PlayingMontage));
}

void UHeroPlayMontageandWait::OnDestroy(bool AbilityEnded)
{
	if (Ability)
	{
		Ability->OnGameplayAbilityCancelled.Remove(CancelledHandle);
		if (AbilityEnded && bStopWhenAbilityEnds)
		{
			StopPlayingMontage();
		}
	}

	Super::OnDestroy(AbilityEnded);
}

bool UHeroPlayMontageandWait::StopPlayingMontage()
{
	const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
	if (!ActorInfo)
	{
		return false;
	}

	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
	if (AnimInstance == nullptr)
	{
		return false;
	}

	// Check if the montage is still playing
	// The ability would have been interrupted, in which case we should automatically stop the montage
	if (AbilitySystemComponent && Ability)
	{
		if (AbilitySystemComponent->GetAnimatingAbility() == Ability
			&& AbilitySystemComponent->GetCurrentMontage() == MontageToPlay)
		{
			// Unbind delegates so they don't get called as well
			FAnimMontageInstance* MontageInstance = AnimInstance->GetActiveInstanceForMontage(MontageToPlay);
			if (MontageInstance)
			{
				MontageInstance->OnMontageBlendingOutStarted.Unbind();
				MontageInstance->OnMontageEnded.Unbind();
			}

			AbilitySystemComponent->CurrentMontageStop();
			return true;
		}
	}

	return false;
}