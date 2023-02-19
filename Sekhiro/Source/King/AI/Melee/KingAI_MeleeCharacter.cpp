// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Melee/KingAI_MeleeCharacter.h"

AKingAI_MeleeCharacter::AKingAI_MeleeCharacter(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{

}

void AKingAI_MeleeCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}