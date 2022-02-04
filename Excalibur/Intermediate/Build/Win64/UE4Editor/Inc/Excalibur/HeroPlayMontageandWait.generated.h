// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayEventData;
class UGameplayAbility;
class UAnimMontage;
struct FGameplayTagContainer;
class UHeroPlayMontageandWait;
#ifdef EXCALIBUR_HeroPlayMontageandWait_generated_h
#error "HeroPlayMontageandWait.generated.h already included, missing '#pragma once' in HeroPlayMontageandWait.h"
#endif
#define EXCALIBUR_HeroPlayMontageandWait_generated_h

#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_15_DELEGATE \
struct _Script_Excalibur_eventUHeroPlayMontageNotify_Parms \
{ \
	FName NotifyName; \
}; \
static inline void FUHeroPlayMontageNotify_DelegateWrapper(const FMulticastScriptDelegate& UHeroPlayMontageNotify, FName NotifyName) \
{ \
	_Script_Excalibur_eventUHeroPlayMontageNotify_Parms Parms; \
	Parms.NotifyName=NotifyName; \
	UHeroPlayMontageNotify.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_12_DELEGATE \
struct _Script_Excalibur_eventHeroPlayMontageAndWaitForEventDelegate_Parms \
{ \
	FGameplayTag EventTag; \
	FGameplayEventData EventData; \
}; \
static inline void FHeroPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& HeroPlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData) \
{ \
	_Script_Excalibur_eventHeroPlayMontageAndWaitForEventDelegate_Parms Parms; \
	Parms.EventTag=EventTag; \
	Parms.EventData=EventData; \
	HeroPlayMontageAndWaitForEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_SPARSE_DATA
#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroPlayMontageandWait(); \
	friend struct Z_Construct_UClass_UHeroPlayMontageandWait_Statics; \
public: \
	DECLARE_CLASS(UHeroPlayMontageandWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(UHeroPlayMontageandWait)


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUHeroPlayMontageandWait(); \
	friend struct Z_Construct_UClass_UHeroPlayMontageandWait_Statics; \
public: \
	DECLARE_CLASS(UHeroPlayMontageandWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(UHeroPlayMontageandWait)


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroPlayMontageandWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroPlayMontageandWait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroPlayMontageandWait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroPlayMontageandWait); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroPlayMontageandWait(UHeroPlayMontageandWait&&); \
	NO_API UHeroPlayMontageandWait(const UHeroPlayMontageandWait&); \
public:


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroPlayMontageandWait(UHeroPlayMontageandWait&&); \
	NO_API UHeroPlayMontageandWait(const UHeroPlayMontageandWait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroPlayMontageandWait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroPlayMontageandWait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroPlayMontageandWait)


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MontageToPlay() { return STRUCT_OFFSET(UHeroPlayMontageandWait, MontageToPlay); } \
	FORCEINLINE static uint32 __PPO__EventTags() { return STRUCT_OFFSET(UHeroPlayMontageandWait, EventTags); } \
	FORCEINLINE static uint32 __PPO__Rate() { return STRUCT_OFFSET(UHeroPlayMontageandWait, Rate); } \
	FORCEINLINE static uint32 __PPO__bStopWhenAbilityEnds() { return STRUCT_OFFSET(UHeroPlayMontageandWait, bStopWhenAbilityEnds); } \
	FORCEINLINE static uint32 __PPO__StartSection() { return STRUCT_OFFSET(UHeroPlayMontageandWait, StartSection); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(UHeroPlayMontageandWait, AnimRootMotionTranslationScale); }


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_22_PROLOG
#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_SPARSE_DATA \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_INCLASS \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_SPARSE_DATA \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class UHeroPlayMontageandWait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_AbilityTask_HeroPlayMontageandWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
