// Fill out your copyright notice in the Description page of Project Settings.


#include "TitanCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "TitanSoul/AbilitySystem/HeroAbilitySystemComponent.h"
#include "TitanSoul/Player/HeroCharacterMovementComponent.h"
// Sets default values
ATitanCharacterBase::ATitanCharacterBase(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Overlap);

	bAlwaysRelevant = true;
}

// Called when the game starts or when spawned
void ATitanCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

UAbilitySystemComponent* ATitanCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

//////////////// ---------------------------------------- /////////////////////
float ATitanCharacterBase::GetHealth() const
{
	if (!AttributeSet)
		return 1.f;

	return AttributeSet->GetHealth();
}

float ATitanCharacterBase::GetMaxHealth() const
{
	return AttributeSet->GetMaxHealth();
}

float ATitanCharacterBase::GetMana() const
{
	return AttributeSet->GetMana();
}

float ATitanCharacterBase::GetMaxMana() const
{
	return AttributeSet->GetMaxMana();
}

float ATitanCharacterBase::GetMoveSpeed() const
{
	return AttributeSet->GetPlayerMovementSpeed();
}



