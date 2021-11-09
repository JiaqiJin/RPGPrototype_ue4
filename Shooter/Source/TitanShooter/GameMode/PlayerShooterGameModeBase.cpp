// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShooterGameModeBase.h"
#include "../Character/ShooterCharacter.h"
#include "../Character/ShooterPlayerController.h"
#include "../Character/ShooterPlayerState.h"
#include "../GameState/ShooterGameState.h"
#include "../HUD/ShooterHUD.h"

APlayerShooterGameModeBase::APlayerShooterGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<AShooterCharacter> PlayerPawnBPClass(TEXT("/Game/Player/Character/PlayerCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PlayerControllerClass = AShooterPlayerController::StaticClass();
	PlayerStateClass = AShooterPlayerState::StaticClass();
	//GameStateClass = AShooterGameState::StaticClass();
	HUDClass = AShooterHUD::StaticClass();
}