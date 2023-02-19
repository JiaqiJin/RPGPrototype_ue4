// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character/King_CharacterBase.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AI_CharacterBase.generated.h"

class UKing_AbilitySystemComponent;
class UGameplayEffect;
class AAIController;
class UKing_GameplayAbilityDatas;

UENUM(BlueprintType)
enum class King_EnemyType : uint8
{
	None UMETA(DisplayName = "None"),
	Melee UMETA(DisplayName = "Melee"),
	Range UMETA(DisplayName = "Range"),
	Boss UMETA(DisplayName = "Boss"),
};

UENUM(BlueprintType)
enum class King_EnemyState : uint8
{
	None UMETA(DisplayName = "None"),
	InPlace UMETA(DisplayName = "InPlace"),
	Patrol UMETA(DisplayName = "Patrol"),
	Attack UMETA(DisplayName = "Attack"),
	Raged UMETA(DisplayName = "Raged"),
};

UCLASS()
class KING_API AAI_CharacterBase : public AKing_CharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAI_CharacterBase(const class FObjectInitializer& InitializerObject);

	virtual void PossessedBy(AController* NewController) override;

	UFUNCTION()
	bool IsPlayerInFront();
	// Getters
	King_EnemyType GetEnemyType() { return EnemyType; }
	King_EnemyState GetEnemyState() { return EnemyState; }

public:
	// Default attributes for a character for initializing on spawn/respawn.
	// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "AI|GAS")
	TSubclassOf<UGameplayEffect> DefaultAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "AI|GAS")
	UKing_GameplayAbilityDatas* DefaultAbilityDatas;

	UPROPERTY()
	AAIController* EnemyAIController = nullptr;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Initialize AI Attributes from GE
	void InitializeAttributes();

	// Grant Ability to AI
	void GrantAICharacterAbilities();

protected:
	// The core ActorComponent for interfacing with the GameplayAbilities System
	TWeakObjectPtr<UKing_AbilitySystemComponent> AbilitySystemComponent;

	// Enemy Type
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	King_EnemyType EnemyType;

	// Enemy State
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	King_EnemyState EnemyState;
};
