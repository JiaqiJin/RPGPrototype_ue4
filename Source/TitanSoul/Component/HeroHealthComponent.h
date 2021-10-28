// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "HeroHealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TITANSOUL_API UHeroHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHeroHealthComponent();

	FORCEINLINE class UHealthDataAsset* GetHealthDataAssert() const { return HealthData; }
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenerationChanged(const FOnAttributeChangeData& Data);

	void InitializeHealthAttribute(class AHeroPlayerState* HeroPlayerState);
	void BindHealthAttributeChange(class ATitanSoulCharacter* PlayerCharacter);

	void UpdateHealthBarPercent();
	void UpdateHealthBarText();

	void UpdateHealthRegenerationBarText();
	void UpdateRegenerationVisibility();

	void RemoveHealthRegenerationEffect(class ATitanSoulCharacter* HeroCharacter);
protected:
	float Health = 0;
	float MaxHealth = 0;
	float HealthRegenerationValue = 0.0f;

protected:
	TWeakObjectPtr<class UHeroAttributeSet> PlayerAttributeSet;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(EditAnywhere, Category = "HealthData")
	class UHealthDataAsset* HealthData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hero|UI")
	TWeakObjectPtr<class UHeroHealthWidget> HeroHealthMenu;

	class UHeroHealthWidget* PlayerHealthWidget;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle MaxHealthRegChangedDelegateHandle;
};
