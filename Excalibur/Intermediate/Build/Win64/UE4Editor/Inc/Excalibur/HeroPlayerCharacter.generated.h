// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXCALIBUR_HeroPlayerCharacter_generated_h
#error "HeroPlayerCharacter.generated.h already included, missing '#pragma once' in HeroPlayerCharacter.h"
#endif
#define EXCALIBUR_HeroPlayerCharacter_generated_h

#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_SPARSE_DATA
#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_RPC_WRAPPERS
#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroPlayerCharacter(); \
	friend struct Z_Construct_UClass_AHeroPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerCharacter, AExcaliburCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerCharacter)


#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHeroPlayerCharacter(); \
	friend struct Z_Construct_UClass_AHeroPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerCharacter, AExcaliburCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerCharacter)


#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerCharacter(AHeroPlayerCharacter&&); \
	NO_API AHeroPlayerCharacter(const AHeroPlayerCharacter&); \
public:


#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerCharacter(AHeroPlayerCharacter&&); \
	NO_API AHeroPlayerCharacter(const AHeroPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroPlayerCharacter)


#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageDataAsset() { return STRUCT_OFFSET(AHeroPlayerCharacter, DamageDataAsset); }


#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_12_PROLOG
#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_SPARSE_DATA \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_INCLASS \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_SPARSE_DATA \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class AHeroPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_Character_HeroPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
