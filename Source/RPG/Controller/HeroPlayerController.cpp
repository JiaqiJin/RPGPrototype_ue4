// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerController.h"
#include "RPG/CheatManager/HeroCheatManager.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "RPG/UI/HeroDebugWidget.h"

AHeroPlayerController::AHeroPlayerController(const class FObjectInitializer& InitializerObject) :
	Super(InitializerObject)
{
	CheatClass = UHeroCheatManager::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget> MainDebugWidget(TEXT("/Game/Player/UI/HeroDebugUI/BP_HeroDebugUI"));

	if (!ensure(MainDebugWidget.Class != nullptr))
	{
		UE_LOG(LogTemp, Error, TEXT("%s() ShowHeroDebug"), *FString(__FUNCTION__), *GetName());
	}

	HeroDebugMenu = MainDebugWidget.Class;
	if (!HeroDebugMenu)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() HeroDebugMenu are empty"), *FString(__FUNCTION__), *GetName());
	}
}


void AHeroPlayerController::ShowHeroDebug()
{
	if (HeroDebugMenu)
	{
		HeroDebugMenuWidget = CreateWidget<UHeroDebugWidget>(GetGameInstance(), HeroDebugMenu);

		if (HeroDebugMenuWidget)
		{
			HeroDebugMenuWidget->AddToViewport();
			bShowMouseCursor = true;
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(HeroDebugMenuWidget->TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

			SetInputMode(InputModeData);
		}
	}
}