// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Character/King_CharacterBase.h"
#include "Interface/King_CombatInterface.h"
#include "KingCharacter.generated.h"

class UKing_PlayerAbilityComponent;
class UKing_CombatComponent;
class UKing_CharacterMovementComponent;

UCLASS(config=Game)
class AKingCharacter : public AKing_CharacterBase, public IKing_CombatInterface
{
	GENERATED_BODY()

public:
	AKingCharacter(const class FObjectInitializer& InitializerObject);

	// Combat Functions
	void NormalAttack(const FName& InKey);
	virtual void CombatAttack(const FName& InKey);
	virtual FSimpleCombatCheck* GetSimpleCombatInfo();

	UFUNCTION(BlueprintCallable)
	bool IsEnemyInFront();

	// Getters
	UFUNCTION(BlueprintPure, Category = "Player|Component|MovementComponent")
	UKing_CharacterMovementComponent* GetPlayerCharacterMovementComponent() const;
	UKing_CombatComponent* GetCombatComponent() const;
	UKing_PlayerAbilityComponent* GetPlayerAbilityComponent() const;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

	// Variables
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Player|Component")
	UKing_PlayerAbilityComponent* PlayerAbilityComponent = nullptr;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Player|Component")
	UKing_CombatComponent* CombatComponent = nullptr;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	// Cameras Parameters
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	bool IsRightShoulder = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float ThirdPerson_FOV = 90.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float FirstdPerson_FOV = 90.0f;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

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

	void MouseLeftClick();
	void MouseRightClick();
	void MouseLeftClickReleased();
	void MouseRightClickReleased();
	void DashInput();
	void DashEndInput();
};

