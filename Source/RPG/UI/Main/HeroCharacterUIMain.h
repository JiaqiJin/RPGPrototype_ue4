// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroCharacterUIMain.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroCharacterUIMain : public UUserWidget
{
	GENERATED_BODY()

public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UCharacterHealthWidget* HeroHealth;
		
	UPROPERTY(meta = (BindWidget))
	class UCharacterManaWidget* HeroMana;

public:
	void SetHealthBarPercentage(float value);
	void SetHealthTextBlock(float health, float MaxHealth);
	void SetHealthRegenerationValue(float HealthRegeneration);
	void SetHealthRegenerationVisibility(bool Visible);

	void SetManaBarPercentage(float value);
	void SetManaBarTextBlock(float mana, float MaxMana);
	void SetManaBarRegenerationValue(float ManaRegeneration);
	void SetManaBarRegenerationVisibility(bool Visible);
};
