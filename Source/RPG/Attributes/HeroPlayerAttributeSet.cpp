// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "RPG/RPGCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UHeroPlayerAttributeSet::UHeroPlayerAttributeSet()
{
	
}

void UHeroPlayerAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Contex = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Contex.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssertTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssertTags);

	// Get the taeget actor, which should be our owner
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	AHeroRPGCharacter* TargetCharacter = nullptr;

	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		TargetCharacter = Cast<AHeroRPGCharacter>(TargetActor);
	}

	// Get the source Actor
	AActor* SourceActor = nullptr;
	AController* SourceController = nullptr;
	AHeroRPGCharacter* SourceCharacter = nullptr;

	if (Source && Source->AbilityActorInfo.IsValid() && Source->AbilityActorInfo->AvatarActor.IsValid())
	{
		SourceActor = Source->AbilityActorInfo->AvatarActor.Get();
		SourceController = Source->AbilityActorInfo->PlayerController.Get();
		if (SourceActor != nullptr && SourceController == nullptr)
		{
			if (APawn* Pawn = Cast<APawn>(SourceActor))
			{
				SourceController = Pawn->GetController();
			}
		}

		// Use the controller to find the source pawn
		if (SourceController)
		{
			SourceCharacter = Cast<AHeroRPGCharacter>(SourceController->GetPawn());
		}
		else
		{
			SourceCharacter = Cast<AHeroRPGCharacter>(SourceActor);
		}

		if (Contex.GetEffectCauser())
		{
			SourceActor = Contex.GetEffectCauser();
		}
	}

	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		// Try ti extract a hit result
		FHitResult HitResource;
		if (Contex.GetHitResult())
		{
			HitResource = *Contex.GetHitResult();
		}

		// Store a local copy of the amout if damage done and clear the damage attribute
		const float LocalDamageDone = GetDamage();
		SetDamage(0.0f);

		if (LocalDamageDone > 0.0f)
		{
			const float NewHealth = GetHealth() - LocalDamageDone;
			SetHealth(FMath::Clamp(NewHealth, 0.0f, GetMaxHealth()));
		}
	}

	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}
}

// Respond to changes to an Attribute's Current Value before changes happen.
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

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxHealthAttribute().GetNumericValue(this));
	}

	if (Attribute == GetMaxHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.001f, 10000.0f);
	}

	if (Attribute == GetHeroLevelAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 1.0f, GetHeroMaxLevel());
	}

}