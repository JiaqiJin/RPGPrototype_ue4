#include "HeroDebuggerCategory_OwnedTag.h"

#if WITH_GAMEPLAY_DEBUGGER
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "GameplayAbilitySpec.h"
#include "GameplayDebugger.h"
#include "GameplayTagContainer.h"

HeroDebuggerCategory_OwnedTag::HeroDebuggerCategory_OwnedTag()
{
	bShowOnlyWithDebugActor = false;
}

/** Creates an instance of this category - will be used on module startup to include our category in the Editor */
TSharedRef<FGameplayDebuggerCategory> HeroDebuggerCategory_OwnedTag::MakeInstance()
{
	return MakeShareable(new HeroDebuggerCategory_OwnedTag());
}

/** Collects the data we would like to print */
void HeroDebuggerCategory_OwnedTag::CollectData(class APlayerController* OwnerPC, class AActor* DebugActor)
{
	UAbilitySystemComponent* AbilityComp = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwnerPC);
	if (AbilityComp)
	{
		static FGameplayTagContainer OwnerTags;
		OwnerTags.Reset();
		AbilityComp->GetOwnedGameplayTags(OwnerTags);
		
		for (const FGameplayTag& Tag : OwnerTags)
		{
			OwnedTags.AddUnique(Tag.ToString());
		}
	}
}

/** Displays the data we collected in the CollectData function */
void HeroDebuggerCategory_OwnedTag::DrawData(class APlayerController* OwnerPC, class FGameplayDebuggerCanvasContext& CanvasContext)
{
	if (OwnerPC)
	{
		for (FString Tags : OwnedTags)
		{
			CanvasContext.Print(FColor::Yellow, Tags);
		}
	}
}

#endif