// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAbilitiesBar.h"
#include "RPG/RPGCharacter.h"
#include "RPG/Controller/HeroPlayerController.h"

bool UHeroAbilitiesBar::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	PopulateAbilitiesBar();

	return true;
}

void UHeroAbilitiesBar::PopulateAbilitiesBar()
{
	AHeroPlayerController* PC = Cast<AHeroPlayerController>(GetOwningPlayer());
	if (PC)
	{
		ARPGCharacter* Character = Cast<ARPGCharacter>(PC->GetCharacter());
		if (Character)
		{
			UE_LOG(LogTemp, Warning, TEXT("Kawaii Valid"));
		}
	}
}
