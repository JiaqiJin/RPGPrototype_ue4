// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MultiplayerSessionSubsystem.generated.h"

// https://juejin.cn/post/7144339595314855966
// https://unreal.gg-labs.com/wiki-archives/networking/how-to-use-sessions-in-c++

// Declaring our custum delegates for the Menu class to bind callback to
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnCreateSessionComplete, bool, bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiplayerOnFindSessionsComplete, const TArray<FOnlineSessionSearchResult>& SessionResult, bool bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_OneParam(FMultiplayerOnJoinSessionComplete, EOnJoinSessionCompleteResult::Type Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnDestroySessionComplete, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnStartSessionComplete, bool, bWasSuccessful);

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

	// Delegates
	FMultiplayerOnCreateSessionComplete MultiplayerOnCreateSessionComplete;
	FMultiplayerOnFindSessionsComplete MultiplayerOnFindSessionsComplete;
	FMultiplayerOnJoinSessionComplete MultiplayerOnJoinSessionComplete;
	FMultiplayerOnDestroySessionComplete MultiplayerOnDestroySessionComplete;
	FMultiplayerOnStartSessionComplete MultiplayerOnStartSessionComplete;

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
	TSharedPtr<FOnlineSessionSearch> LastSessionSearch;

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
