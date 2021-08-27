// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "ManaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPG_API UManaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UManaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void ManaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxManaChanged(const FOnAttributeChangeData& Data);
	virtual void ManaRegenerationChanged(const FOnAttributeChangeData& Data);

	void InitializeManaAttribute(class AHeroPlayerState* HeroPlayerState);
	void BindManaAttributeChange(class ARPGCharacter* HeroCharacter);

	void UpdateManaBarPercent();
	void UpdateManahBarText();

	void UpdateManaRegenerationBarText();

	void RemoveManaRegenerationEffect(class ARPGCharacter* HeroCharacter);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float Mana = 0.0f;
	float MaxMana = 0.0f;
	float ManaRegenerationValue = 0.0f;

protected:
	TWeakObjectPtr<class UHeroPlayerAttributeSet> PlayerAttributes;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	FDelegateHandle ManaChangedDelegateHandle;
	FDelegateHandle MaxManaChangedDelegateHandle;
	FDelegateHandle MaxManaRegChangedDelegateHandle;
};
