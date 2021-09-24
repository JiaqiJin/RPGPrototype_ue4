// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroAbilityWidget.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroAbilityWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UImage* AbilityIcon;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* AbilityCooldown;
};
