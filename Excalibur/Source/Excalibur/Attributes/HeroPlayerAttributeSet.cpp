// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Excalibur/Character/HeroPlayerCharacter.h"

UHeroPlayerAttributeSet::UHeroPlayerAttributeSet()
{

}

void UHeroPlayerAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	//UE_LOG(LogTemp, Warning, TEXT("Init PostGameplayEffectExecute"));

	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssertTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssertTags);

	// Get the Target actor, which should be our owner
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	AHeroPlayerCharacter* TargetCharacter = nullptr;
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		TargetCharacter = Cast<AHeroPlayerCharacter>(TargetActor);
	}

	// Get the Source actor
	AActor* SourceActor = nullptr;
	AController* SourceController = nullptr;
	AHeroPlayerCharacter* SourceCharacter = nullptr;
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

		// Use the controller to find the source pawn
		if (SourceController)
		{
			SourceCharacter = Cast<AHeroPlayerCharacter>(SourceController->GetPawn());
		}
		else
		{
			SourceCharacter = Cast<AHeroPlayerCharacter>(SourceActor);
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
		SetDamage(0.f);

		if (LocalDamageDone > 0)
		{
			// Apply the health change and then clamp it
			const float NewHealth = GetHealth() - LocalDamageDone;
			SetHealth(FMath::Clamp(NewHealth, 0.0f, GetMaxHealth()));
		}
	} // Damage

	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		// Handle mana changes.
		SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
	} // Mana
	else if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		// Handle stamina changes.
		SetStamina(FMath::Clamp(GetStamina(), 0.0f, GetMaxStamina()));
	}
}

void UHeroPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for max health/mana we want to scale the current totals to match
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetPlayerMovementSpeedAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 1000.0f);
	}

	if (Attribute == GetPlayerMovementMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 1.0f, 10.0f);
	}

	if (Attribute == GetPlayerJumpHeightAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 2000.0f);
	}

	if (Attribute == GetPlayerJumpHeightMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 10.0f);
	}

	if (Attribute == GetPlayerAirControlAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 1.0f);
	}

	// Health
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxHealthAttribute().GetNumericValue(this));
	}

	if (Attribute == GetMaxHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.001f, 10000.0f);
	}

	if (Attribute == GetHealthRegenerationAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxHealth());
	}

	if (Attribute == GetHealthRegenerationActivationDelayAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
	}

	// Mana
	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxManaAttribute().GetNumericValue(this));
	}

	if (Attribute == GetMaxManaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.001f, 10000.0f);
	}

	if (Attribute == GetManaRegenerationAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxMana());
	}

	if (Attribute == GetManaRegenerationRateAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
	}

	if (Attribute == GetManaRegenerationActivationDelayAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
	}

	// Stamina
	if (Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxStaminaAttribute().GetNumericValue(this));
	}

	if (Attribute == GetMaxStaminaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.001f, 10000.0f);
	}

	if (Attribute == GetStaminaRegenerationAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxStamina());
	}

	if (Attribute == GetStaminaRegenerationRateAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
	}

	if (Attribute == GetStaminaRegenerationActivationDelayAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.01f, 10.0f);
	}

	if (Attribute == GetHeroLevelAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 1.0f, GetHeroMaxLevel());
	}
}
