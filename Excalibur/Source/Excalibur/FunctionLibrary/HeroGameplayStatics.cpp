// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayStatics.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "Excalibur/Data/HeroDamageDataAsset.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"
#include "Excalibur/Character/HeroPlayerCharacter.h"

float UHeroGameplayStatics::HeroApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator,
	AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, bool damageOverTime)
{
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(DamagedActor);
	UAbilitySystemComponent* AbilitySystemComponent = Character->GetAbilitySystemComponent();

	if (Character)
	{
		UHeroDamageDataAsset* DamageData = Character->GetDamageData();
		if (DamageData)
		{
			FName DamageTag = DamageData->GetDataTag();
			TSubclassOf<UGameplayEffect> DamageEffect = (damageOverTime) ? DamageData->DamageOverTimeGameplayEffect : DamageData->DamageGameplayEffect;
			FGameplayEffectContextHandle ContextHandle;
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DamageEffect, 1.0f, ContextHandle);
			FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
			Spec->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(DamageTag), BaseDamage);
			AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);
			Spec->GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(DamageTag), false, -1.0f);
		}
	}
	return BaseDamage;
}