// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/FunctionLibrary/HeroGameplayStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayStatics() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroGameplayStatics_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroGameplayStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeroGameplayStatics::execHeroApplyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass);
		P_GET_UBOOL(Z_Param_damageOverTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHeroGameplayStatics::HeroApplyDamage(Z_Param_DamagedActor,Z_Param_BaseDamage,Z_Param_EventInstigator,Z_Param_DamageCauser,Z_Param_DamageTypeClass,Z_Param_damageOverTime);
		P_NATIVE_END;
	}
	void UHeroGameplayStatics::StaticRegisterNativesUHeroGameplayStatics()
	{
		UClass* Class = UHeroGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HeroApplyDamage", &UHeroGameplayStatics::execHeroApplyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics
	{
		struct HeroGameplayStatics_eventHeroApplyDamage_Parms
		{
			AActor* DamagedActor;
			float BaseDamage;
			AController* EventInstigator;
			AActor* DamageCauser;
			TSubclassOf<UDamageType>  DamageTypeClass;
			bool damageOverTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static void NewProp_damageOverTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_damageOverTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroGameplayStatics_eventHeroApplyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroGameplayStatics_eventHeroApplyDamage_Parms, BaseDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroGameplayStatics_eventHeroApplyDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroGameplayStatics_eventHeroApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroGameplayStatics_eventHeroApplyDamage_Parms, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_damageOverTime_SetBit(void* Obj)
	{
		((HeroGameplayStatics_eventHeroApplyDamage_Parms*)Obj)->damageOverTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_damageOverTime = { "damageOverTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroGameplayStatics_eventHeroApplyDamage_Parms), &Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_damageOverTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroGameplayStatics_eventHeroApplyDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_damageOverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hero|Damage" },
		{ "Comment", "/** Hurts the specified actor with generic damage.\n\x09* @param DamagedActor - Actor that will be damaged.\n\x09* @param BaseDamage - The base damage to apply.\n\x09* @param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)\n\x09* @param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n\x09* @param DamageTypeClass - Class that describes the damage that was done.\n\x09 * @return Actual damage the ended up being applied to the actor.\n\x09*/" },
		{ "ModuleRelativePath", "FunctionLibrary/HeroGameplayStatics.h" },
		{ "ToolTip", "Hurts the specified actor with generic damage.\n@param DamagedActor - Actor that will be damaged.\n@param BaseDamage - The base damage to apply.\n@param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)\n@param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)\n@param DamageTypeClass - Class that describes the damage that was done.\n@return Actual damage the ended up being applied to the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayStatics, nullptr, "HeroApplyDamage", nullptr, nullptr, sizeof(HeroGameplayStatics_eventHeroApplyDamage_Parms), Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroGameplayStatics_NoRegister()
	{
		return UHeroGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UHeroGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroGameplayStatics_HeroApplyDamage, "HeroApplyDamage" }, // 2241340505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FunctionLibrary/HeroGameplayStatics.h" },
		{ "ModuleRelativePath", "FunctionLibrary/HeroGameplayStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayStatics_Statics::ClassParams = {
		&UHeroGameplayStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroGameplayStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroGameplayStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroGameplayStatics, 2858202013);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroGameplayStatics>()
	{
		return UHeroGameplayStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroGameplayStatics(Z_Construct_UClass_UHeroGameplayStatics, &UHeroGameplayStatics::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
