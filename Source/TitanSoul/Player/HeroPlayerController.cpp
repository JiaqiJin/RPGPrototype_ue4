// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerController.h"
#include "../UI/MainHeroUIWidget.h"

AHeroPlayerController::AHeroPlayerController(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{

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