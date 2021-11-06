// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "HeroStaminaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TITANSOUL_API UHeroStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHeroStaminaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void InitializeStaminaAttribute(class AHeroPlayerState* HeroPlayerState);
	virtual void BindStaminaAttributeChange(class ATitanSoulCharacter* Character);

	virtual void StaminaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxStaminaChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaRegenerationChanged(const FOnAttributeChangeData& Data);

	virtual void UpdateStaminaBarPercent();
	virtual void UpdateStaminahBarText();
	virtual void UpdateStaminaRegenerationBarText();

	virtual void RemoveStaminaRegenerationEffect(class ATitanSoulCharacter* Character);
private:
	float Stamina = 0.0f;
	float MaxStamina = 0.0f;
	float StaminaRegenerationValue = 0.0f;

protected:
	TWeakObjectPtr<class UHeroAttributeSet> PlayerAttributes;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(EditAnywhere, Category = "Stamina")
		class UStaminaDataAsset* StaminaData;

	FDelegateHandle StaminaChangedDelegateHandle;
	FDelegateHandle MaxStaminaChangedDelegateHandle;
	FDelegateHandle MaxStaminaRegChangedDelegateHandle;
		
};
