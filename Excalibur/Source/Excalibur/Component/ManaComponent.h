// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "ManaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXCALIBUR_API UManaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UManaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	float Mana = 0;
	float MaxMana = 0;

	FDelegateHandle ManaChangedDelegateHandle;
protected:
	TWeakObjectPtr<class UHeroPlayerAttributeSet> PlayerAttributes;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;

	virtual void ManaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxManaChanged(const FOnAttributeChangeData& Data);

	void InitializeManaAttribute(class AHeroPlayerState* PS);
	void BindManaAttributeChange();

	void UpdateManaBarPercent();
	void UpdateManaBarText();

	void UpdateManaRegenerationBarText();
	void UpdateRegenerationVisibility();

protected:
	class AHeroPlayerCharacter* PlayerCharacter;
};
