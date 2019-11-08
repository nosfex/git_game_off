// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGO_ggoCharacter_generated_h
#error "ggoCharacter.generated.h already included, missing '#pragma once' in ggoCharacter.h"
#endif
#define GGO_ggoCharacter_generated_h

#define ggo_4_23_Source_ggo_ggoCharacter_h_12_RPC_WRAPPERS
#define ggo_4_23_Source_ggo_ggoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ggo_4_23_Source_ggo_ggoCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAggoCharacter(); \
	friend struct Z_Construct_UClass_AggoCharacter_Statics; \
public: \
	DECLARE_CLASS(AggoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ggo"), NO_API) \
	DECLARE_SERIALIZER(AggoCharacter)


#define ggo_4_23_Source_ggo_ggoCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAggoCharacter(); \
	friend struct Z_Construct_UClass_AggoCharacter_Statics; \
public: \
	DECLARE_CLASS(AggoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ggo"), NO_API) \
	DECLARE_SERIALIZER(AggoCharacter)


#define ggo_4_23_Source_ggo_ggoCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AggoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AggoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AggoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AggoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AggoCharacter(AggoCharacter&&); \
	NO_API AggoCharacter(const AggoCharacter&); \
public:


#define ggo_4_23_Source_ggo_ggoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AggoCharacter(AggoCharacter&&); \
	NO_API AggoCharacter(const AggoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AggoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AggoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AggoCharacter)


#define ggo_4_23_Source_ggo_ggoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AggoCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AggoCharacter, CameraBoom); }


#define ggo_4_23_Source_ggo_ggoCharacter_h_9_PROLOG
#define ggo_4_23_Source_ggo_ggoCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_RPC_WRAPPERS \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_INCLASS \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ggo_4_23_Source_ggo_ggoCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ggo_4_23_Source_ggo_ggoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGO_API UClass* StaticClass<class AggoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ggo_4_23_Source_ggo_ggoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
