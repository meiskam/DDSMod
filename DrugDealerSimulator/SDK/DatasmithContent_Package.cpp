/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithObjectTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithObjectTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithActorTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithActorTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ADatasmithAreaLightActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADatasmithAreaLightActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithAreaLightActorTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithAreaLightActorTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithStaticMeshImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithStaticMeshCADImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshCADImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithCADImportSceneData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithCADImportSceneData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithMDLSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithMDLSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithDeltaGenAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithDeltaGenAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithDeltaGenSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithDeltaGenSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithVREDAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithVREDAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithVREDSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithVREDSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithAssetUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithAssetUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithCineCameraComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithCineCameraComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003986F0
	 * 		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey");
		
		UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params params {};
		params.Object = Object;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00398530
	 * 		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringToMatch                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                OutKeys                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutValues                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue");
		
		UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params params {};
		params.Object = Object;
		params.StringToMatch = StringToMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
		if (OutValues != nullptr)
			*OutValues = params.OutValues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003984B0
	 * 		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserData(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData");
		
		UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithContentBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithContentBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithImportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithImportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithLandscapeTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithLandscapeTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithPointLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithPointLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithScene.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithScene::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ADatasmithSceneActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADatasmithSceneActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithSceneComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSceneComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithSkyLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSkyLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithSpotLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSpotLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithStaticMeshComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDatasmithStaticMeshTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}

}


