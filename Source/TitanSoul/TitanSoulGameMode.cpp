// Copyright Epic Games, Inc. All Rights Reserved.

#include "TitanSoulGameMode.h"
#include "TitanSoulCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATitanSoulGameMode::ATitanSoulGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/Character/HeroCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
