// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "RPG/HUD/HeroPlayerHUD.h"

AHeroPlayerGameModeBase::AHeroPlayerGameModeBase()
{
	struct ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/Character/HeroPlayerCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	struct ConstructorHelpers::FClassFinder<AController> PlayerControllerClassBP(TEXT("/Game/Player/PlayerController/HeroPlayerController_BP"));
	if (PlayerControllerClassBP.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerClassBP.Class;
	}

	struct ConstructorHelpers::FClassFinder<AHUD> PlayerHUDClassBP(TEXT("/Game/Player/HUD/HeroPlayerHUD_BP"));
	if (PlayerHUDClassBP.Class != NULL)
	{
		HUDClass = PlayerHUDClassBP.Class;
	}
}

