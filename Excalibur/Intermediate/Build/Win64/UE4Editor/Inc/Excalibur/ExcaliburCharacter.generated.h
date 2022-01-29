// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHeroCharacterMovementComponent;
#ifdef EXCALIBUR_ExcaliburCharacter_generated_h
#error "ExcaliburCharacter.generated.h already included, missing '#pragma once' in ExcaliburCharacter.h"
#endif
#define EXCALIBUR_ExcaliburCharacter_generated_h

#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_SPARSE_DATA
#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeroCharacterMovementComponent); \
	DECLARE_FUNCTION(execIsHeroSprinting);


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeroCharacterMovementComponent); \
	DECLARE_FUNCTION(execIsHeroSprinting);


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExcaliburCharacter(); \
	friend struct Z_Construct_UClass_AExcaliburCharacter_Statics; \
public: \
	DECLARE_CLASS(AExcaliburCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AExcaliburCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AExcaliburCharacter*>(this); }


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAExcaliburCharacter(); \
	friend struct Z_Construct_UClass_AExcaliburCharacter_Statics; \
public: \
	DECLARE_CLASS(AExcaliburCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excalibur"), NO_API) \
	DECLARE_SERIALIZER(AExcaliburCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AExcaliburCharacter*>(this); }


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExcaliburCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExcaliburCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExcaliburCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExcaliburCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExcaliburCharacter(AExcaliburCharacter&&); \
	NO_API AExcaliburCharacter(const AExcaliburCharacter&); \
public:


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExcaliburCharacter(AExcaliburCharacter&&); \
	NO_API AExcaliburCharacter(const AExcaliburCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExcaliburCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExcaliburCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExcaliburCharacter)


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AExcaliburCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AExcaliburCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__DefaultAttributes() { return STRUCT_OFFSET(AExcaliburCharacter, DefaultAttributes); } \
	FORCEINLINE static uint32 __PPO__DefaultAbilities() { return STRUCT_OFFSET(AExcaliburCharacter, DefaultAbilities); }


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_13_PROLOG
#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_SPARSE_DATA \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_RPC_WRAPPERS \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_INCLASS \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_SPARSE_DATA \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Excalibur_Source_Excalibur_ExcaliburCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCALIBUR_API UClass* StaticClass<class AExcaliburCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Excalibur_Source_Excalibur_ExcaliburCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
