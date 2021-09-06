// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayMontageandWait.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Animation/AnimInstance.h"
// ---------

UHeroPlayMontageandWait::UHeroPlayMontageandWait(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Rate = 1.f;
	bStopWhenAbilityEnds = true;
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
			OnInterrupted.Broadcast();
		}
	}
	else
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnBlendOut.Broadcast();
		}
	}
}

void UHeroPlayMontageandWait::OnMontageInterrupted()
{
	if (StopPlayingMontage())
	{
		// Let the BP handle the interrupt as well
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnInterrupted.Broadcast();
		}
	}
}

void UHeroPlayMontageandWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCompleted.Broadcast();
		}
	}

	EndTask();
}

UHeroPlayMontageandWait* UHeroPlayMontageandWait::CreateHeroPlayMontageAndWaitProxy(UGameplayAbility* OwningAbility,
	FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds)
{

	UAbilitySystemGlobals::NonShipping_ApplyGlobalAbilityScaler_Rate(Rate);

	UHeroPlayMontageandWait* MyObj = NewAbilityTask<UHeroPlayMontageandWait>(OwningAbility, TaskInstanceName);
	MyObj->MontageToPlay = MontageToPlay;
	MyObj->Rate = Rate;
	MyObj->StartSection = StartSection;
	MyObj->AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	MyObj->bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	MyObj->StartTimeSeconds = StartTimeSeconds;

	return MyObj;
}

void UHeroPlayMontageandWait::Activate()
{
	if (Ability == nullptr)
	{
		return;
	}

	bool bPlayedMontage = false;

	if (AbilitySystemComponent)
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			if (AbilitySystemComponent->PlayMontage(Ability, Ability->GetCurrentActivationInfo(), MontageToPlay, Rate, StartSection, StartTimeSeconds) > 0.f)
			{
				// Playing a montage could potentially fire off a callback into game code which could kill this ability! Early out if we are  pending kill.
				if (ShouldBroadcastAbilityTaskDelegates() == false)
				{
					return;
				}

				InterruptedHandle = Ability->OnGameplayAbilityCancelled.AddUObject(this, &UHeroPlayMontageandWait::OnMontageInterrupted);

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
			ABILITY_LOG(Warning, TEXT("UHeroPlayMontageandWait call to PlayMontage failed!"));
		}
	}
	else
	{
		ABILITY_LOG(Warning, TEXT("UHeroPlayMontageandWait called on invalid AbilitySystemComponent"));
	}

	if (!bPlayedMontage)
	{
		ABILITY_LOG(Warning, TEXT("UHeroPlayMontageandWait called in Ability %s failed to play montage %s; Task Instance Name %s."), *Ability->GetName(), *GetNameSafe(MontageToPlay), *InstanceName.ToString());
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCancelled.Broadcast();
		}
	}

	SetWaitingOnAvatar();
}

void UHeroPlayMontageandWait::ExternalCancel()
{
	check(AbilitySystemComponent);

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCancelled.Broadcast();
	}
	Super::ExternalCancel();
}

