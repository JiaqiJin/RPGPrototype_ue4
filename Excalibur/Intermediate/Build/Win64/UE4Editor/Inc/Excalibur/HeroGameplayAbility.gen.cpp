// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/GameplayEffect/HeroGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	EXCALIBUR_API UClass* Z_Construct_UClass_AExcaliburCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeroGameplayAbility::execGetOwningHeroCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AExcaliburCharacter**)Z_Param__Result=P_THIS->GetOwningHeroCharacter();
		P_NATIVE_END;
	}
	void UHeroGameplayAbility::StaticRegisterNativesUHeroGameplayAbility()
	{
		UClass* Class = UHeroGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningHeroCharacter", &UHeroGameplayAbility::execGetOwningHeroCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics
	{
		struct HeroGameplayAbility_eventGetOwningHeroCharacter_Parms
		{
			AExcaliburCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroGameplayAbility_eventGetOwningHeroCharacter_Parms, ReturnValue), Z_Construct_UClass_AExcaliburCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "GameplayEffect/HeroGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility, nullptr, "GetOwningHeroCharacter", nullptr, nullptr, sizeof(HeroGameplayAbility_eventGetOwningHeroCharacter_Parms), Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister()
	{
		return UHeroGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UHeroGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoApplyCost_MetaData[];
#endif
		static void NewProp_bAutoApplyCost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoApplyCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoApplyCooldown_MetaData[];
#endif
		static void NewProp_bAutoApplyCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoApplyCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroGameplayAbility_GetOwningHeroCharacter, "GetOwningHeroCharacter" }, // 1565115691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayEffect/HeroGameplayAbility.h" },
		{ "ModuleRelativePath", "GameplayEffect/HeroGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCost_MetaData[] = {
		{ "Category", "HerogameplayAbility" },
		{ "DisplayName", "Auto Apply Cost" },
		{ "ModuleRelativePath", "GameplayEffect/HeroGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCost_SetBit(void* Obj)
	{
		((UHeroGameplayAbility*)Obj)->bAutoApplyCost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCost = { "bAutoApplyCost", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeroGameplayAbility), &Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCooldown_MetaData[] = {
		{ "Category", "HerogameplayAbility" },
		{ "DisplayName", "Auto Apply Cooldown" },
		{ "ModuleRelativePath", "GameplayEffect/HeroGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCooldown_SetBit(void* Obj)
	{
		((UHeroGameplayAbility*)Obj)->bAutoApplyCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCooldown = { "bAutoApplyCooldown", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeroGameplayAbility), &Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroGameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAutoApplyCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_Statics::ClassParams = {
		&UHeroGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeroGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroGameplayAbility, 794657741);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroGameplayAbility>()
	{
		return UHeroGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroGameplayAbility(Z_Construct_UClass_UHeroGameplayAbility, &UHeroGameplayAbility::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
