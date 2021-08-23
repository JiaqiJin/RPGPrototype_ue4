// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayStatics.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "RPG/RPGCharacter.h"
#include "RPG/Data/HeroDamageData.h"

float UHeroGameplayStatics::HeroApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator,
	AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, bool damageOverTime)
{
	ARPGCharacter* Character = Cast<ARPGCharacter>(DamagedActor);
	UAbilitySystemComponent* AbilitySystemComponent = Character->GetAbilitySystemComponent();

	if (Character)
	{
		UHeroDamageData* DamageData = Character->GetDamageData();
		if (DamageData)
		{
			FName DamageTag = DamageData->GetDataTag();
			TSubclassOf<UGameplayEffect> DamageEffect = (damageOverTime) ? DamageData->DamageOverTimeGameplayEffect : DamageData->DamageGameplayEffect;
			FGameplayEffectContextHandle ContextHandle;
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DamageEffect, 1.0f, ContextHandle);
			FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
			Spec->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(DamageTag), BaseDamage);
			AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);
			//Spec->GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(DamageTag), false, -1.0f);
		}
	/*	FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CooldownGE->GetClass(), GetAbilityLevel());
		SpecHandle.Data.Get()->DynamicGrantedTags.AppendTags(CooldownTags);
		SpecHandle.Data.Get()->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName(OurSetByCallerTag)), CooldownDuration.GetValueAtLevel(GetAbilityLevel()));
		ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);*/
	}
	return BaseDamage;
}

