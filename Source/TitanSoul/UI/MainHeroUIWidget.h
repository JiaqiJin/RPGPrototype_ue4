// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainHeroUIWidget.generated.h"

/**
 * 
 */
UCLASS()
class TITANSOUL_API UMainHeroUIWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UHeroHealthWidget* HeroHealth;

	UPROPERTY(meta = (BindWidget))
	class UHeroManaWidget* HeroMana;

	UPROPERTY(meta = (BindWidget))
	class UHeroStaminaWidget* HeroStamina;

public:
	void SetHealthBarPercentage(float value);
	void SetHealthTextBlock(float health, float MaxHealth);
	void SetHealthRegenerationValue(float HealthRegeneration);
	void SetHealthRegenerationVisibility(bool Visible);

	void SetManaBarPercentage(float value);
	void SetManaBarTextBlock(float mana, float MaxMana);
	void SetManaBarRegenerationValue(float ManaRegeneration);
	void SetManaBarRegenerationVisibility(bool Visible);

	void SetStaminaBarPercentage(float value);
	void SetStaminaBarTextBlock(float mana, float MaxStamina);
	void SetStaminaBarRegenerationValue(float StaminRegeneration);
	void SetStaminBarRegenerationVisibility(bool Visible);
};
