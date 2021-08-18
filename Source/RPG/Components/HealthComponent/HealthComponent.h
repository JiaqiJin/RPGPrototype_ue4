// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPG_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	TWeakObjectPtr<class UHeroPlayerAttributeSet> PlayerAttributes;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float Health = 0.0f;
	float MaxHealth = 0.0f;

private:
	
	void HealthChanged(const FOnAttributeChangeData& Data);
	void MaxHealthChanged(const FOnAttributeChangeData& Data);

	void InitializeHealthAttribute(class AHeroPlayerState* HeroPlayerState);
	void BindHealthAttributeChange(class ARPGCharacter* HeroCharacter);
};
