// Copyright Epic Games, Inc. All Rights Reserved.

#include "KingGameMode.h"
#include "KingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKingGameMode::AKingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
