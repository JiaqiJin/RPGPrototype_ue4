// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAbilityWidget.h"

bool UHeroAbilityWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}