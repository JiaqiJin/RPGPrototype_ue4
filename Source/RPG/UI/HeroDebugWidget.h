// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RPG/Data/HeroAbilityDataAsset.h"
#include "Components/ComboBoxString.h"
#include "HeroDebugWidget.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroDebugWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UHeroDebugWidget(const FObjectInitializer& ObjectInitializer);

	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* CloseButton;

	UPROPERTY(meta = (BindWidget))
	class UComboBoxString* Ability1Selector;

	UPROPERTY(meta = (BindWidget))
	class UComboBoxString* Ability2Selector;

	UPROPERTY(meta = (BindWidget))
	class UComboBoxString* Ability3Selector;

private:
	UFUNCTION()
	void CloseHeroDebugButton();

	UFUNCTION()
	void Ability1Changed(FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void Ability2Changed(FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void Ability3Changed(FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void RemapAbility(TEnumAsByte<EHeroAbilityInputID::Type> Command, FString SelectedItem, ESelectInfo::Type SelectionType);

	void PopulateAbilityComboBox(class UComboBoxString& AbilitySelector);
};
