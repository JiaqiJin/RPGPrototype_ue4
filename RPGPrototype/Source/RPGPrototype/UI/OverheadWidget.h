// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

/**
 * 
 */
UCLASS()
class RPGPROTOTYPE_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	class UTextBlock* DisplayText;

	void SetDisplayText(FString TextToDisplay);
	void ShowPlayNetRole(APawn* InPawn);
protected:
	/**
	 * Called when a top level widget is in the viewport and the world is potentially coming to and end. When this occurs,
	 * it's not save to keep widgets on the screen.  We automatically remove them when this happens and mark them for pending kill.
	 */
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) override;
};
