// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "King_Types.generated.h"


USTRUCT(BlueprintType)
struct KING_API FSimpleCombatCheck
{
	GENERATED_USTRUCT_BODY()

	FSimpleCombatCheck();

	UPROPERTY(EditDefaultsOnly, Category = ComboAttack)
	int32 CombatIndex; // Combat Index

	UPROPERTY(EditDefaultsOnly, Category = ComboAttack)
	bool bLongPress; // Long Press

	UPROPERTY(EditDefaultsOnly, Category = ComboAttack)
	bool bShortPress; // Short Press

	class IKing_CombatInterface* Character; //CombatInterface

	UPROPERTY()
	int32 MaxIndex = 0; //Max Combat number

	UPROPERTY()
	FName CombatKey; // Combat Name

	void UpdateCombatIndex();

	void Press();

	void Released();

	void Reset();
};