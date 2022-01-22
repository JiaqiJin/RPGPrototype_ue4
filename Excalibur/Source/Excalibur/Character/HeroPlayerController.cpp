// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerController.h"
#include "Excalibur/Data/HeroCheatManager.h"


AHeroPlayerController::AHeroPlayerController(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
	CheatClass = UHeroCheatManager::StaticClass();
}

void AHeroPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	
	if (HeroMainUI)
	{
		HeroMainWidget = CreateWidget<UHeroCharacterUIMain>(GetGameInstance(), HeroMainUI);
		if (HeroMainWidget)
		{
			HeroMainWidget->AddToViewport();
		}
	}
}