// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
#ifdef EXCALIBUR_HeroGameplayStatics_generated_h
#error "HeroGameplayStatics.generated.h already included, missing '#pragma once' in HeroGameplayStatics.h"
#endif
#define EXCALIBUR_HeroGameplayStatics_generated_h

#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_SPARSE_DATA
#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeroApplyDamage);


#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeroApplyDamage);


#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroGameplayStatics(); \
	friend struct Z_Construct_UClass_UHeroGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UHeroGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(UHeroGameplayStatics)


#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHeroGameplayStatics(); \
	friend struct Z_Construct_UClass_UHeroGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UHeroGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(UHeroGameplayStatics)


#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroGameplayStatics(UHeroGameplayStatics&&); \
	NO_API UHeroGameplayStatics(const UHeroGameplayStatics&); \
public:


#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeroGameplayStatics(UHeroGameplayStatics&&); \
	NO_API UHeroGameplayStatics(const UHeroGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroGameplayStatics)


#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_PRIVATE_PROPERTY_OFFSET
#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_12_PROLOG
#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_SPARSE_DATA \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_INCLASS \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_SPARSE_DATA \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class UHeroGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_FunctionLibrary_HeroGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
