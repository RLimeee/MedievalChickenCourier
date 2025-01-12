// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_AReadyPlayerMeActor();
	READYPLAYERME_API UClass* Z_Construct_UClass_AReadyPlayerMeActor_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	void AReadyPlayerMeActor::StaticRegisterNativesAReadyPlayerMeActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReadyPlayerMeActor);
	UClass* Z_Construct_UClass_AReadyPlayerMeActor_NoRegister()
	{
		return AReadyPlayerMeActor::StaticClass();
	}
	struct Z_Construct_UClass_AReadyPlayerMeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadyPlayerMeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyPlayerMeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReadyPlayerMeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReadyPlayerMeActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Intended to be used as an actor for runtime loading and displaying the avatars. */" },
		{ "IncludePath", "ReadyPlayerMeActor.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeActor.h" },
		{ "ToolTip", "Intended to be used as an actor for runtime loading and displaying the avatars." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** The default SkeletalMeshComponent. The skeletal mesh will be set during the avatar loading process. */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeActor.h" },
		{ "ToolTip", "The default SkeletalMeshComponent. The skeletal mesh will be set during the avatar loading process." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReadyPlayerMeActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_ReadyPlayerMeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Handles the loading and setup of the avatar. */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeActor.h" },
		{ "ToolTip", "Handles the loading and setup of the avatar." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_ReadyPlayerMeComponent = { "ReadyPlayerMeComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReadyPlayerMeActor, ReadyPlayerMeComponent), Z_Construct_UClass_UReadyPlayerMeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_ReadyPlayerMeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_ReadyPlayerMeComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReadyPlayerMeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReadyPlayerMeActor_Statics::NewProp_ReadyPlayerMeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReadyPlayerMeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReadyPlayerMeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReadyPlayerMeActor_Statics::ClassParams = {
		&AReadyPlayerMeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReadyPlayerMeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReadyPlayerMeActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReadyPlayerMeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReadyPlayerMeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReadyPlayerMeActor()
	{
		if (!Z_Registration_Info_UClass_AReadyPlayerMeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReadyPlayerMeActor.OuterSingleton, Z_Construct_UClass_AReadyPlayerMeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReadyPlayerMeActor.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<AReadyPlayerMeActor>()
	{
		return AReadyPlayerMeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReadyPlayerMeActor);
	AReadyPlayerMeActor::~AReadyPlayerMeActor() {}
	struct Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReadyPlayerMeActor, AReadyPlayerMeActor::StaticClass, TEXT("AReadyPlayerMeActor"), &Z_Registration_Info_UClass_AReadyPlayerMeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReadyPlayerMeActor), 3766460820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeActor_h_1279192902(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
