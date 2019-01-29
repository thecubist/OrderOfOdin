// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrderOfOdin/OrderOfOdinGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrderOfOdinGameMode() {}
// Cross Module References
	ORDEROFODIN_API UClass* Z_Construct_UClass_AOrderOfOdinGameMode_NoRegister();
	ORDEROFODIN_API UClass* Z_Construct_UClass_AOrderOfOdinGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OrderOfOdin();
// End Cross Module References
	void AOrderOfOdinGameMode::StaticRegisterNativesAOrderOfOdinGameMode()
	{
	}
	UClass* Z_Construct_UClass_AOrderOfOdinGameMode_NoRegister()
	{
		return AOrderOfOdinGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOrderOfOdinGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrderOfOdinGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OrderOfOdin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrderOfOdinGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OrderOfOdinGameMode.h" },
		{ "ModuleRelativePath", "OrderOfOdinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrderOfOdinGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrderOfOdinGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrderOfOdinGameMode_Statics::ClassParams = {
		&AOrderOfOdinGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AOrderOfOdinGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOrderOfOdinGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrderOfOdinGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrderOfOdinGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrderOfOdinGameMode, 2539035762);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrderOfOdinGameMode(Z_Construct_UClass_AOrderOfOdinGameMode, &AOrderOfOdinGameMode::StaticClass, TEXT("/Script/OrderOfOdin"), TEXT("AOrderOfOdinGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrderOfOdinGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
