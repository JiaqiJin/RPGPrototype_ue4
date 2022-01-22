// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXCALIBUR_HeroPlayerState_generated_h
#error "HeroPlayerState.generated.h already included, missing '#pragma once' in HeroPlayerState.h"
#endif
#define EXCALIBUR_HeroPlayerState_generated_h

#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_SPARSE_DATA
#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_RPC_WRAPPERS
#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroPlayerState(); \
	friend struct Z_Construct_UClass_AHeroPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AHeroPlayerState*>(this); }


#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHeroPlayerState(); \
	friend struct Z_Construct_UClass_AHeroPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AHeroPlayerState*>(this); }


#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerState(AHeroPlayerState&&); \
	NO_API AHeroPlayerState(const AHeroPlayerState&); \
public:


#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerState(AHeroPlayerState&&); \
	NO_API AHeroPlayerState(const AHeroPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroPlayerState)


#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttributeDataTable() { return STRUCT_OFFSET(AHeroPlayerState, AttributeDataTable); }


#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_14_PROLOG
#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_SPARSE_DATA \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_INCLASS \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_SPARSE_DATA \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Character_HeroPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class AHeroPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_Character_HeroPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
