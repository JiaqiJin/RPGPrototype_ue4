// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroAbilitiesBar.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroAbilitiesBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	bool Initialize() override;

	void PopulateAbilitiesBar();

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* AbilityScrollBox;
};
