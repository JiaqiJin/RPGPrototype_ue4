// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSION_MultiplayerSessionSubsystem_generated_h
#error "MultiplayerSessionSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionSubsystem.h"
#endif
#define MULTIPLAYERSESSION_MultiplayerSessionSubsystem_generated_h

#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_15_DELEGATE \
struct _Script_MultiplayerSession_eventMultiplayerOnCreateSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful) \
{ \
	_Script_MultiplayerSession_eventMultiplayerOnCreateSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_SPARSE_DATA
#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_RPC_WRAPPERS
#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSession"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionSubsystem)


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSession"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionSubsystem)


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayerSessionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayerSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionSubsystem(UMultiplayerSessionSubsystem&&); \
	NO_API UMultiplayerSessionSubsystem(const UMultiplayerSessionSubsystem&); \
public:


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionSubsystem(UMultiplayerSessionSubsystem&&); \
	NO_API UMultiplayerSessionSubsystem(const UMultiplayerSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionSubsystem)


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_PRIVATE_PROPERTY_OFFSET
#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_17_PROLOG
#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_PRIVATE_PROPERTY_OFFSET \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_SPARSE_DATA \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_RPC_WRAPPERS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_INCLASS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_PRIVATE_PROPERTY_OFFSET \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_SPARSE_DATA \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSION_API UClass* StaticClass<class UMultiplayerSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
