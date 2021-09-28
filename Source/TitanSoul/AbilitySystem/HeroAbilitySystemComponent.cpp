// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"

UHeroAbilitySystemComponent::UHeroAbilitySystemComponent()
{

}

UHeroAbilitySystemComponent* UHeroAbilitySystemComponent::GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent)
{
	return Cast<UHeroAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}