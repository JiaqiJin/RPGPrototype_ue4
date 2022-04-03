// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerRPGCharacter.h"
#include "RPGPrototype/Data/HeroAbilitytDataAsset.h"
#include "RPGPrototype/Ability/PlayerAbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "RPGPrototype/Attribute/PlayerAttributeSet.h"

// Sets default values
APlayerRPGCharacter::APlayerRPGCharacter()
{
	AbilitySystemComponent = CreateDefaultSubobject<UPlayerAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UPlayerAttributeSet>(TEXT("AttributeSet"));

	CharacterLevel = 1;
	bAbilitiesInitialized = false;
}

UAbilitySystemComponent* APlayerRPGCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void APlayerRPGCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	UE_LOG(LogTemp, Warning, TEXT("Possessed"));

	if (AbilitySystemComponent)
	{
		ApplyDefaultAbilities();
	}
}

void APlayerRPGCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void APlayerRPGCharacter::ApplyDefaultAbilities()
{
	if (!DefaultAbilities)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAbility for %s. Please fill in the character's Blueprint."), *FString(__FUNCTION__), *GetName());
		return;
	}

	for (FHeroGameplayAbilityBindInfo Ability : DefaultAbilities->Abilities)
	{
		GrantAbilityToPlayer(FGameplayAbilitySpec(Ability.HeroAbilities, GetCharacterLevel(), static_cast<uint32>(Ability.Command), this));
	}

	// Now apply passives
	for (TSubclassOf<UGameplayEffect>& GameplayEffect : PassiveGameplayEffects)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
		if (NewHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(),
				AbilitySystemComponent);
		}
	}

	bAbilitiesInitialized = true;
}

void APlayerRPGCharacter::GrantAbilityToPlayer(FGameplayAbilitySpec Ability)
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	if (!Ability.Ability)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Ability Not Granted for %s. Ability is not valid."), *FString(__FUNCTION__), *GetName());
		return;
	}

	AbilitySystemComponent->GiveAbility(Ability);
}


float APlayerRPGCharacter::GetHealth() const
{
	if (!AttributeSet)
		return 1.f;

	return AttributeSet->GetHealth();
}

float APlayerRPGCharacter::GetMaxHealth() const
{
	return AttributeSet->GetMaxHealth();
}

float APlayerRPGCharacter::GetMana() const
{
	return AttributeSet->GetMana();
}

float APlayerRPGCharacter::GetMaxMana() const
{
	return AttributeSet->GetMaxMana();
}

float APlayerRPGCharacter::GetMoveSpeed() const
{
	return AttributeSet->GetMoveSpeed();
}

int32 APlayerRPGCharacter::GetCharacterLevel() const
{
	return CharacterLevel;
}

bool APlayerRPGCharacter::SetCharacterLevel(int32 NewLevel)
{
	if (CharacterLevel != NewLevel && NewLevel > 0)
	{
		RemoveStartupGameplayAbilities();
		CharacterLevel = NewLevel;
		return true;
	}
	return false;
}

void APlayerRPGCharacter::RemoveStartupGameplayAbilities()
{
	check(AbilitySystemComponent);

	if (GetLocalRole() == ROLE_Authority && bAbilitiesInitialized)
	{
		// Remove any abilities added from a previous call
		TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
		for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
		{
			/*if ((Spec.SourceObject == this) && DefaultAbilities->Abilities.Contains(Spec.Ability->GetClass()))
			{
				AbilitiesToRemove.Add(Spec.Handle);
			}*/
		}

		// Do in two passes so the removal happens after we have the full list
		for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
		{
			AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
		}
	}

	bAbilitiesInitialized = false;
}

// Input
void APlayerRPGCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind to AbilitySystemComponent
	AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
		FString("CancelTarget"), FString("EHeroAbilityInputID"), static_cast<int32>(EHeroAbilityInputID::Type::Confirm), static_cast<int32>(EHeroAbilityInputID::Type::Cancel)));
}
