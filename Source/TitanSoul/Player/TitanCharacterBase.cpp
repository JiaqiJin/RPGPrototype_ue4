// Fill out your copyright notice in the Description page of Project Settings.


#include "TitanCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "TitanSoul/GameplayAbility/HeroGameplayAbility.h"
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

	// TAGS
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));

	HealthComponent = CreateDefaultSubobject<UHeroHealthComponent>(TEXT("Health Component"));
	ManaComponent = CreateDefaultSubobject<UHeroManaComponent>(TEXT("Mana Component"));
	StaminaComponent = CreateDefaultSubobject<UHeroStaminaComponent>(TEXT("Stamina Component"));
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

bool ATitanCharacterBase::IsAlive() const
{
	return GetHealth() > 0.0f;
}

void ATitanCharacterBase::Die()
{
	//
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCharacterMovement()->GravityScale = 0;
	GetCharacterMovement()->Velocity = FVector(0);

	// Delegate Die function

	if (AbilitySystemComponent.IsValid())
	{
		AbilitySystemComponent->CancelAbilities();
	}
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

float ATitanCharacterBase::GetCurrentLevel() const
{
	return 1.0f;
}

void ATitanCharacterBase::AddCharacterAbilities()
{
	for (TSubclassOf<UHeroGameplayAbility>& StartupAbility : PlayerAbilities)
	{
		AbilitySystemComponent->GiveAbility(
			FGameplayAbilitySpec(StartupAbility, 1, static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID), AbilitySystemComponent->GetOwner()));
	}

	AbilitySystemComponent->CharacterAbilitiesGiven = true;
}


