// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/King_CharacterBase.h"
#include "GAS/King_AbilitySystemComponent.h"
#include "Datas/King_AssetManager.h"
#include "Datas/GameplayAbilityDatas/King_GameplayAbilityDatas.h"
#include "GAS/King_AttributeSet.h"

// Sets default values
AKing_CharacterBase::AKing_CharacterBase(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKing_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKing_CharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKing_CharacterBase::InitializePassiveAttributes()
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (PassiveGameplayEffects.Num() > 0)
	{
		EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		for (TSubclassOf<UGameplayEffect>& GameplayEffect : PassiveGameplayEffects)
		{
			ApplyGameplayeEffectToPlayerWithParam(GameplayEffect);
		}
	}
}

void AKing_CharacterBase::ApplyGameplayeEffectToPlayerWithParam(TSubclassOf<UGameplayEffect> GameplayEffect)
{
	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCurrentLevel(), EffectContext);
	if (NewHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(),
			AbilitySystemComponent.Get());
	}
}

bool AKing_CharacterBase::CharacterCancelAbilities(FGameplayTagContainer& GameplayTagContainer)
{
	if (AbilitySystemComponent.IsValid())
	{
		TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
		AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesToActivate);
		if (AbilitiesToActivate.Num() > 0)
		{
			for (auto& CurrentAbility : AbilitiesToActivate)
			{
				if (CurrentAbility->IsActive())
				{				
					/*GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, FString::Printf(TEXT("Ability Cancel Name :  %s"),
						*CurrentAbility->Ability->GetName()));*/
					AbilitySystemComponent->CancelAbility(CurrentAbility->Ability);
					return true;
				}
			}
		}
	}

	return false;
}

UAbilitySystemComponent* AKing_CharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

float AKing_CharacterBase::GetMovementSpeed() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetMoveSpeed();
	}
	return 0.0f;
}

float AKing_CharacterBase::GetMovementSpeedBaseValue() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetMoveSpeedAttribute().GetGameplayAttributeData(PlayerAttributes.Get())->GetBaseValue();
	}
	return 0.0f;
}

float AKing_CharacterBase::GetMovementSpeedMultiplier() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetMovementMultiplier();
	}
	return 0.0f;
}

float AKing_CharacterBase::GetMovementSpeedMultiplierBase() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetMovementMultiplierAttribute().GetGameplayAttributeData(PlayerAttributes.Get())->GetBaseValue();
	}
	return 0.0f;
}

float AKing_CharacterBase::GetJumpHeight() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetJumpHeight();
	}
	return 0.0f;
}

float AKing_CharacterBase::GetJumpHeightMultiplier() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetJumpHeightMultiplier();
	}
	return 0.0f;
}

float AKing_CharacterBase::GetAirControl() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetAirControl();
	}
	return 0.0f;
}

float AKing_CharacterBase::GetCurrentLevel() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetCharacterLevel();
	}
	return 0.0f;
}