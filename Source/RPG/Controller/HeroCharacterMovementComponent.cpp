// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "RPG/RPGCharacter.h"
#include "GameplayTagContainer.h"


UHeroCharacterMovementComponent::UHeroCharacterMovementComponent()
{
	NavAgentProps.bCanCrouch = true;
}

float UHeroCharacterMovementComponent::GetMaxSpeed() const
{
	ARPGCharacter* Owner = Cast<ARPGCharacter>(GetOwner());
	if (!Owner)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxSpeed();
	}

	float MovementSpeedMultiplier = Owner->GetMovementSpeedMultiplier();
	return Owner->GetMovementSpeed() * MovementSpeedMultiplier;
}

void UHeroCharacterMovementComponent::SetNewJumpZVelocity(float CurrentJumpZValue)
{
	ARPGCharacter* Owner = Cast<ARPGCharacter>(GetOwner());
	if (Owner)
	{
		float JumpHeightMultiplier = Owner->GetJumpHeightMultiplier();
		float JumpHeight = Owner->GetJumpHeight();
		
		JumpZVelocity = JumpHeight * JumpHeightMultiplier;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		JumpZVelocity = CurrentJumpZValue;
	}
}

void UHeroCharacterMovementComponent::SetNewAirControl(float NewValue)
{
	ARPGCharacter* Owner = Cast<ARPGCharacter>(GetOwner());
	if (Owner)
	{
		float LocalAirControl = Owner->GetAirControl();
		AirControl = LocalAirControl;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		AirControl = NewValue;
	}
}

void UHeroCharacterMovementComponent::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PreviousMovementMode, PreviousCustomMode);

	if (!HasValidData())
	{
		return;
	}

	ARPGCharacter* OwningPlayer = Cast<ARPGCharacter>(GetOwner());

	if (MovementMode == MOVE_Falling)
	{
		// Allow us to use on Apex Reached delegate in abilities
		bNotifyApex = true;

		if (FallingTag.IsValid() && !OwningPlayer->GetAbilitySystemComponent()->HasMatchingGameplayTag(FallingTag))
		{
			OwningPlayer->GetAbilitySystemComponent()->AddLooseGameplayTag(FallingTag);
		}
	}
	else if (MovementMode == MOVE_Walking)
	{
		// Return gravity to normal once we walking again
		GravityScale = 1.0f;

		bNotifyApex = false;

		if (FallingTag.IsValid() && OwningPlayer->GetAbilitySystemComponent()->HasMatchingGameplayTag(FallingTag))
		{
			OwningPlayer->GetAbilitySystemComponent()->RemoveLooseGameplayTag(FallingTag);
		}
	}
	else
	{
		bNotifyApex = false;
		if (FallingTag.IsValid() && OwningPlayer->GetAbilitySystemComponent()->HasMatchingGameplayTag(FallingTag))
		{
			OwningPlayer->GetAbilitySystemComponent()->RemoveLooseGameplayTag(FallingTag);
		}
	}
}
