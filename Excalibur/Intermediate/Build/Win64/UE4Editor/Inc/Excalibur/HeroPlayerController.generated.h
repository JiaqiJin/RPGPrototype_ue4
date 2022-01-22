// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXCALIBUR_HeroPlayerController_generated_h
#error "HeroPlayerController.generated.h already included, missing '#pragma once' in HeroPlayerController.h"
#endif
#define EXCALIBUR_HeroPlayerController_generated_h

#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_SPARSE_DATA
#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_RPC_WRAPPERS
#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroPlayerController(); \
	friend struct Z_Construct_UClass_AHeroPlayerController_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerController)


#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHeroPlayerController(); \
	friend struct Z_Construct_UClass_AHeroPlayerController_Statics; \
public: \
	DECLARE_CLASS(AHeroPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroPlayerController)


#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerController(AHeroPlayerController&&); \
	NO_API AHeroPlayerController(const AHeroPlayerController&); \
public:


#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroPlayerController(AHeroPlayerController&&); \
	NO_API AHeroPlayerController(const AHeroPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroPlayerController)


#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeroMainUI() { return STRUCT_OFFSET(AHeroPlayerController, HeroMainUI); }


#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_13_PROLOG
#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_SPARSE_DATA \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_INCLASS \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_SPARSE_DATA \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Character_HeroPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class AHeroPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_Character_HeroPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
