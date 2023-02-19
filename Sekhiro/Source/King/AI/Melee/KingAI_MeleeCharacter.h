// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/AI_CharacterBase.h"
#include "KingAI_MeleeCharacter.generated.h"

/**
 * 
 */
UCLASS()
class KING_API AKingAI_MeleeCharacter : public AAI_CharacterBase
{
	GENERATED_BODY()
	
public:
	AKingAI_MeleeCharacter(const class FObjectInitializer& InitializerObject);

	virtual void PossessedBy(AController* NewController) override;
};
