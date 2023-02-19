// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionSubsystem.h"
#include "OnlineSubsystem.h"

UMultiplayerSessionSubsystem::UMultiplayerSessionSubsystem()
	: CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindSessionComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete)),
	DestroySessionCompleteDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnDestroySessionComplete)),
	StartSessionCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartSessionComplete))
{
	// Online subsystem
	IOnlineSubsystem* OnlineSubsytem = IOnlineSubsystem::Get();
	if (OnlineSubsytem)
	{
		OnlineSessionInterface = OnlineSubsytem->GetSessionInterface();
	}
}

void UMultiplayerSessionSubsystem::CreateSession(int32 NumPublicConnection, FString MatchType)
{

}

void UMultiplayerSessionSubsystem::FindSession(int MaxSearchResults)
{

}

void UMultiplayerSessionSubsystem::JoinSession(const FOnlineSessionSearchResult& SessionResult)
{

}

void UMultiplayerSessionSubsystem::DestroySession()
{

}

void UMultiplayerSessionSubsystem::StartSession()
{

}

void UMultiplayerSessionSubsystem::OnCreateSessionComplete(FName SessioName, bool bWasSucessful)
{

}

void UMultiplayerSessionSubsystem::OnFindSessionComplete(bool bWasSucessful)
{

}

void UMultiplayerSessionSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{

}

void UMultiplayerSessionSubsystem::OnDestroySessionComplete(FName SessionName, bool bWasSucessful)
{

}

void UMultiplayerSessionSubsystem::OnStartSessionComplete(FName SessionName, bool bWasSucessful)
{

}