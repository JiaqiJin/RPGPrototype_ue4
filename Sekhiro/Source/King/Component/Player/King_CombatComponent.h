// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "King_Types.h"
#include "King_CombatComponent.generated.h"

class UKing_AbilitySystemComponent;
class UKing_GameplayAbility;
class AKingCharacter;
class AAI_CharacterBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KING_API UKing_CombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UKing_CombatComponent();

	void NormalAttack(const FName& InKey);

	// Check if enemy is in front of the player
	UFUNCTION()
	bool IsEnemyInFront();

	UFUNCTION()
	AAI_CharacterBase* GetInFrontAICharacter();

	UFUNCTION()
	void RegisterCombatAttack(FSimpleCombatCheck& InCombatCheck, const FName& InKey);

	// Getters And Seeters
	FSimpleCombatCheck* GetSimpleCombatInfo() { return &CombatAttack; }

	bool GetIsAbilityCanceled() { return bCancelActivateAbility; }
	void SetIsAbilityCanceled(bool Value) { bCancelActivateAbility = Value; }

	bool GetIsInComboAttack() { return bIsInComboAttack; }
	void SetIsInComboAttack(bool Value) { bIsInComboAttack = Value; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UKing_GameplayAbility> LightAttack;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxCheckEnemyDistance = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attack Setting")
	float VisibleAttackAngle = 8.0f;

	FSimpleCombatCheck CombatAttack;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	TWeakObjectPtr<AKingCharacter> Character;
	UPROPERTY()
	TWeakObjectPtr<UKing_AbilitySystemComponent> AbilitySystemComponent;

	// Cancel Ability
	bool bCancelActivateAbility = false;

	// Combat
	bool bIsInComboAttack = false;
};
