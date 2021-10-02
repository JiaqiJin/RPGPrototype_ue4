// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "../TitanSoulCharacter.h"
#include "GameplayTagContainer.h"

UHeroCharacterMovementComponent::UHeroCharacterMovementComponent()
{
	SprintSpeedMultiplier = 1.4f;
}

float UHeroCharacterMovementComponent::GetMaxSpeed() const
{
	ATitanSoulCharacter* Owner = Cast<ATitanSoulCharacter>(GetOwner());
	if (!Owner)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxSpeed();
	}

	if (RequestToStartSprinting)
	{
		return Owner->GetMoveSpeed() * SprintSpeedMultiplier;
	}

	return Owner->GetMoveSpeed();
}