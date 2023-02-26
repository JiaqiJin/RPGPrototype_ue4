// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSION_MenuWidget_generated_h
#error "MenuWidget.generated.h already included, missing '#pragma once' in MenuWidget.h"
#endif
#define MULTIPLAYERSESSION_MenuWidget_generated_h

#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_SPARSE_DATA
#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMenuTearDown); \
	DECLARE_FUNCTION(execJoinButtonClicked); \
	DECLARE_FUNCTION(execHostButtonClicked); \
	DECLARE_FUNCTION(execMenuSetup);


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMenuTearDown); \
	DECLARE_FUNCTION(execJoinButtonClicked); \
	DECLARE_FUNCTION(execHostButtonClicked); \
	DECLARE_FUNCTION(execMenuSetup);


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSession"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidget)


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSession"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidget)


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidget(UMenuWidget&&); \
	NO_API UMenuWidget(const UMenuWidget&); \
public:


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidget(UMenuWidget&&); \
	NO_API UMenuWidget(const UMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget)


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UMenuWidget, HostButton); } \
	FORCEINLINE static uint32 __PPO__JoinButton() { return STRUCT_OFFSET(UMenuWidget, JoinButton); }


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_11_PROLOG
#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_SPARSE_DATA \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_RPC_WRAPPERS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_INCLASS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_SPARSE_DATA \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_INCLASS_NO_PURE_DECLS \
	RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSION_API UClass* StaticClass<class UMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPGPrototype_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
