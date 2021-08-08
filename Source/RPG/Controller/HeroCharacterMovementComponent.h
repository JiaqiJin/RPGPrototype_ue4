// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeroCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	UHeroCharacterMovementComponent();

	virtual float GetMaxSpeed() const override;

	// Set JumzVelocity parameter base on attribute values
	void SetNewJumpZVelocity(float CurrentJumpZValue);

	void SetNewAirControl(float NewValue);

public:
	UFUNCTION(BlueprintCallable, Category = "Hero|Component|MovementComponent")
	void SetSprinting(bool bNewSprint) { isSprinting = bNewSprint; }

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hero|Component|MovementComponent")
	bool isSprinting;
};
