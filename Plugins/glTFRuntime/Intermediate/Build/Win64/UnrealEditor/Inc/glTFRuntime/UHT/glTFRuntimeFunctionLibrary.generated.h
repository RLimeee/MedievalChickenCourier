// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "glTFRuntimeFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UglTFRuntimeAsset;
struct FglTFRuntimeConfig;
struct FglTFRuntimePathItem;
#ifdef GLTFRUNTIME_glTFRuntimeFunctionLibrary_generated_h
#error "glTFRuntimeFunctionLibrary.generated.h already included, missing '#pragma once' in glTFRuntimeFunctionLibrary.h"
#endif
#define GLTFRUNTIME_glTFRuntimeFunctionLibrary_generated_h

#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_10_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms \
{ \
	UglTFRuntimeAsset* Asset; \
}; \
static inline void FglTFRuntimeHttpResponse_DelegateWrapper(const FScriptDelegate& glTFRuntimeHttpResponse, UglTFRuntimeAsset* Asset) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms Parms; \
	Parms.Asset=Asset; \
	glTFRuntimeHttpResponse.ProcessDelegate<UObject>(&Parms); \
}


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_11_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms \
{ \
	FglTFRuntimeConfig LoaderConfig; \
	int32 BytesProcessed; \
	int32 TotalBytes; \
}; \
static inline void FglTFRuntimeHttpProgress_DelegateWrapper(const FScriptDelegate& glTFRuntimeHttpProgress, FglTFRuntimeConfig const& LoaderConfig, int32 BytesProcessed, int32 TotalBytes) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms Parms; \
	Parms.LoaderConfig=LoaderConfig; \
	Parms.BytesProcessed=BytesProcessed; \
	Parms.TotalBytes=TotalBytes; \
	glTFRuntimeHttpProgress.ProcessDelegate<UObject>(&Parms); \
}


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_SPARSE_DATA
#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execglTFRuntimePathItemArrayFromJSONPath); \
	DECLARE_FUNCTION(execglTFLoadAssetFromFilenameAsync); \
	DECLARE_FUNCTION(execglTFLoadAssetFromClipboard); \
	DECLARE_FUNCTION(execglTFLoadAssetFromData); \
	DECLARE_FUNCTION(execglTFLoadAssetFromUrlWithProgress); \
	DECLARE_FUNCTION(execglTFLoadAssetFromUrl); \
	DECLARE_FUNCTION(execglTFLoadAssetFromString); \
	DECLARE_FUNCTION(execglTFLoadAssetFromFilename);


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execglTFRuntimePathItemArrayFromJSONPath); \
	DECLARE_FUNCTION(execglTFLoadAssetFromFilenameAsync); \
	DECLARE_FUNCTION(execglTFLoadAssetFromClipboard); \
	DECLARE_FUNCTION(execglTFLoadAssetFromData); \
	DECLARE_FUNCTION(execglTFLoadAssetFromUrlWithProgress); \
	DECLARE_FUNCTION(execglTFLoadAssetFromUrl); \
	DECLARE_FUNCTION(execglTFLoadAssetFromString); \
	DECLARE_FUNCTION(execglTFLoadAssetFromFilename);


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_ACCESSORS
#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUglTFRuntimeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UglTFRuntimeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/glTFRuntime"), NO_API) \
	DECLARE_SERIALIZER(UglTFRuntimeFunctionLibrary)


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUglTFRuntimeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UglTFRuntimeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/glTFRuntime"), NO_API) \
	DECLARE_SERIALIZER(UglTFRuntimeFunctionLibrary)


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UglTFRuntimeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UglTFRuntimeFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UglTFRuntimeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UglTFRuntimeFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UglTFRuntimeFunctionLibrary(UglTFRuntimeFunctionLibrary&&); \
	NO_API UglTFRuntimeFunctionLibrary(const UglTFRuntimeFunctionLibrary&); \
public: \
	NO_API virtual ~UglTFRuntimeFunctionLibrary();


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UglTFRuntimeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UglTFRuntimeFunctionLibrary(UglTFRuntimeFunctionLibrary&&); \
	NO_API UglTFRuntimeFunctionLibrary(const UglTFRuntimeFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UglTFRuntimeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UglTFRuntimeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UglTFRuntimeFunctionLibrary) \
	NO_API virtual ~UglTFRuntimeFunctionLibrary();


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_16_PROLOG
#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_SPARSE_DATA \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_ACCESSORS \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_INCLASS \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_SPARSE_DATA \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_ACCESSORS \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFRUNTIME_API UClass* StaticClass<class UglTFRuntimeFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
