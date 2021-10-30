// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerController.h"
#include "../FunctionLibrary/HeroCheatManager.h"
#include "../UI/MainHeroUIWidget.h"

AHeroPlayerController::AHeroPlayerController(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
	CheatClass = UHeroCheatManager::StaticClass();
}

void AHeroPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AHeroPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	if (HeroMainUI)
	{
		HeroMainWidget = CreateWidget<UMainHeroUIWidget>(GetGameInstance(), HeroMainUI);
		if (HeroMainWidget)
		{
			HeroMainWidget->AddToViewport();
		}
	}
}