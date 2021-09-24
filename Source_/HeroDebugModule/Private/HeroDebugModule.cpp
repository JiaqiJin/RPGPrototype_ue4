#include "HeroDebugModule/Public/HeroDebugModule.h"

#if WITH_GAMEPLAY_DEBUGGER
#include "HeroDebuggerCategory_Attributes.h"
#include "HeroDebuggerCategory_OwnedTag.h"
#include "GameplayDebugger.h"
#endif

DEFINE_LOG_CATEGORY(HeroDebugModule);

#define LOCTEXT_NAMESPACE "FHeroDebugModule"

FHeroDebugModule::FHeroDebugModule()
{
	UE_LOG(LogTemp, Warning, TEXT("FHeroDebugModule module has started!"));
}

void FHeroDebugModule::StartupModule()
{
	UE_LOG(HeroDebugModule, Warning, TEXT("FHeroDebugModule module has started!"));
	
#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();

	GameplayDebuggerModule.RegisterCategory("Character Attributtes", IGameplayDebugger::FOnGetCategory::CreateStatic(
		&HeroDebuggerCategory_Attributes::MakeInstance), EGameplayDebuggerCategoryState::EnabledInSimulate);
	GameplayDebuggerModule.NotifyCategoriesChanged();

	GameplayDebuggerModule.RegisterCategory("OWNED TAGS", IGameplayDebugger::FOnGetCategory::CreateStatic(
		&HeroDebuggerCategory_OwnedTag::MakeInstance), EGameplayDebuggerCategoryState::EnabledInSimulate);
	GameplayDebuggerModule.NotifyCategoriesChanged();
#endif
}

void FHeroDebugModule::ShutdownModule()
{
	UE_LOG(HeroDebugModule, Warning, TEXT("FHeroDebugModule module has shut down"));

#if WITH_GAMEPLAY_DEBUGGER
	if (IGameplayDebugger::IsAvailable())
	{
		IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
		GameplayDebuggerModule.UnregisterCategory("Character Attributtes");
		GameplayDebuggerModule.UnregisterCategory("OWNED TAGS");
	}
#endif
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FHeroDebugModule, HeroDebugModule)