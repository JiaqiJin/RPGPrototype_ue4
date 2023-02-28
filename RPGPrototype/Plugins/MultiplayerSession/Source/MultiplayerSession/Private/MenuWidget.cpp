// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuWidget.h"
#include "Components/Button.h"
#include "MultiplayerSessionSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"

void UMenuWidget::MenuSetup(int32 NumberOfPublicConnection, FString TypeOfMatch)
{
	NumPublicConnection = NumberOfPublicConnection;
	MatchType = TypeOfMatch;

	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	bIsFocusable = true;

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}

	UGameInstance* GameInstance = GetGameInstance();
	if (GameInstance)
	{
		MultiplayerSessionSubsystem = GameInstance->GetSubsystem<UMultiplayerSessionSubsystem>();
	}

	if (MultiplayerSessionSubsystem)
	{
		MultiplayerSessionSubsystem->MultiplayerOnCreateSessionComplete.AddDynamic(this, &UMenuWidget::OnCreateSession);
		MultiplayerSessionSubsystem->MultiplayerOnFindSessionsComplete.AddUObject(this, &UMenuWidget::OnFindSessionsComplete);
		MultiplayerSessionSubsystem->MultiplayerOnJoinSessionComplete.AddUObject(this, &UMenuWidget::OnJoinSessionComplete);
		MultiplayerSessionSubsystem->MultiplayerOnDestroySessionComplete.AddDynamic(this, &UMenuWidget::OnDestroySessionComplete);
		MultiplayerSessionSubsystem->MultiplayerOnStartSessionComplete.AddDynamic(this, &UMenuWidget::OnStartSessionComplete);
	}
}

bool UMenuWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	if (HostButton)
	{
		HostButton->OnClicked.AddDynamic(this, &UMenuWidget::HostButtonClicked);
	}

	if (JoinButton)
	{
		HostButton->OnClicked.AddDynamic(this, &UMenuWidget::JoinButtonClicked);
	}

	return true;
}

void UMenuWidget::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	MenuTearDown();
	Super::OnLevelRemovedFromWorld(InLevel, InWorld);
}

void UMenuWidget::HostButtonClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Host Button Clicked"));

	if (MultiplayerSessionSubsystem)
	{
		MultiplayerSessionSubsystem->CreateSession(NumPublicConnection, MatchType);
	}
}

void UMenuWidget::JoinButtonClicked()
{
	JoinButton->SetIsEnabled(false);
	if (MultiplayerSessionSubsystem)
	{
		MultiplayerSessionSubsystem->FindSession(10000);
	}
}

void UMenuWidget::MenuTearDown()
{
	RemoveFromParent();
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}

void UMenuWidget::OnCreateSession(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Session Create Successfully")));

		UWorld* World = GetWorld();
		if (World)
		{
			// listen wait other player to join
			World->ServerTravel(FString("/Game/Level/Level1?listen"));
		}
	}
	else
	{
		// TODO 
	}
}

void UMenuWidget::OnFindSessionsComplete(const TArray<FOnlineSessionSearchResult>& SessionResult, bool bWasSuccessful)
{
	
}

void UMenuWidget::OnJoinSessionComplete(EOnJoinSessionCompleteResult::Type Result)
{

}

void UMenuWidget::OnDestroySessionComplete(bool bWasSuccessful)
{

}

void UMenuWidget::OnStartSessionComplete(bool bWasSuccessful)
{

}