// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Character/MovementComp/HeroCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacterMovementComponent() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroCharacterMovementComponent_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UHeroCharacterMovementComponent::execSetSprinting)
	{
		P_GET_UBOOL(Z_Param_bNewSprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSprinting(Z_Param_bNewSprint);
		P_NATIVE_END;
	}
	void UHeroCharacterMovementComponent::StaticRegisterNativesUHeroCharacterMovementComponent()
	{
		UClass* Class = UHeroCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSprinting", &UHeroCharacterMovementComponent::execSetSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics
	{
		struct HeroCharacterMovementComponent_eventSetSprinting_Parms
		{
			bool bNewSprint;
		};
		static void NewProp_bNewSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewSprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::NewProp_bNewSprint_SetBit(void* Obj)
	{
		((HeroCharacterMovementComponent_eventSetSprinting_Parms*)Obj)->bNewSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::NewProp_bNewSprint = { "bNewSprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroCharacterMovementComponent_eventSetSprinting_Parms), &Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::NewProp_bNewSprint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::NewProp_bNewSprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hero|Component|MovementComponent" },
		{ "ModuleRelativePath", "Character/MovementComp/HeroCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCharacterMovementComponent, nullptr, "SetSprinting", nullptr, nullptr, sizeof(HeroCharacterMovementComponent_eventSetSprinting_Parms), Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroCharacterMovementComponent_NoRegister()
	{
		return UHeroCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHeroCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSprinting_MetaData[];
#endif
		static void NewProp_isSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FallingTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroCharacterMovementComponent_SetSprinting, "SetSprinting" }, // 2055283900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/MovementComp/HeroCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Character/MovementComp/HeroCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_isSprinting_MetaData[] = {
		{ "Category", "Character Movement : Sprint" },
		{ "ModuleRelativePath", "Character/MovementComp/HeroCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_isSprinting_SetBit(void* Obj)
	{
		((UHeroCharacterMovementComponent*)Obj)->isSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_isSprinting = { "isSprinting", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeroCharacterMovementComponent), &Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_isSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_isSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_isSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_FallingTag_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Character/MovementComp/HeroCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_FallingTag = { "FallingTag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroCharacterMovementComponent, FallingTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_FallingTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_FallingTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_isSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::NewProp_FallingTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::ClassParams = {
		&UHeroCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroCharacterMovementComponent, 1775893665);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroCharacterMovementComponent>()
	{
		return UHeroCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroCharacterMovementComponent(Z_Construct_UClass_UHeroCharacterMovementComponent, &UHeroCharacterMovementComponent::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
