// Fill out your copyright notice in the Description page of Project Settings.

#include "HeroDebuggerCategory_Attributes.h"

#if WITH_GAMEPLAY_DEBUGGER

#include "RPG/RPGCharacter.h"
#include "GameFramework/PlayerController.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayDebuggerCategory.h"
#include "GameplayDebugger.h"
#include "GameplayDebuggerCategoryReplicator.h"
//#include "GameplayDebuggerAddonBase.h"
#include "DebugRenderSceneProxy.h"

HeroDebuggerCategory_Attributes::HeroDebuggerCategory_Attributes()
{
	bShowOnlyWithDebugActor = false;
	/*AGameplayDebuggerCategoryReplicator* Replicator = GetReplicator();
	if (Replicator)
	{
		Replicator->SetCategoryEnabled(4, false);
	}*/
}

TSharedRef<FGameplayDebuggerCategory> HeroDebuggerCategory_Attributes::MakeInstance()
{
	return MakeShareable(new HeroDebuggerCategory_Attributes());
}

void HeroDebuggerCategory_Attributes::CollectData(class APlayerController* OwnerPC, class AActor* DebugActor)
{
	if (DebugActor)
	{
		UAbilitySystemComponent* AbilityComp = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(DebugActor);
		if (AbilityComp)
		{
			TArray<FGameplayAttribute> Attributes;
			AbilityComp->GetAllAttributes(Attributes);

			for (FGameplayAttribute Attribute : Attributes)
			{
				if (Attribute.IsValid())
				{
					FAttributeData NewData;
					NewData.AttributeName = Attribute.AttributeName;
					NewData.AttributeCurrentValues = AbilityComp->GetNumericAttribute(Attribute);
					AttributeDatas.Add(NewData);
				}
			}
		}
	}
}

void HeroDebuggerCategory_Attributes::DrawData(class APlayerController* OwnerPC, class FGameplayDebuggerCanvasContext& CanvasContext)
{
	//ARPGCharacter* PlayerCharacter = Cast<ARPGCharacter>(OwnerPC->GetPawn());
	if (OwnerPC)
	{
		for (FAttributeData Data : AttributeDatas)
		{
			FString DataString = FString::Printf(TEXT("%s : % f"), *Data.AttributeName, Data.AttributeCurrentValues);
			CanvasContext.Print(FColor::Yellow, DataString);
		}
	}
	AttributeDatas.Empty();
}

#endif