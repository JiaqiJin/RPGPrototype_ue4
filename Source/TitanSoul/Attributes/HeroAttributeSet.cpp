// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAttributeSet.h"
#include "TitanSoul/AbilitySystem/HeroAbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

UHeroAttributeSet::UHeroAttributeSet()
	: Health(1.f)
	, MaxHealth(1.f)
	, Mana(0.f)
	, MaxMana(0.f)
	, AttackPower(1.0f)
	, DefensePower(1.0f)
	, MoveSpeed(1.0f)
	, Damage(0.0f)
{

}

void UHeroAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UHeroAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMaxHealthAttribute())
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		AdjustAttributeForMaxChange(Mana, MaxMana, NewValue, GetManaAttribute());
	}
}

void UHeroAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}

void UHeroAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, 
	const FGameplayAttribute& AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		// Applies an inplace mod to the given attribute.
		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void UHeroAttributeSet::OnRep_Health()
{
	//GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, Health);
}

void UHeroAttributeSet::OnRep_MaxHealth()
{
	//GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, MaxHealth);
}

void UHeroAttributeSet::OnRep_Mana()
{
	//GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, Mana);
}

void UHeroAttributeSet::OnRep_MaxMana()
{
	//GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, MaxMana);
}

void UHeroAttributeSet::OnRep_AttackPower()
{
	//GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, AttackPower);
}

void UHeroAttributeSet::OnRep_DefensePower()
{
	//GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, DefensePower);
}

void UHeroAttributeSet::OnRep_MoveSpeed()
{
	//GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, MoveSpeed);
}