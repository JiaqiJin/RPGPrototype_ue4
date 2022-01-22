// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroCharacterUIMain.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroCharacterUIMain : public UUserWidget
{
	GENERATED_BODY()

public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UCharacterHealthWidget* HeroHealth;

	UPROPERTY(meta = (BindWidget))
	class UCharacterManaWidget* HeroMana;

	UPROPERTY(meta = (BindWidget))
	class UCharacterStaminaWidget* HeroStamina;
public:
	// Health
	void SetHealthBarPercentage(float value);
	void SetHealthTextBlock(float health, float MaxHealth);
	void SetHealthRegenerationValue(float HealthRegeneration);
	void SetHealthRegenerationVisibility(bool Visible);

	//Mana
	void SetManaBarPercentage(float value);
	void SetManaTextBlock(float health, float MaxHealth);
	void SetManaRegenerationValue(float HealthRegeneration);
	void SetManaRegenerationVisibility(bool Visible);

	// Stamina
	void SetStaminaBarPercentage(float value);
	void SetStaminaTextBlock(float health, float MaxHealth);
	void SetStaminaRegenerationValue(float HealthRegeneration);
	void SetStaminaRegenerationVisibility(bool Visible);

};
