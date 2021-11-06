// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "HeroManaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TITANSOUL_API UHeroManaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHeroManaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void InitializeManaAttribute(class AHeroPlayerState* HeroPlayerState);
	virtual void BindManaAttributeChange(class ATitanSoulCharacter* Character);

	virtual void ManaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxManaChanged(const FOnAttributeChangeData& Data);
	virtual void ManaRegenerationChanged(const FOnAttributeChangeData& Data);

	virtual void UpdateManaBarPercent();
	virtual void UpdateManahBarText();
	virtual void UpdateManaRegenerationBarText();

	virtual void RemoveManaRegenerationEffect(class ATitanSoulCharacter* Character);
private:
	float Mana = 0.0f;
	float MaxMana = 0.0f;
	float ManaRegenerationValue = 0.0f;

protected:
	TWeakObjectPtr<class UHeroAttributeSet> PlayerAttributes;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(EditAnywhere, Category = "Mana")
	class UManaDataAsset* ManaData;

	FDelegateHandle ManaChangedDelegateHandle;
	FDelegateHandle MaxManaChangedDelegateHandle;
	FDelegateHandle MaxManaRegChangedDelegateHandle;
};
