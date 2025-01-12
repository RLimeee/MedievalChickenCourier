// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntime/Public/glTFRuntimeSkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeSkeletalMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References
	void UglTFRuntimeSkeletalMeshComponent::StaticRegisterNativesUglTFRuntimeSkeletalMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeSkeletalMeshComponent);
	UClass* Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_NoRegister()
	{
		return UglTFRuntimeSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "glTFRuntimeSkeletalMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/glTFRuntimeSkeletalMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeSkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics::ClassParams = {
		&UglTFRuntimeSkeletalMeshComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UglTFRuntimeSkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UglTFRuntimeSkeletalMeshComponent.OuterSingleton;
	}
	template<> GLTFRUNTIME_API UClass* StaticClass<UglTFRuntimeSkeletalMeshComponent>()
	{
		return UglTFRuntimeSkeletalMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeSkeletalMeshComponent);
	UglTFRuntimeSkeletalMeshComponent::~UglTFRuntimeSkeletalMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeSkeletalMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeSkeletalMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeSkeletalMeshComponent, UglTFRuntimeSkeletalMeshComponent::StaticClass, TEXT("UglTFRuntimeSkeletalMeshComponent"), &Z_Registration_Info_UClass_UglTFRuntimeSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeSkeletalMeshComponent), 3778198790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeSkeletalMeshComponent_h_2763341323(TEXT("/Script/glTFRuntime"),
		Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeSkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeSkeletalMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
