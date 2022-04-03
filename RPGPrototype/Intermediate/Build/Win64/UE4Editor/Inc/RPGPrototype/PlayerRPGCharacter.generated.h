// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGPROTOTYPE_PlayerRPGCharacter_generated_h
#error "PlayerRPGCharacter.generated.h already included, missing '#pragma once' in PlayerRPGCharacter.h"
#endif
#define RPGPROTOTYPE_PlayerRPGCharacter_generated_h

#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_SPARSE_DATA
#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCharacterLevel); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCharacterLevel); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerRPGCharacter(); \
	friend struct Z_Construct_UClass_APlayerRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerRPGCharacter, ARPGPrototypeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGPrototype"), NO_API) \
	DECLARE_SERIALIZER(APlayerRPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerRPGCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterLevel=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerRPGCharacter(); \
	friend struct Z_Construct_UClass_APlayerRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerRPGCharacter, ARPGPrototypeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGPrototype"), NO_API) \
	DECLARE_SERIALIZER(APlayerRPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerRPGCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterLevel=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerRPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerRPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerRPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerRPGCharacter(APlayerRPGCharacter&&); \
	NO_API APlayerRPGCharacter(const APlayerRPGCharacter&); \
public:


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerRPGCharacter(APlayerRPGCharacter&&); \
	NO_API APlayerRPGCharacter(const APlayerRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerRPGCharacter)


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterLevel() { return STRUCT_OFFSET(APlayerRPGCharacter, CharacterLevel); } \
	FORCEINLINE static uint32 __PPO__bAbilitiesInitialized() { return STRUCT_OFFSET(APlayerRPGCharacter, bAbilitiesInitialized); } \
	FORCEINLINE static uint32 __PPO__DefaultAbilities() { return STRUCT_OFFSET(APlayerRPGCharacter, DefaultAbilities); } \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(APlayerRPGCharacter, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(APlayerRPGCharacter, AttributeSet); } \
	FORCEINLINE static uint32 __PPO__PassiveGameplayEffects() { return STRUCT_OFFSET(APlayerRPGCharacter, PassiveGameplayEffects); }


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_16_PROLOG
#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_SPARSE_DATA \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_RPC_WRAPPERS \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_INCLASS \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_SPARSE_DATA \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_INCLASS_NO_PURE_DECLS \
	RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGPROTOTYPE_API UClass* StaticClass<class APlayerRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPGPrototype_Source_RPGPrototype_Character_PlayerRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
