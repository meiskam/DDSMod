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
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.GetItemName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 */
	void AdrugPickupItem_C::GetItemName(class FText* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.GetItemName");
		
		AdrugPickupItem_C_GetItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.ReconstructRama
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::ReconstructRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.ReconstructRama");
		
		AdrugPickupItem_C_ReconstructRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.makeAdditiveTypeModel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FdrugData                                   drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               BigPackage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 OutModel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugPickupItem_C::makeAdditiveTypeModel(const struct FdrugData& drugData, bool BigPackage, class UStaticMesh** OutModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.makeAdditiveTypeModel");
		
		AdrugPickupItem_C_makeAdditiveTypeModel_Params params {};
		params.drugData = drugData;
		params.BigPackage = BigPackage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModel != nullptr)
			*OutModel = params.OutModel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.makePackageTypeModel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FdrugData                                   drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       MixProportions                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               BigPackage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 OutModel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugPickupItem_C::makePackageTypeModel(const struct FdrugData& drugData, const struct FMixProportionsStruct& MixProportions, bool BigPackage, class UStaticMesh** OutModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.makePackageTypeModel");
		
		AdrugPickupItem_C_makePackageTypeModel_Params params {};
		params.drugData = drugData;
		params.MixProportions = MixProportions;
		params.BigPackage = BigPackage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModel != nullptr)
			*OutModel = params.OutModel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.UserConstructionScript");
		
		AdrugPickupItem_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdrugPickupItem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.ReceiveBeginPlay");
		
		AdrugPickupItem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.configPackage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::configPackage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.configPackage");
		
		AdrugPickupItem_C_configPackage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.objectPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::objectPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.objectPickup");
		
		AdrugPickupItem_C_objectPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.verifyCorrectNaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::verifyCorrectNaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.verifyCorrectNaming");
		
		AdrugPickupItem_C_verifyCorrectNaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.selectPackToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::selectPackToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.selectPackToggle");
		
		AdrugPickupItem_C_selectPackToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.retryConfig
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::retryConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.retryConfig");
		
		AdrugPickupItem_C_retryConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.SubclassRamaLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugPickupItem_C::SubclassRamaLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.SubclassRamaLoaded");
		
		AdrugPickupItem_C_SubclassRamaLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugPickupItem.drugPickupItem_C.ExecuteUbergraph_drugPickupItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugPickupItem_C::ExecuteUbergraph_drugPickupItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugPickupItem.drugPickupItem_C.ExecuteUbergraph_drugPickupItem");
		
		AdrugPickupItem_C_ExecuteUbergraph_drugPickupItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdrugPickupItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdrugPickupItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass drugPickupItem.drugPickupItem_C");
		return ptr;
	}

}


