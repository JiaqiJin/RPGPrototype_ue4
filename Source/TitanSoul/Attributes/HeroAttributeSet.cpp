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
	, PlayerMovementSpeed(1.0f)
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

	if (Attribute == GetHealthRegenerationActivationDelayAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
	}

	if (Attribute == GetManaRegenerationActivationDelayAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
	}

	if (Attribute == GetStaminaRegenerationActivationDelayAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
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

void UHeroAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, Health, OldHealth);
}

void UHeroAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, MaxHealth, OldMaxHealth);
}

void UHeroAttributeSet::OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenerate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, HealthRegenRate, OldHealthRegenerate);
}

void UHeroAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, Stamina, OldStamina);
}

void UHeroAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, MaxStamina, OldMaxStamina);
}

void UHeroAttributeSet::OnRep_StaminaRegenRate(const FGameplayAttributeData& OldStaminaRegenerate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, StaminaRegenRate, OldStaminaRegenerate);
}

void UHeroAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, Mana, OldMana);
}

void UHeroAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, MaxMana, OldMaxMana);
}

void UHeroAttributeSet::OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, ManaRegenRate, OldManaRegenRate);
}

void UHeroAttributeSet::OnRep_AttackPower(const FGameplayAttributeData& OdlAttackPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, AttackPower, OdlAttackPower);
}

void UHeroAttributeSet::OnRep_DefensePower(const FGameplayAttributeData& OldDefensePower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, DefensePower, OldDefensePower);
}

void UHeroAttributeSet::OnRep_MoveSpeed(const FGameplayAttributeData& OldMoveSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, PlayerMovementSpeed, OldMoveSpeed);
}

void UHeroAttributeSet::OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, Level, OldCharacterLevel);
}