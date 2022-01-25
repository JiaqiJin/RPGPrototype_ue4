// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Component/HeroInventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroInventoryComponent() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroInventoryComponent_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void UHeroInventoryComponent::StaticRegisterNativesUHeroInventoryComponent()
	{
	}
	UClass* Z_Construct_UClass_UHeroInventoryComponent_NoRegister()
	{
		return UHeroInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHeroInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/HeroInventoryComponent.h" },
		{ "ModuleRelativePath", "Component/HeroInventoryComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroInventoryComponent_Statics::ClassParams = {
		&UHeroInventoryComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroInventoryComponent, 1204696832);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroInventoryComponent>()
	{
		return UHeroInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroInventoryComponent(Z_Construct_UClass_UHeroInventoryComponent, &UHeroInventoryComponent::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
