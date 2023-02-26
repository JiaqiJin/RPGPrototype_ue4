// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSession/Public/MultiplayerSessionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionSubsystem() {}
// Cross Module References
	MULTIPLAYERSESSION_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MultiplayerSession();
	MULTIPLAYERSESSION_API UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem_NoRegister();
	MULTIPLAYERSESSION_API UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics
	{
		struct _Script_MultiplayerSession_eventMultiplayerOnCreateSessionComplete_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_MultiplayerSession_eventMultiplayerOnCreateSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MultiplayerSession_eventMultiplayerOnCreateSessionComplete_Parms), &Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaring our custum delegates for the Menu class to bind callback to\n" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
		{ "ToolTip", "Declaring our custum delegates for the Menu class to bind callback to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSession, nullptr, "MultiplayerOnCreateSessionComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_MultiplayerSession_eventMultiplayerOnCreateSessionComplete_Parms), Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMultiplayerSessionSubsystem::StaticRegisterNativesUMultiplayerSessionSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem_NoRegister()
	{
		return UMultiplayerSessionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSession,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MultiplayerSessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerSessionSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::ClassParams = {
		&UMultiplayerSessionSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiplayerSessionSubsystem, 1509032116);
	template<> MULTIPLAYERSESSION_API UClass* StaticClass<UMultiplayerSessionSubsystem>()
	{
		return UMultiplayerSessionSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiplayerSessionSubsystem(Z_Construct_UClass_UMultiplayerSessionSubsystem, &UMultiplayerSessionSubsystem::StaticClass, TEXT("/Script/MultiplayerSession"), TEXT("UMultiplayerSessionSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerSessionSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
