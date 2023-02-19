// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/King_GameState.h"
#include "Datas/GameplayAbilityDatas/King_PlayerAbilityDatas.h"
#include "KingCharacter.h"
#include "AbilitySystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameplayEffect.h"
#include "GAS/King_AbilitySystemComponent.h"

AKing_GameState::AKing_GameState()
{

}

// Called when the game starts or when spawned
void AKing_GameState::BeginPlay()
{
    Super::BeginPlay();

    // AbilitySystemComponent GiveAbility to player
    ApplyDefaultPlayerGameplayAbilities();
}

void AKing_GameState::Tick(float DeltaSeconds)
{

}

void AKing_GameState::ApplyDefaultPlayerGameplayAbilities()
{
    if (!DefaultAbilities)
    {
        UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAbility for %s. Please fill in the character's Blueprint."), *FString(__FUNCTION__), *GetName());
        return;
    }

    AKingCharacter* Character = Cast<AKingCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (Character)
    {
        UKing_AbilitySystemComponent* AbilitySystemComponent = Cast<UKing_AbilitySystemComponent>(Character->GetAbilitySystemComponent());
        if (AbilitySystemComponent)
        {
            for (FKing_GameplayAbilityInfo Ability : DefaultAbilities->Abilities)
            {
                AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability.SATORIAbility, 1, static_cast<uint32>(Ability.AbilityKeys), Character));
            }
        }
    }
}