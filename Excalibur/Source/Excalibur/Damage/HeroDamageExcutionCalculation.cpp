// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroDamageExcutionCalculation.h"
#include "Excalibur/Data/HeroDamageDataAsset.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"

struct HeroDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Damage)

	HeroDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UHeroPlayerAttributeSet, Damage, Target, false)
	}
};

static const HeroDamageStatics& DamageStatics()
{
	static HeroDamageStatics DStatics;
	return DStatics;
}

UHeroDamageExcutionCalculation::UHeroDamageExcutionCalculation()
{
	struct ConstructorHelpers::FObjectFinder<UHeroDamageDataAsset> HeroDamageDataClass(TEXT("/Game/Player/Damage/DamageData/HeroDamageAsset"));
	if (HeroDamageDataClass.Object != NULL)
	{
		DamageData = HeroDamageDataClass.Object;
	}
}

void UHeroDamageExcutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
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
		//ApplyHealthRegenerationPreventionEffect(TargetActor);
	}
}

