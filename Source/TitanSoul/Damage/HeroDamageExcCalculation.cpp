// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroDamageExcCalculation.h"
#include "TitanSoul/TitanSoulCharacter.h"
#include "TitanSoul/Datas/DamageDataAsset.h"
#include "TitanSoul/Datas/HealthDataAsset.h"
#include "TitanSoul/Component/HeroHealthComponent.h"
#include "TitanSoul/Attributes/HeroAttributeSet.h"


struct HeroDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Damage);

	HeroDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UHeroAttributeSet, Damage, Target, false);
	}
};

static const HeroDamageStatics& DamageStatics()
{
	static HeroDamageStatics DStatics;
	return DStatics;
}

UHeroDamageExcCalculation::UHeroDamageExcCalculation()
{
	struct ConstructorHelpers::FObjectFinder<UDamageDataAsset> HeroDamageDataClass(TEXT("/Game/Player/Data/DamageData/HeroDamageData"));
	if (HeroDamageDataClass.Object != NULL)
	{
		DamageData = HeroDamageDataClass.Object;
	}
}

void UHeroDamageExcCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySysComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySysComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* TargetActor = TargetAbilitySysComponent ? TargetAbilitySysComponent->AvatarActor : nullptr;
	AActor* SourcetActor = SourceAbilitySysComponent ? SourceAbilitySysComponent->AvatarActor : nullptr;


	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	// Gathet the tags form the source and target asd that affect which buffs should be used
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParams;
	EvaluateParams.SourceTags = SourceTags;
	EvaluateParams.TargetTags = TargetTags;

	FName DamageTag;
	if (DamageData)
	{
		DamageTag = DamageData->GetDataTag();
	}

	//float Damage = FMath::Max(<float>(Spec.Get))
	float Damage = 0.0f;
	Damage += FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(DamageTag), false, -1.0f), 0.0f);

	if (Damage > 0.0f)
	{
		// Set the Target's damage meta attribute
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(DamageStatics().DamageProperty, EGameplayModOp::Additive, Damage));
		ApplyHealthRegenerationPreventionEffect(TargetActor);
	}
}

void UHeroDamageExcCalculation::ApplyHealthRegenerationPreventionEffect(AActor* TargetActor) const
{
	ATitanSoulCharacter* Character = Cast<ATitanSoulCharacter>(TargetActor);
	UAbilitySystemComponent* AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (Character && DamageData)
	{
		UHeroHealthComponent* HealthComponent = Character->GetHealthComponent();
		if (HealthComponent)
		{
			UHealthDataAsset* HealthData = HealthComponent->GetHealthDataAssert();
			if (HealthData)
			{
				FGameplayEffectContextHandle ContextHandle;
				FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(HealthData->HealthPreventionEffect, Character->GetCurrentLevel(), ContextHandle);
				FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
				//Spec->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("Data.HealthPotion"), 5.0f);
				AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);
			}
		}
	}
}