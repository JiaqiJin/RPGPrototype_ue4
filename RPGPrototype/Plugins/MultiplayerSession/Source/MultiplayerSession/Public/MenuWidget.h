// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.generated.h"

class UButton;

UCLASS()
class MULTIPLAYERSESSION_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup(int32 NumberOfPublicConnection = 4, FString TypeOfMatch = FString(TEXT("FreeForAll")));

	virtual bool Initialize() override;
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) override;

	// Callbacks for the custom delegates on the MultiplayerSessionSubsystem
	UFUNCTION()
	void OnCreateSession(bool bWasSuccessful);

private:
	UPROPERTY(meta = (BindWidget))
	UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	UFUNCTION()
	void MenuTearDown();

	// The subsystem designed to handle all online session functionality
	class UMultiplayerSessionSubsystem* MultiplayerSessionSubsystem;

	int32 NumPublicConnection{ 4 };
	FString MatchType{ TEXT("FreeForAll") };
};
