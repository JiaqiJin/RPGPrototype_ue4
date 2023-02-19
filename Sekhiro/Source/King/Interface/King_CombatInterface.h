// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "King_CombatInterface.generated.h"

/**
 * 
 */
UINTERFACE(MinimalAPI, NotBlueprintable, BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class UKing_CombatInterface : public UInterface
{
	GENERATED_BODY()
};


class KING_API IKing_CombatInterface
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void CombatAttack(const FName& InKey) {};

	virtual struct FSimpleCombatCheck* GetSimpleCombatInfo() { return NULL; }
};
