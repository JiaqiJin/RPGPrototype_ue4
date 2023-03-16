// Fill out your copyright notice in the Description page of Project Settings.


#include "RPG_LobbyGameMode.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

void ARPG_LobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	int32 NumberOfPlayers = GameState->PlayerArray.Num();

	if(NumberOfPlayers == 2)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			bUseSeamlessTravel = true;
			World->ServerTravel(FString("/Game/Level/Level1?listen"));
		}
	}
}

void ARPG_LobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
}