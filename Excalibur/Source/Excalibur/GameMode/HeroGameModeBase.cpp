// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameModeBase.h"
#include "UObject/ConstructorHelpers.h"

AHeroGameModeBase::AHeroGameModeBase()
{
	struct ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/Character/HeroCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	struct ConstructorHelpers::FClassFinder<AController> PlayerControllerClassBP(TEXT("/Game/Player/Character/HeroPlayerController_BP"));
	if (PlayerControllerClassBP.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerClassBP.Class;
	}
}
