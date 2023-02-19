// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "King_AbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class KING_API UKing_AbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	//~ Begin UObject interface
	virtual void BeginDestroy() override;

protected:
	UFUNCTION() // UFunction to be able to bind with dynamic delegate
		void OnPawnControllerChanged(APawn* Pawn, AController* NewController);
};
