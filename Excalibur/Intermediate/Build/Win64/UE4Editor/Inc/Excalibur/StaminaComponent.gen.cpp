// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Component/StaminaComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaComponent() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UStaminaComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroStaminaData_NoRegister();
// End Cross Module References
	void UStaminaComponent::StaticRegisterNativesUStaminaComponent()
	{
	}
	UClass* Z_Construct_UClass_UStaminaComponent_NoRegister()
	{
		return UStaminaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaminaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaminaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/StaminaComponent.h" },
		{ "ModuleRelativePath", "Component/StaminaComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaData_MetaData[] = {
		{ "Category", "Stamina Data" },
		{ "ModuleRelativePath", "Component/StaminaComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaData = { "StaminaData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaminaComponent, StaminaData), Z_Construct_UClass_UHeroStaminaData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaminaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaminaComponent_Statics::ClassParams = {
		&UStaminaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaminaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaminaComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaminaComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaminaComponent, 3419702482);
	template<> EXCALIBUR_API UClass* StaticClass<UStaminaComponent>()
	{
		return UStaminaComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaminaComponent(Z_Construct_UClass_UStaminaComponent, &UStaminaComponent::StaticClass, TEXT("/Script/Excalibur"), TEXT("UStaminaComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
