// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AI_CharacterBase.h"
#include "GAS/King_AttributeSet.h"
#include "GAS/King_AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "GameFramework/Controller.h"
#include "AIController.h"
#include "Datas/GameplayAbilityDatas/King_GameplayAbilityDatas.h"
#include "Kismet/GameplayStatics.h"
#include "KingCharacter.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AAI_CharacterBase::AAI_CharacterBase(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
	PlayerAttributes = CreateDefaultSubobject<UKing_AttributeSet>(TEXT("AttributeSetBase"));
	AbilitySystemComponent = CreateDefaultSubobject<UKing_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	// Just For the test
	EnemyState = King_EnemyState::Attack;
}

// Called when the game starts or when spawned
void AAI_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void AAI_CharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	InitializeAttributes();
	GrantAICharacterAbilities();
}

void AAI_CharacterBase::InitializeAttributes()
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (!DefaultAttributes)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAttributes for %s. Please fill in the character's Blueprint."), *FString(__FUNCTION__), *GetName());
		return;
	}

	// Can run on Server and Client
	FGameplayEffectContextHandle AI_EffectContext = AbilitySystemComponent->MakeEffectContext();
	AI_EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributes, 1, AI_EffectContext);
	if (NewHandle.IsValid())
	{
		// Apply Attribute GameplayEffect
		FActiveGameplayEffectHandle ActiveGEHandle = 
			AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
	}
}

// Grant Ability to AI
void AAI_CharacterBase::GrantAICharacterAbilities()
{
	// Grant abilities, but only on the server	
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (!DefaultAbilityDatas)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAbilityDatas for %s. Please fill in the character's Blueprint."), 
			*FString(__FUNCTION__), *GetName());
		return;
	}

	for (FKingGameplayAbilityInfo Ability : DefaultAbilityDatas->Abilities)
	{
		if (!Ability.Ability)
		{
			UE_LOG(LogTemp, Error, TEXT("%s() Ability Not Granted for %s. Ability is not valid."), *FString(__FUNCTION__), *GetName());
			return;
		}

		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability.Ability, 1, static_cast<uint32>(Ability.AbilityKeys), this));
	}
}

bool AAI_CharacterBase::IsPlayerInFront()
{
	bool Result = false;

	AKingCharacter* PlayerCharacter = Cast<AKingCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		/*FVector AI_Location = GetActorLocation();
		FVector Player_Location = PlayerCharacter->GetActorLocation();

		FRotator EnemyRotation = UKismetMathLibrary::FindLookAtRotation(AI_Location, Player_Location);
		FVector NewRot = UKismetMathLibrary::Conv_RotatorToVector(EnemyRotation);
		FVector DotNewRotVector = FVector(NewRot.X, 0.0, 0.0);

		float DotProduct = FVector::DotProduct(DotNewRotVector, PlayerCharacter->GetActorForwardVector());
		float FinalDecACos = UKismetMathLibrary::DegAcos(DotProduct);
		if (FinalDecACos < 90.0)
		{
			return true;
		}*/

		//角度
		float AngleDegrees = 90.0f;
		//Actor位置指向目标位置的向量
		const FVector ActorToTarget = PlayerCharacter->GetTargetLocation() - GetActorLocation();
		//cos的弧度
		float CosRadians = FMath::Cos(FMath::Clamp(FMath::DegreesToRadians(AngleDegrees), 0.f, PI));
		//归一化后的方向向量点乘得到Cos（角度/弧度）
		if (FVector::DotProduct(ActorToTarget.GetUnsafeNormal(), GetActorForwardVector()) > CosRadians)
		{
			Result = true;
		}
		else {
			Result = false;
		}
	}

	return Result;
}