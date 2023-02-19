// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "King_CharacterBase.generated.h"

class UKing_AbilitySystemComponent;
class UKing_GameplayAbilityDatas;
class UKing_AttributeSet;

UCLASS()
class KING_API AKing_CharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKing_CharacterBase(const class FObjectInitializer& InitializerObject);

	UFUNCTION(BlueprintCallable)
	virtual void ApplyGameplayeEffectToPlayerWithParam(TSubclassOf<UGameplayEffect> GameplayEffect);

	UFUNCTION()
	virtual void InitializePassiveAttributes();

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMovementSpeedBaseValue() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMovementSpeedMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetMovementSpeedMultiplierBase() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetJumpHeight() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetJumpHeightMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetAirControl() const;

	UFUNCTION(BlueprintPure, Category = "MovementComponent")
	float GetCurrentLevel() const;

	bool CharacterCancelAbilities(FGameplayTagContainer& GameplayTagContainer);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FGameplayEffectContextHandle EffectContext;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Default attributes for a character for initializing
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Player|GameplayEffect")
	TArray<TSubclassOf<UGameplayEffect>> PassiveGameplayEffects;

	// The core ActorComponent for interfacing with the GameplayAbilities System
	TWeakObjectPtr<UKing_AbilitySystemComponent> AbilitySystemComponent;

	// Player Attribute Set
	TWeakObjectPtr<UKing_AttributeSet> PlayerAttributes;
};
