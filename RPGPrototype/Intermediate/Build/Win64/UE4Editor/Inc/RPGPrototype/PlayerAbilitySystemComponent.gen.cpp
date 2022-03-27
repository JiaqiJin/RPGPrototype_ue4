// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGPrototype/Ability/PlayerAbilitySystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAbilitySystemComponent() {}
// Cross Module References
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_RPGPrototype();
// End Cross Module References
	void UPlayerAbilitySystemComponent::StaticRegisterNativesUPlayerAbilitySystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister()
	{
		return UPlayerAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Ability/PlayerAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Ability/PlayerAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAbilitySystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::ClassParams = {
		&UPlayerAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAbilitySystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAbilitySystemComponent, 3276189943);
	template<> RPGPROTOTYPE_API UClass* StaticClass<UPlayerAbilitySystemComponent>()
	{
		return UPlayerAbilitySystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAbilitySystemComponent(Z_Construct_UClass_UPlayerAbilitySystemComponent, &UPlayerAbilitySystemComponent::StaticClass, TEXT("/Script/RPGPrototype"), TEXT("UPlayerAbilitySystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAbilitySystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
