// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ggo/ggoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeggoGameMode() {}
// Cross Module References
	GGO_API UClass* Z_Construct_UClass_AggoGameMode_NoRegister();
	GGO_API UClass* Z_Construct_UClass_AggoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ggo();
// End Cross Module References
	void AggoGameMode::StaticRegisterNativesAggoGameMode()
	{
	}
	UClass* Z_Construct_UClass_AggoGameMode_NoRegister()
	{
		return AggoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AggoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AggoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ggo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AggoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ggoGameMode.h" },
		{ "ModuleRelativePath", "ggoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AggoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AggoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AggoGameMode_Statics::ClassParams = {
		&AggoGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AggoGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AggoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AggoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AggoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AggoGameMode, 620052988);
	template<> GGO_API UClass* StaticClass<AggoGameMode>()
	{
		return AggoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AggoGameMode(Z_Construct_UClass_AggoGameMode, &AggoGameMode::StaticClass, TEXT("/Script/ggo"), TEXT("AggoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AggoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
