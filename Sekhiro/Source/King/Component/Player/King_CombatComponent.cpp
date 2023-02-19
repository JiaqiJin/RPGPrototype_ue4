// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/Player/King_CombatComponent.h"
#include "GAS/King_AbilitySystemComponent.h"
#include "GAS/King_GameplayAbility.h"
#include "KingCharacter.h"
#include "DrawDebugHelpers.h"
#include "AI/AI_CharacterBase.h"

// Sets default values for this component's properties
UKing_CombatComponent::UKing_CombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UKing_CombatComponent::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<AKingCharacter>(GetOwner());
	
	RegisterCombatAttack(CombatAttack, TEXT("NormalAttack"));
}

void UKing_CombatComponent::NormalAttack(const FName& InKey)
{

}

void UKing_CombatComponent::RegisterCombatAttack(FSimpleCombatCheck& InCombatCheck, const FName& InKey)
{
	InCombatCheck.Character = Character.Get();
	InCombatCheck.CombatKey = InKey;
	InCombatCheck.MaxIndex = 4;
}

bool UKing_CombatComponent::IsEnemyInFront()
{
	// Check Enemy
	AAI_CharacterBase* AICharacter = GetInFrontAICharacter();
	if (AICharacter)
	{
		// TODO 
		UE_LOG(LogTemp, Warning, TEXT("Enemy Detected"));
		return true;
	}

	return false;
}

AAI_CharacterBase* UKing_CombatComponent::GetInFrontAICharacter()
{
	AAI_CharacterBase* AICharacter;

	// Player Position
	const FVector StartPosition = Character->GetActorLocation();
	const FRotator StartRotation = Character->GetActorRotation();
	const FVector EndPosition = StartPosition + (StartRotation.Vector() * MaxCheckEnemyDistance);

	// Hit result parameters
	UWorld* World = GetWorld();
	FHitResult HitResult;
	FCollisionQueryParams Params = FCollisionQueryParams(FName("LineTraceSingle"));
	Params.AddIgnoredActor(Character->GetRootComponent()->GetOwner());

	FVector Delta = EndPosition - StartPosition;

	TWeakObjectPtr<AActor> NewActor;

	bool bHit = false;

	for (int i = -5; i <= 5; i++)
	{
		FVector Axis = FVector::ZAxisVector; // (0.0f, 0.0f, 1.0f)
		float Rad = FMath::DegreesToRadians(i * VisibleAttackAngle); // Loop for each degrees and converto to radian
		FQuat Local_Quaternion = FQuat(Axis, Rad);	// create a new quaternion and assign a new value for each rotation
		FRotator rotator = FRotator(Local_Quaternion);
		FVector NewDelta = rotator.RotateVector(Delta);

		// Final position of each point
		FVector New_EndPos = NewDelta + StartPosition;

		bHit = GetWorld()->LineTraceSingleByChannel(
			HitResult,
			StartPosition,
			New_EndPos,
			ECollisionChannel::ECC_Pawn,
			Params
		);

		::DrawDebugLine(World, StartPosition, New_EndPos, bHit ? FColor::Green : FColor::Red, false, 1.0f);

		if (bHit)
		{
			NewActor = HitResult.Actor;
			AICharacter = Cast<AAI_CharacterBase>(NewActor);
			return AICharacter;
			break;
		}
	}

	return nullptr;
}