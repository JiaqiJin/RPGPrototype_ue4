// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/King_GameMode.h"
#include "KingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKing_GameMode::AKing_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}