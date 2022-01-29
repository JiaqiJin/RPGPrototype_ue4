// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AExcaliburCharacter;
#ifdef EXCALIBUR_HeroGameplayAbility_generated_h
#error "HeroGameplayAbility.generated.h already included, missing '#pragma once' in HeroGameplayAbility.h"
#endif
#define EXCALIBUR_HeroGameplayAbility_generated_h

#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_SPARSE_DATA
#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningHeroCharacter);


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningHeroCharacter);


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroGameplayAbility(); \
	friend struct Z_Construct_UClass_UHeroGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UHeroGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(UHeroGameplayAbility)


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHeroGameplayAbility(); \
	friend struct Z_Construct_UClass_UHeroGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UHeroGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(UHeroGameplayAbility)


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroGameplayAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroGameplayAbility(UHeroGameplayAbility&&); \
	NO_API UHeroGameplayAbility(const UHeroGameplayAbility&); \
public:


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroGameplayAbility(UHeroGameplayAbility&&); \
	NO_API UHeroGameplayAbility(const UHeroGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHeroGameplayAbility)


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAutoApplyCost() { return STRUCT_OFFSET(UHeroGameplayAbility, bAutoApplyCost); } \
	FORCEINLINE static uint32 __PPO__bAutoApplyCooldown() { return STRUCT_OFFSET(UHeroGameplayAbility, bAutoApplyCooldown); }


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_12_PROLOG
#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_SPARSE_DATA \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_INCLASS \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_SPARSE_DATA \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class UHeroGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_GameplayEffect_HeroGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
