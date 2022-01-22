// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroItemBase.h"
#include "GameplayTagContainer.h"
#include "GameplayEffect.h"
#include "Engine/StaticMesh.h"
#include "Components/SphereComponent.h"
#include "Excalibur/Character/HeroPlayerCharacter.h"

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
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(OtherActor);
	UAbilitySystemComponent* AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (Character && PotionHealthEffect)
	{
		//UE_LOG(LogTemp, Warning, TEXT("KAWAII"));
		FGameplayEffectContextHandle ContextHandle;
		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(PotionHealthEffect, 2.0f, ContextHandle);
		FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
		//Spec->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("Data.HealthPotion"), 5.0f);
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Hero Item Base OnOverlapBegin Error (ADD UGameplayEffect PLS)."),
			*FString(__FUNCTION__), *GetName());
	}

	Destroy();
}

