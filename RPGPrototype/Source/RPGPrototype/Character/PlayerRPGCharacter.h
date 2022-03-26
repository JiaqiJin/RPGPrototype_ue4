// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RPGPrototype/RPGPrototypeCharacter.h"
#include "AbilitySystemInterface.h"
#include "PlayerRPGCharacter.generated.h"

UCLASS()
class RPGPROTOTYPE_API APlayerRPGCharacter : public ARPGPrototypeCharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerRPGCharacter();

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;
private:
	// The core ActorComponent for interfacing with the GameplayAbilities System
	class UAbilitySystemComponent* AbilitySystemComponent;
};
