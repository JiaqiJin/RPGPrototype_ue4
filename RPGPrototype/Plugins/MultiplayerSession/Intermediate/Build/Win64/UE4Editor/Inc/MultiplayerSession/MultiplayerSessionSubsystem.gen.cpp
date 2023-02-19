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
	MULTIPLAYERSESSION_API UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem_NoRegister();
	MULTIPLAYERSESSION_API UClass* Z_Construct_UClass_UMultiplayerSessionSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_MultiplayerSession();
// End Cross Module References
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
		{ "Comment", "/**\n * \n */" },
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
	IMPLEMENT_CLASS(UMultiplayerSessionSubsystem, 3113965499);
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
