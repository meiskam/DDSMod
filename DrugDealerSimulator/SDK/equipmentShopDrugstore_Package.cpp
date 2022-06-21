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
	 * 		Name   -> Function equipmentShopDrugstore.equipmentShopDrugstore_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AequipmentShopDrugstore_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopDrugstore.equipmentShopDrugstore_C.UserConstructionScript");
		
		AequipmentShopDrugstore_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShopDrugstore.equipmentShopDrugstore_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AequipmentShopDrugstore_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopDrugstore.equipmentShopDrugstore_C.ReceiveBeginPlay");
		
		AequipmentShopDrugstore_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShopDrugstore.equipmentShopDrugstore_C.subclassInitiate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AequipmentShopDrugstore_C::subclassInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopDrugstore.equipmentShopDrugstore_C.subclassInitiate");
		
		AequipmentShopDrugstore_C_subclassInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShopDrugstore.equipmentShopDrugstore_C.ExecuteUbergraph_equipmentShopDrugstore
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AequipmentShopDrugstore_C::ExecuteUbergraph_equipmentShopDrugstore(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopDrugstore.equipmentShopDrugstore_C.ExecuteUbergraph_equipmentShopDrugstore");
		
		AequipmentShopDrugstore_C_ExecuteUbergraph_equipmentShopDrugstore_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AequipmentShopDrugstore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AequipmentShopDrugstore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass equipmentShopDrugstore.equipmentShopDrugstore_C");
		return ptr;
	}

}


