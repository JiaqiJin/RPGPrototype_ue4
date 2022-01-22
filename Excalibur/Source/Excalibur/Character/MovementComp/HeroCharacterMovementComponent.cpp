// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "../HeroPlayerCharacter.h"
#include "../../ExcaliburCharacter.h"
#include "GameplayTagContainer.h"

UHeroCharacterMovementComponent::UHeroCharacterMovementComponent()
{
	NavAgentProps.bCanCrouch = true;
}

float UHeroCharacterMovementComponent::GetMaxSpeed() const
{
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(GetOwner());
	if (!Character)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxSpeed();
	}

	float MovementSpeedMultiplier = Character->GetMovementSpeedMultiplier();
	return Character->GetMovementSpeed() * MovementSpeedMultiplier;
}

float UHeroCharacterMovementComponent::GetMaxJumpHeight() const
{
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(GetOwner());
	if (Character)
	{
		float JumpHeightMultiplier = Character->GetJumpHeightMultiplier();
		const float Gravity = GetGravityZ();
		if (FMath::Abs(Gravity) > KINDA_SMALL_NUMBER)
		{
			return FMath::Square(JumpZVelocity * JumpHeightMultiplier) / (-2.f * Gravity);
		}
		else
		{
			return 0.f;
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxJumpHeight();
	}
}

float UHeroCharacterMovementComponent::GetMaxJumpHeightWithJumpTime() const
{
	const float MaxJumpHeight = GetMaxJumpHeight();

	if (CharacterOwner)
	{
		return (CharacterOwner->JumpMaxHoldTime * JumpZVelocity) + MaxJumpHeight;
	}

	return MaxJumpHeight;
}

void UHeroCharacterMovementComponent::SetJumpZVelocity(float CurrentJumpZVelocity)
{
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(GetOwner());
	if (Character)
	{
		float jumpHeightMult = Character->GetJumpHeightMultiplier();
		float jumpHeight = Character->GetJumpHeight();

		JumpZVelocity = jumpHeight * jumpHeightMult;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		JumpZVelocity = CurrentJumpZVelocity;
	}
}

void UHeroCharacterMovementComponent::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	// Super 
	Super::OnMovementModeChanged(PreviousMovementMode, PreviousCustomMode);

	if (!HasValidData())
	{
		return;
	}

	AExcaliburCharacter* OwningCharacter = Cast<AExcaliburCharacter>(GetOwner());
	
	if (MovementMode == MOVE_Falling)
	{
		// Check if Falling Tag is valid and player does not have tag
		if (FallingTag.IsValid() && !OwningCharacter->GetAbilitySystemComponent()->HasMatchingGameplayTag(FallingTag))
		{
			// Add Falling Tag to Player
			OwningCharacter->GetAbilitySystemComponent()->AddLooseGameplayTag(FallingTag);
		}
	}
	else if (MovementMode == MOVE_Walking)
	{
		// Check if Falling Tag is valid and player has tag
		if (FallingTag.IsValid() && OwningCharacter->GetAbilitySystemComponent()->HasMatchingGameplayTag(FallingTag))
			// Remove Falling Tag
			OwningCharacter->GetAbilitySystemComponent()->RemoveLooseGameplayTag(FallingTag);
	}
	else
	{
		if (FallingTag.IsValid() && OwningCharacter->GetAbilitySystemComponent()->HasMatchingGameplayTag(FallingTag))
		{
			// Remove Falling Tag
			OwningCharacter->GetAbilitySystemComponent()->RemoveLooseGameplayTag(FallingTag);
		}
	}
}