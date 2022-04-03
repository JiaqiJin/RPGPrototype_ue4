// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RPGPrototype/RPGPrototypeCharacter.h"
#include "RPGPrototype/Ability/PlayerAbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "PlayerRPGCharacter.generated.h"

class UHeroAbilitytDataAsset;
class UGameplayEffect;
class UPlayerAttributeSet;

UCLASS()
class RPGPROTOTYPE_API APlayerRPGCharacter : public ARPGPrototypeCharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerRPGCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	FORCEINLINE class UHeroAbilitytDataAsset* GetDefaultAbilityDataAssert() const { return DefaultAbilities; }

	// Returns current health
	UFUNCTION(BlueprintCallable)
	virtual float GetHealth() const;

	// Returns current max health
	UFUNCTION(BlueprintCallable)
	virtual float GetMaxHealth() const;

	// Returns current mana
	UFUNCTION(BlueprintCallable)
	virtual float GetMana() const;

	// Returns current max mana
	UFUNCTION(BlueprintCallable)
	virtual float GetMaxMana() const;

	// Returns current speed
	UFUNCTION(BlueprintCallable)
	virtual float GetMoveSpeed() const;

	// Returns current character level
	UFUNCTION(BlueprintCallable)
	virtual int32 GetCharacterLevel() const;

	// Modifies the character level
	UFUNCTION(BlueprintCallable)
	virtual bool SetCharacterLevel(int32 NewLevel);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	void ApplyDefaultAbilities();
	void GrantAbilityToPlayer(FGameplayAbilitySpec Ability);

	// Remove any startup gameplay abilities
	void RemoveStartupGameplayAbilities();
protected:

	// The level of this character,
	UPROPERTY(EditAnywhere, Replicated, Category = Abilities)
	int32 CharacterLevel;

	// If true we have initialized our abilities
	UPROPERTY()
	bool bAbilitiesInitialized;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Attributes")
	UHeroAbilitytDataAsset* DefaultAbilities;

	// The core ActorComponent for interfacing with the GameplayAbilities System
	UPROPERTY()
	class UPlayerAbilitySystemComponent* AbilitySystemComponent;
	/** List of attributes modified by the ability system */
	UPROPERTY()
	UPlayerAttributeSet* AttributeSet;

	// Passive gameplay effects applied on creation
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Abilities)
	TArray<TSubclassOf<UGameplayEffect>> PassiveGameplayEffects;
};
