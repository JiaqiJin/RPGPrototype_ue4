// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayStatics.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "RPG/RPGCharacter.h"
#include "RPG/Data/HeroDamageData.h"

float UHeroGameplayStatics::ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator,
	AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass)
{
	return 0.0f;
	ARPGCharacter* Character = Cast<ARPGCharacter>(DamagedActor);
	UAbilitySystemComponent* AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (Character)
	{
		UHeroDamageData* DamageData = Character->GetDamageData();
		if (DamageData)
		{
			TSubclassOf<UGameplayEffect> DamageEffect = DamageData->DamageGameplayEffect;
			FGameplayEffectContextHandle ContextHandle;
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DamageEffect, 1.0f, ContextHandle);
		}
	/*	FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CooldownGE->GetClass(), GetAbilityLevel());
		SpecHandle.Data.Get()->DynamicGrantedTags.AppendTags(CooldownTags);
		SpecHandle.Data.Get()->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName(OurSetByCallerTag)), CooldownDuration.GetValueAtLevel(GetAbilityLevel()));
		ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);*/
	}
	
}

