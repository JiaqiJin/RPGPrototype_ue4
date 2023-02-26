// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MultiplayerSessionSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSION_API UMultiplayerSessionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMultiplayerSessionSubsystem();

	// To handle session functionality.

	void CreateSession(int32 NumPublicConnection, FString MatchType);
	void FindSession(int MaxSearchResults);
	void JoinSession(const FOnlineSessionSearchResult& SessionResult);
	void DestroySession();
	void StartSession();

protected:

	// Internal callback for ther delegates we'll add to the Online Session Interface delegate list
	void OnCreateSessionComplete(FName SessioName, bool bWasSucessful);
	void OnFindSessionComplete(bool bWasSucessful);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void OnDestroySessionComplete(FName SessionName, bool bWasSucessful);
	void OnStartSessionComplete(FName SessionName, bool bWasSucessful);

private:
	IOnlineSessionPtr OnlineSessionInterface;
	TSharedPtr<FOnlineSessionSettings> LastSessionSettings;

	// To add to the Online Session Interface delegate list

	/* Delegate called when session created */
	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	/* Delegate called when session started */
	FDelegateHandle CreateSessionCompleteDelegateHandle;

	/** Delegate for searching for sessions */
	FOnFindSessionsCompleteDelegate FindSessionsCompleteDelegate;
	/* Delegate called when session started */
	FDelegateHandle FindSessionsCompleteDelegateHandle;

	/** Delegate for joining a session */
	FOnJoinSessionCompleteDelegate JoinSessionCompleteDelegate;
	/* Delegate called when session started */
	FDelegateHandle JoinSessionCompleteDelegateHandle;

	/** Delegate for destroying a session */
	FOnDestroySessionCompleteDelegate DestroySessionCompleteDelegate;
	/* Delegate called when session started */
	FDelegateHandle DestroySessionCompleteDelegateHandle;

	/* Delegate called when session started */
	FOnStartSessionCompleteDelegate StartSessionCompleteDelegate;
	/* Delegate called when session started */
	FDelegateHandle StartSessionCompleteDelegateHandle;
};