void UHeroPlayMontageandWait::OnDestroy(bool AbilityEnded)
{
	// Note: Clearing montage end delegate isn't necessary since its not a multicast and will be cleared when the next montage plays.
	// (If we are destroyed, it will detect this and not do anything)

	// This delegate, however, should be cleared as it is a multicast
	if (Ability)
	{
		Ability->OnGameplayAbilityCancelled.Remove(InterruptedHandle);
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

	return FString::Printf(TEXT("PlayMontageAndWait. MontageToPlay: %s  (Currently Playing): %s"), *GetNameSafe(MontageToPlay), *GetNameSafe(PlayingMontage));
}

// ---------------- ------------------------------------------

void UHeroPlayMontageandWait::TriggerAnimNotifies(float DeltaSeconds)
{
	SCOPE_CYCLE_COUNTER(STAT_AnimTriggerAnimNotifies);
	const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
	if (ActorInfo)
	{
		USkeletalMeshComponent* SkelMeshComp = ActorInfo->SkeletalMeshComponent.Get();
	}

	// Array that will replace the 'ActiveAnimNotifyState' at the end of this function.
	TArray<FAnimNotifyEvent> NewActiveAnimNotifyState;
	NewActiveAnimNotifyState.Reserve(NotifyQueue.AnimNotifies.Num());

	// AnimNotifyState freshly added that need their 'NotifyBegin' event called.
	TArray<const FAnimNotifyEvent*> NotifyStateBeginEvent;

	for (int32 Index = 0; Index < NotifyQueue.AnimNotifies.Num(); Index++)
	{
		if (const FAnimNotifyEvent* AnimNotifyEvent = NotifyQueue.AnimNotifies[Index].GetNotify())
		{
			// AnimNotifyState
			if (AnimNotifyEvent->NotifyStateClass)
			{
				if (!ActiveAnimNotifyState.RemoveSingleSwap(*AnimNotifyEvent, false))
				{
					// Queue up calls to 'NotifyBegin', so they happen after 'NotifyEnd'.
					NotifyStateBeginEvent.Add(AnimNotifyEvent);
				}
				NewActiveAnimNotifyState.Add(*AnimNotifyEvent);
				continue;
			}

			// Trigger non 'state' AnimNotifies
			TriggerSingleAnimNotify(AnimNotifyEvent);
		}
	}

	// Send end notification to AnimNotifyState not active anymore.
	for (int32 Index = 0; Index < ActiveAnimNotifyState.Num(); ++Index)
	{
		const FAnimNotifyEvent& AnimNotifyEvent = ActiveAnimNotifyState[Index];
		if (AnimNotifyEvent.NotifyStateClass && ShouldTriggerAnimNotifyState(AnimNotifyEvent.NotifyStateClass))
		{
			TRACE_ANIM_NOTIFY(this, AnimNotifyEvent, End);
			AnimNotifyEvent.NotifyStateClass->NotifyEnd(SkelMeshComp, Cast<UAnimSequenceBase>(AnimNotifyEvent.NotifyStateClass->GetOuter()));
		}
		// The NotifyEnd callback above may have triggered actor destruction and the tear down
		// of this instance via UninitializeAnimation which empties ActiveAnimNotifyState.
		// If that happened, we should stop iterating the ActiveAnimNotifyState array
		if (ActiveAnimNotifyState.IsValidIndex(Index) == false)
		{
			ensureMsgf(false, TEXT("UAnimInstance::ActiveAnimNotifyState has been invalidated by NotifyEnd. AnimInstance: %s, Owning Component: %s, Owning Actor: %s "), *GetNameSafe(this), *GetNameSafe(GetOwningComponent()), *GetNameSafe(GetOwningActor()));
			return;
		}
	}

	// Call 'NotifyBegin' event on freshly added AnimNotifyState.
	for (const FAnimNotifyEvent* AnimNotifyEvent : NotifyStateBeginEvent)
	{
		if (ShouldTriggerAnimNotifyState(AnimNotifyEvent->NotifyStateClass))
		{
			TRACE_ANIM_NOTIFY(this, *AnimNotifyEvent, Begin);
			AnimNotifyEvent->NotifyStateClass->NotifyBegin(SkelMeshComp, Cast<UAnimSequenceBase>(AnimNotifyEvent->NotifyStateClass->GetOuter()), AnimNotifyEvent->GetDuration());
		}
	}

	// Switch our arrays.
	ActiveAnimNotifyState = MoveTemp(NewActiveAnimNotifyState);

	// Tick currently active AnimNotifyState
	for (const FAnimNotifyEvent& AnimNotifyEvent : ActiveAnimNotifyState)
	{
		if (ShouldTriggerAnimNotifyState(AnimNotifyEvent.NotifyStateClass))
		{
			TRACE_ANIM_NOTIFY(this, AnimNotifyEvent, Tick);
			AnimNotifyEvent.NotifyStateClass->NotifyTick(SkelMeshComp, Cast<UAnimSequenceBase>(AnimNotifyEvent.NotifyStateClass->GetOuter()), DeltaSeconds);
		}
	}
}

void UHeroPlayMontageandWait::TriggerSingleAnimNotify(const FAnimNotifyEvent* AnimNotifyEvent)
{
	// This is for non 'state' anim notifies.
	if (AnimNotifyEvent && (AnimNotifyEvent->NotifyStateClass == NULL))
	{
		if (HandleNotify(*AnimNotifyEvent))
		{
			return;
		}

		if (AnimNotifyEvent->Notify != nullptr)
		{
			// Implemented notify: just call Notify. UAnimNotify will forward this to the event which will do the work.
			TRACE_ANIM_NOTIFY(this, *AnimNotifyEvent, Event);
			AnimNotifyEvent->Notify->Notify(GetSkelMeshComponent(), Cast<UAnimSequenceBase>(AnimNotifyEvent->Notify->GetOuter()));
		}
		else if (AnimNotifyEvent->NotifyName != NAME_None)
		{
			// Custom Event based notifies. These will call a AnimNotify_* function on the AnimInstance.
			const FName FuncName = AnimNotifyEvent->GetNotifyEventName();

			auto NotifyAnimInstance = [this, AnimNotifyEvent, FuncName](UAnimInstance* InAnimInstance)
			{
				check(InAnimInstance);

				if (InAnimInstance == this || InAnimInstance->bReceiveNotifiesFromLinkedInstances)
				{
					UFunction* Function = InAnimInstance->FindFunction(FuncName);
					if (Function)
					{
						// if parameter is none, add event
						if (Function->NumParms == 0)
						{
							TRACE_ANIM_NOTIFY(this, *AnimNotifyEvent, Event);
							InAnimInstance->ProcessEvent(Function, nullptr);
						}
						else if ((Function->NumParms == 1) && (CastField<FObjectProperty>(Function->PropertyLink) != nullptr))
						{
							struct FAnimNotifierHandler_Parms
							{
								UAnimNotify* Notify;
							};

							FAnimNotifierHandler_Parms Parms;
							Parms.Notify = AnimNotifyEvent->Notify;
							TRACE_ANIM_NOTIFY(this, *AnimNotifyEvent, Event);
							InAnimInstance->ProcessEvent(Function, &Parms);
						}
						else
						{
							// Actor has event, but with different parameters. Print warning
							UE_LOG(LogAnimNotify, Warning, TEXT("Anim notifier named %s, but the parameter number does not match or not of the correct type"), *FuncName.ToString());
						}
					}
				}
			};


			if (FSimpleMulticastDelegate* ExistingDelegate = ExternalNotifyHandlers.Find(FuncName))
			{
				ExistingDelegate->Broadcast();
			}

			if (bPropagateNotifiesToLinkedInstances)
			{
				GetSkelMeshComponent()->ForEachAnimInstance(NotifyAnimInstance);
			}
			else
			{
				NotifyAnimInstance(this);
			}
		}
	}
}

void UHeroPlayMontageandWait::EndNotifyStates()
{
	const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
	if (ActorInfo)
	{
		USkeletalMeshComponent* SkelMeshComp = ActorInfo->SkeletalMeshComponent.Get();
	}

	for (FAnimNotifyEvent& Event : ActiveAnimNotifyState)
	{
		if (UAnimNotifyState* NotifyState = Event.NotifyStateClass)
		{
			TRACE_ANIM_NOTIFY(this, Event, End);
			NotifyState->NotifyEnd(SkelMeshComp, Cast<UAnimSequenceBase>(NotifyState->GetOuter()));
		}
	}
	ActiveAnimNotifyState.Reset();
}


