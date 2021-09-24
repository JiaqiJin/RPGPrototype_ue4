// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroItemBase.h"
#include "Components/SphereComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "RPG/RPGCharacter.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"

// Sets default values
AHeroItemBase::AHeroItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

// Called every frame
void AHeroItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AHeroItemBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ARPGCharacter* Character = Cast<ARPGCharacter>(OtherActor);
	UAbilitySystemComponent* AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (Character && PotionHealthEffect)
	{
		//UE_LOG(LogTemp, Warning, TEXT("KAWAII"));
		FGameplayEffectContextHandle ContextHandle;
		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(PotionHealthEffect, Character->GetCurrentLevel(), ContextHandle);
		FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
		//Spec->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("Data.HealthPotion"), 5.0f);
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);
	}

	Destroy();
}