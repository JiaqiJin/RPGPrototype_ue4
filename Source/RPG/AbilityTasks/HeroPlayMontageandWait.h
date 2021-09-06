// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimInstance.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/AnimTypes.h"
#include "HeroPlayMontageandWait.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHeroMontageSimpleDeletgate);
/** Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' **/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHeroMontageAnimNotifyDelegate, FName, NotifyName, const FBranchingPointNotifyPayload&, BranchingPointPayload);


UCLASS(/*transient, Blueprintable, hideCategories = AnimInstance, BlueprintType, meta = (BlueprintThreadSafe), */)
class RPG_API UHeroPlayMontageandWait : public UAbilityTask
{
	GENERATED_UCLASS_BODY()
	
public:
	/** Called when a montage hits a 'PlayMontageNotify' or 'PlayMontageNotifyWindow' begin */
	FHeroMontageAnimNotifyDelegate OnPlayMontageNotifyBegin;

	UPROPERTY(BlueprintAssignable)
	FHeroMontageSimpleDeletgate	OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FHeroMontageSimpleDeletgate	OnBlendOut;

	UPROPERTY(BlueprintAssignable)
	FHeroMontageSimpleDeletgate	OnInterrupted;

	UPROPERTY(BlueprintAssignable)
	FHeroMontageSimpleDeletgate	OnCancelled;

	UFUNCTION()
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnMontageInterrupted();

	UFUNCTION()
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	/**
	 * Start playing an animation montage on the avatar actor and wait for it to finish
	 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.
	 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing
	 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled
	 *
	 * @param TaskInstanceName Set to override the name of this task, for later querying
	 * @param MontageToPlay The montage to play on the character
	 * @param Rate Change to play the montage faster or slower
	 * @param StartSection If not empty, named montage section to start from
	 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled
	 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely
	 * @param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "PlayMontageAndWait",
	HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UHeroPlayMontageandWait* CreateHeroPlayMontageAndWaitProxy(UGameplayAbility* OwningAbility,
		FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate = 1.f, FName StartSection = NAME_None, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f, float StartTimeSeconds = 0.f);

	virtual void Activate() override;

	/** Called when the ability is asked to cancel from an outside node. What this means depends on the individual task. By default, this does nothing other than ending the task. */
	virtual void ExternalCancel() override;

	virtual FString GetDebugString() const override;

private:

	virtual void OnDestroy(bool AbilityEnded) override;

	/** Checks if the ability is playing a montage and stops that montage, returns true if a montage was stopped, false if not. */
	bool StopPlayingMontage();

	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageEnded MontageEndedDelegate;
	FDelegateHandle InterruptedHandle;

	UPROPERTY()
	UAnimMontage* MontageToPlay;

	UPROPERTY()
	float Rate;

	UPROPERTY()
	FName StartSection;

	UPROPERTY()
	float AnimRootMotionTranslationScale;

	UPROPERTY()
	float StartTimeSeconds;

	UPROPERTY()
	bool bStopWhenAbilityEnds;

public:
	/** Trigger AnimNotifies **/
	void TriggerAnimNotifies(float DeltaSeconds);
	void TriggerSingleAnimNotify(const FAnimNotifyEvent* AnimNotifyEvent);

	/** Triggers end on active notify states and clears the array */
	void EndNotifyStates();

	/** Animation Notifies that has been triggered in the latest tick **/
	UPROPERTY(transient)
	FAnimNotifyQueue NotifyQueue;

	/** Currently Active AnimNotifyState, stored as a copy of the event as we need to
	call NotifyEnd on the event after a deletion in the editor. After this the event
	is removed correctly. */
	UPROPERTY(transient)
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState;

private:
	/** True when Montages are being ticked, and Montage Events should be queued.
	 * When Montage are being ticked, we queue AnimNotifies and Events. We trigger notifies first, then Montage events. */
	UPROPERTY(Transient)
	uint8 bQueueMontageEvents : 1;
};
