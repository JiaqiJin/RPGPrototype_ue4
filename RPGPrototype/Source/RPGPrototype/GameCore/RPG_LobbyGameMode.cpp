// Fill out your copyright notice in the Description page of Project Settings.


#include "RPG_LobbyGameMode.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

void ARPG_LobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	int32 NumberOfPlayers = GameState->PlayerArray.Num();

	if (GameState)
	{
		APlayerState* PlayerState = NewPlayer->GetPlayerState<APlayerState>();
		if (PlayerState)
		{
			FString PlayerName = PlayerState->GetPlayerName();
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s has joined the game!"), *PlayerName));
		}
	}
}

void ARPG_LobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
}