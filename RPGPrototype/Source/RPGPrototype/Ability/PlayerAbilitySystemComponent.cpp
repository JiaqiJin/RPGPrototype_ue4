// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"

UPlayerAbilitySystemComponent::UPlayerAbilitySystemComponent()
{

}

UPlayerAbilitySystemComponent* UPlayerAbilitySystemComponent::GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent)
{
	return Cast<UPlayerAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}
