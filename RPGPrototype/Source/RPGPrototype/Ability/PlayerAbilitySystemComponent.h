// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGPrototype/RPGPrototype.h"
#include "AbilitySystemComponent.h"
#include "PlayerAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROTOTYPE_API UPlayerAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	UPlayerAbilitySystemComponent();

	/** Version of function in AbilitySystemGlobals that returns correct type */
	static UPlayerAbilitySystemComponent* GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent = false);
};
