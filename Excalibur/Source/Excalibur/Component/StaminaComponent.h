// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "StaminaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXCALIBUR_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStaminaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	float Stamina = 0;
	float MaxStamina = 0;

	FDelegateHandle StaminaChangedDelegateHandle;
protected:
	TWeakObjectPtr<class UHeroPlayerAttributeSet> PlayerAttributes;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	virtual void StaminaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxStaminaChanged(const FOnAttributeChangeData& Data);

	void InitializeStaminaAttribute(class AHeroPlayerState* PS);
	void BindStaminaAttributeChange();

	void UpdateStaminaBarPercent();
	void UpdateStaminaBarText();

	void UpdateStaminaRegenerationBarText();
	void UpdateRegenerationVisibility();

protected:
	class AHeroPlayerCharacter* PlayerCharacter;
};
