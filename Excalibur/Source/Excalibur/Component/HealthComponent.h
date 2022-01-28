// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "../UI/Component/CharacterHealthWidget.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXCALIBUR_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

	UPROPERTY(EditAnywhere, Category = "Health Data")
	class UHeroHealthData* HealthData;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	float Health = 0;
	float MaxHealth = 0;
	float HealthRegenerationValue = 0;

	FDelegateHandle HealthChangedDelegateHandle;
protected:
	TWeakObjectPtr<class UHeroPlayerAttributeSet> PlayerAttributes;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenerationChanged(const FOnAttributeChangeData& Data);

	void InitializeHealthAttribute(class AHeroPlayerState* PS);
	void BindHealthAttributeChange();

	void UpdateHealthBarPercent();
	void UpdateHealthBarText();

	void UpdateHealthRegenerationBarText();
	void UpdateRegenerationVisibility();

	void RemoveHealthRegenerationEffect();

protected:
	class AHeroPlayerCharacter* PlayerCharacter;
};
