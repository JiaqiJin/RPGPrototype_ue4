// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RPG/RPG.h"
#include "RPG/Character/HeroRPGCharacter.h"
#include "RPG/Data/HeroAbilityDataAsset.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "RPG/Controller/HeroCharacterMovementComponent.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "RPGCharacter.generated.h"

// https://github.com/tranek/GASDocumentation
// https://www.youtube.com/watch?v=Yub52f4ZUU0
UCLASS()
class ARPGCharacter : public AHeroRPGCharacter
{
	GENERATED_BODY()

	///** Camera boom positioning the camera behind the character */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class USpringArmComponent* CameraBoom;

	///** Follow camera */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class UCameraComponent* FollowCamera;
public:
	ARPGCharacter(const class FObjectInitializer& InitializerObject);

	///** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	//float BaseTurnRate;

	///** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	//float BaseLookUpRate;

protected:
	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;

	virtual void Crouch(bool bClientSimulation = false) override;

public:
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedBaseValue() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedMultiplierBase() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetJumpHeight() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetJumpHeightMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetAirControl() const;

	UFUNCTION(BlueprintPure, Category = "Hero|Component|MovementComponent")
	bool IsHeroSprinting() const;

	UFUNCTION(BlueprintPure, Category = "Hero|Component|MovementComponent")
	UHeroCharacterMovementComponent* GetHeroCharacterMovementComponent() const;

	//FORCEINLINE class UHeroAbilityDataAsset* GetDefaultAbilityDataAssert() const { return DefaultAbilities; }

protected:
	// The core ActorComponent for interfacing with the GameplayAbilities System
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;
	// Player Attribute Set
	TWeakObjectPtr<class UHeroPlayerAttributeSet> PlayerAttributes;

	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Attributes")
	UHeroAbilityDataAsset* DefaultAbilities;*/

	void ApplyDefaultAbilities();

	void GrantAbilityToPlayer(FGameplayAbilitySpec Ability);
	void GrantAbilitiesToPlayer(TArray<FGameplayAbilitySpec> Abilities);

	void ShowHeroDebugMenu();
};

