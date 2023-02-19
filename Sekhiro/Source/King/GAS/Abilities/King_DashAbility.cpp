// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/King_DashAbility.h"
#include "KingCharacter.h"
#include "GAS/AbilityTasks/King_PlayMontageAndWaitEvent.h"
#include "AbilitySystemComponent.h"
#include "Character/King_CharacterBase.h"
#include "Character/King_PlayerController.h"
#include "GameFramework/RootMotionSource.h"
#include "GameFramework/Character.h"
#include "Component/Player/King_CharacterMovementComponent.h"

UKing_DashAbility::UKing_DashAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	bIsCreateOnRunning = GIsRunning;
}

void UKing_DashAbility::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!IsValid(AnimMontageDashForward) || !IsValid(AnimMontageDashBackwards) || !IsValid(AnimMontageDashRight) || !IsValid(AnimMontageDashLeft))
	{
		UE_LOG(LogTemp, Warning, TEXT("[%s] UKing_DashAbility: Cannot get Animation Montage ... "), *GetName());
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	Character = Cast<AKingCharacter>(GetAvatarActorFromActorInfo());
	if (!Character)
	{
		UE_LOG(LogTemp, Display, TEXT("[%s] UKing_DashAbility: Cannot Cast ASATORICharacter ... "), *GetName());
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		UE_LOG(LogTemp, Display, TEXT("[%s] UKing_DashAbility: Failed commit ability ... "), *GetName());
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	CollisionParams.AddIgnoredActor(GetAvatarActorFromActorInfo());

	if (!Character->GetVelocity().IsNearlyZero(0.0001f))
	{
		CharacterForwardVector = Character->GetActorForwardVector();
		CharacterRightVector = Character->GetActorRightVector();
		VelocityVector = Character->GetVelocity();
		VelocityVector.Normalize(0.0001f);
	}
	else
	{
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
	}

	float ForwardResult = FVector::DotProduct(CharacterForwardVector, VelocityVector);
	float RightResult = FVector::DotProduct(CharacterRightVector, VelocityVector);

	// Disable Input
	/*AKing_PlayerController* Controller = Cast<AKing_PlayerController>(Character->GetController());
	if (Controller)
	{
		Character->DisableInput(Controller);
	}*/

	if (FMath::IsNearlyEqual(ForwardResult, 1.0f, 0.025f))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Up !!!!");
		const FVector ForwardDir = Character->GetActorRotation().Vector();
		Character->LaunchCharacter(ForwardDir * 10000.0f * 1.0f, true, true);

		UKing_PlayMontageAndWaitEvent* Task = UKing_PlayMontageAndWaitEvent::PlayMontageAndWaitForEvent(this, NAME_None, AnimMontageDashForward, FGameplayTagContainer(), 1.0f, NAME_None, bStopWhenAbilityEnds, 1.0f);
		Task->OnBlendOut.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnCompleted.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnInterrupted.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->OnCancelled.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->EventReceived.AddDynamic(this, &UKing_DashAbility::EventReceived);
		Task->ReadyForActivation();
	}

	else if (FMath::IsNearlyEqual(ForwardResult, -1.0f, 0.025f))
	{
		const FVector ForwardDir = Character->GetActorRotation().Vector();
		Character->LaunchCharacter(ForwardDir * -DashDistance * 1.0f, true, true);

		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Down !!!!");
		UKing_PlayMontageAndWaitEvent* Task = UKing_PlayMontageAndWaitEvent::PlayMontageAndWaitForEvent(this, NAME_None, AnimMontageDashBackwards, FGameplayTagContainer(), 1.0f, NAME_None, bStopWhenAbilityEnds, 1.0f);
		Task->OnBlendOut.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnCompleted.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnInterrupted.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->OnCancelled.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->EventReceived.AddDynamic(this, &UKing_DashAbility::EventReceived);
		Task->ReadyForActivation();
	}

	else if (FMath::IsNearlyEqual(RightResult, 1.0f, 0.025f))
	{
		const FVector LeftVector = Character->GetActorRightVector();
		Character->LaunchCharacter(LeftVector * DashDistance * 1.0f, true, true);

		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Left !!!!");
		UKing_PlayMontageAndWaitEvent* Task = UKing_PlayMontageAndWaitEvent::PlayMontageAndWaitForEvent(this, NAME_None, AnimMontageDashLeft, FGameplayTagContainer(), 1.0f, NAME_None, bStopWhenAbilityEnds, 1.0f);
		Task->OnBlendOut.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnCompleted.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnInterrupted.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->OnCancelled.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->EventReceived.AddDynamic(this, &UKing_DashAbility::EventReceived);
		Task->ReadyForActivation();
	}

	else if (FMath::IsNearlyEqual(RightResult, -1.0f, 0.025f))
	{
		const FVector RightVector = Character->GetActorRightVector();
		Character->LaunchCharacter(RightVector * -DashDistance * 1.0f, true, true);

		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Rigth !!!!");
		UKing_PlayMontageAndWaitEvent* Task = UKing_PlayMontageAndWaitEvent::PlayMontageAndWaitForEvent(this, NAME_None, AnimMontageDashRight, FGameplayTagContainer(), 1.0f, NAME_None, bStopWhenAbilityEnds, 1.0f);
		Task->OnBlendOut.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnCompleted.AddDynamic(this, &UKing_DashAbility::OnCompleted);
		Task->OnInterrupted.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->OnCancelled.AddDynamic(this, &UKing_DashAbility::OnCancelled);
		Task->EventReceived.AddDynamic(this, &UKing_DashAbility::EventReceived);
		Task->ReadyForActivation();
	}
}

void UKing_DashAbility::EndAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility,
	bool bWasCancelled)
{
	/*AKing_PlayerController* Controller = Cast<AKing_PlayerController>(Character->GetController());
	if (Controller)
	{
		Character->EnableInput(Controller);
	}*/
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UKing_DashAbility::OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UKing_DashAbility::OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UKing_DashAbility::EventReceived(FGameplayTag EventTag, FGameplayEventData EventData)
{
	/*FRootMotionSource_MoveToDynamicForce* MoveToForce = new FRootMotionSource_MoveToDynamicForce();
	UKing_CharacterMovementComponent* CharacterMovement = Character->GetPlayerCharacterMovementComponent();
	if (CharacterMovement)
	{
		CharacterMovement->ApplyRootMotionSource(MoveToForce);
	}*/
	if (EventTag == EventAbilityTag)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Reveiced Event !!!!");
	}
}

void UKing_DashAbility::InputReleased(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo)
{
	if (ActorInfo != NULL && ActorInfo->AvatarActor != NULL)
	{
		CancelAbility(Handle, ActorInfo, ActivationInfo, true);
	}
}

void UKing_DashAbility::CancelAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateCancelAbility)
{
	Super::CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateCancelAbility);
}