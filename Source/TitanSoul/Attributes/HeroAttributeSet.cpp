// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAttributeSet.h"
#include "TitanSoul/AbilitySystem/HeroAbilitySystemComponent.h"
#include "TitanSoul/TitanSoulCharacter.h"
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

// To respond to changes to an Attribute's CurrentValue() before the change happens
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

// Called just before a GameplayEffect is executed to modify the base value of an attribute.
void UHeroAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();

	// Get Actor which should be owner
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	ATitanSoulCharacter* TargetCharacter = nullptr;
	
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		TargetCharacter = Cast<ATitanSoulCharacter>(TargetActor);
	}

	// Get the Source actor
	AActor* SourceActor = nullptr;
	AController* SourceController = nullptr;
	ATitanSoulCharacter* SourceCharacter = nullptr;

	if (Source && Source->AbilityActorInfo.IsValid() && Source->AbilityActorInfo->AvatarActor.IsValid())
	{
		SourceActor = Source->AbilityActorInfo->AvatarActor.Get();
		SourceController = Source->AbilityActorInfo->PlayerController.Get();
		if (SourceController == nullptr && SourceActor != nullptr)
		{
			if (APawn* Pawn = Cast<APawn>(SourceActor))
			{
				SourceController = Pawn->GetController();
			}
		}
		// USe the controller to find source pawn
		if (SourceController)
		{
			SourceCharacter = Cast<ATitanSoulCharacter>(SourceController->GetPawn());
		}
		else
		{
			SourceCharacter = Cast<ATitanSoulCharacter>(SourceActor);
		}
		// Set the causer actor based on context if it's set
		if (Context.GetEffectCauser())
		{
			SourceActor = Context.GetEffectCauser();
		}
	}

	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		// Try to extract a hit result
		FHitResult HitResult;
		if (Context.GetHitResult())
		{
			HitResult = *Context.GetHitResult();
		}

		// Store a local copy of the amount of damage done and clear the damage attribute
		const float LocalDamageDone = GetDamage();
		SetDamage(0.0f);

		if (LocalDamageDone > 0.0f)
		{
			// Apply the health change and then clamp it
			const float NewHealth = GetHealth() - LocalDamageDone;
			SetHealth(FMath::Clamp(NewHealth, 0.0f, GetMaxHealth()));
		}
	}
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