// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroItemBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "../TitanSoulCharacter.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"

// Sets default values
AHeroItemBase::AHeroItemBase()
{
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ItemCollision"));

	SetRootComponent(ItemCollision);
	ItemMesh->SetupAttachment(GetRootComponent());

	ItemCollision->OnComponentBeginOverlap.AddDynamic(this, &AHeroItemBase::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AHeroItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHeroItemBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ATitanSoulCharacter* Player = Cast<ATitanSoulCharacter>(OtherActor);
	UAbilitySystemComponent* AbilitySystemComponent = Player->GetAbilitySystemComponent();
	if (Player && AbilitySystemComponent)
	{
		FGameplayEffectContextHandle ContextHandle;
		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(PotionHealthEffect, Player->GetCurrentLevel(), ContextHandle);
		FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
		//Spec->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("Data.HealthPotion"), 5.0f);
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);
	}
}
