// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef EXCALIBUR_HeroItemBase_generated_h
#error "HeroItemBase.generated.h already included, missing '#pragma once' in HeroItemBase.h"
#endif
#define EXCALIBUR_HeroItemBase_generated_h

#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_SPARSE_DATA
#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroItemBase(); \
	friend struct Z_Construct_UClass_AHeroItemBase_Statics; \
public: \
	DECLARE_CLASS(AHeroItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroItemBase)


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHeroItemBase(); \
	friend struct Z_Construct_UClass_AHeroItemBase_Statics; \
public: \
	DECLARE_CLASS(AHeroItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AHeroItemBase)


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroItemBase(AHeroItemBase&&); \
	NO_API AHeroItemBase(const AHeroItemBase&); \
public:


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroItemBase(AHeroItemBase&&); \
	NO_API AHeroItemBase(const AHeroItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroItemBase)


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PotionHealthEffect() { return STRUCT_OFFSET(AHeroItemBase, PotionHealthEffect); }


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_9_PROLOG
#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_SPARSE_DATA \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_INCLASS \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_SPARSE_DATA \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_Item_HeroItemBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class AHeroItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_Item_HeroItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
