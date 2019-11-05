// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGO_ggoGameMode_generated_h
#error "ggoGameMode.generated.h already included, missing '#pragma once' in ggoGameMode.h"
#endif
#define GGO_ggoGameMode_generated_h

#define ggo_4_23_Source_ggo_ggoGameMode_h_12_RPC_WRAPPERS
#define ggo_4_23_Source_ggo_ggoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ggo_4_23_Source_ggo_ggoGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAggoGameMode(); \
	friend struct Z_Construct_UClass_AggoGameMode_Statics; \
public: \
	DECLARE_CLASS(AggoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ggo"), GGO_API) \
	DECLARE_SERIALIZER(AggoGameMode)


#define ggo_4_23_Source_ggo_ggoGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAggoGameMode(); \
	friend struct Z_Construct_UClass_AggoGameMode_Statics; \
public: \
	DECLARE_CLASS(AggoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ggo"), GGO_API) \
	DECLARE_SERIALIZER(AggoGameMode)


#define ggo_4_23_Source_ggo_ggoGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GGO_API AggoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AggoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GGO_API, AggoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AggoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GGO_API AggoGameMode(AggoGameMode&&); \
	GGO_API AggoGameMode(const AggoGameMode&); \
public:


#define ggo_4_23_Source_ggo_ggoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GGO_API AggoGameMode(AggoGameMode&&); \
	GGO_API AggoGameMode(const AggoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GGO_API, AggoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AggoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AggoGameMode)


#define ggo_4_23_Source_ggo_ggoGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define ggo_4_23_Source_ggo_ggoGameMode_h_9_PROLOG
#define ggo_4_23_Source_ggo_ggoGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_RPC_WRAPPERS \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_INCLASS \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ggo_4_23_Source_ggo_ggoGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_INCLASS_NO_PURE_DECLS \
	ggo_4_23_Source_ggo_ggoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGO_API UClass* StaticClass<class AggoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ggo_4_23_Source_ggo_ggoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
