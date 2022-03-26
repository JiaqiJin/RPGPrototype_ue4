// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGPrototypeGameMode.h"
#include "RPGPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPGPrototypeGameMode::ARPGPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
