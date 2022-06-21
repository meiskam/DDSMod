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
	 * 		Name   -> Function equipmentShop.equipmentShop_C.GetShopData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FShopDataStruct                             ShopData                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AequipmentShop_C::GetShopData(struct FShopDataStruct* ShopData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.GetShopData");
		
		AequipmentShop_C_GetShopData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShopData != nullptr)
			*ShopData = params.ShopData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.removeItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FappartmentEquipment                        Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AequipmentShop_C::removeItems(const struct FappartmentEquipment& Data, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.removeItems");
		
		AequipmentShop_C_removeItems_Params params {};
		params.Data = Data;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AequipmentShop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.UserConstructionScript");
		
		AequipmentShop_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AequipmentShop_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.ReceiveBeginPlay");
		
		AequipmentShop_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.InitiateShopUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AequipmentShop_C::InitiateShopUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.InitiateShopUI");
		
		AequipmentShop_C_InitiateShopUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.checkShopAvailability
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AequipmentShop_C::checkShopAvailability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.checkShopAvailability");
		
		AequipmentShop_C_checkShopAvailability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.forceRestock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AequipmentShop_C::forceRestock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.forceRestock");
		
		AequipmentShop_C_forceRestock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.subclassInitiate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AequipmentShop_C::subclassInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.subclassInitiate");
		
		AequipmentShop_C_subclassInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShop.equipmentShop_C.ExecuteUbergraph_equipmentShop
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AequipmentShop_C::ExecuteUbergraph_equipmentShop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.ExecuteUbergraph_equipmentShop");
		
		AequipmentShop_C_ExecuteUbergraph_equipmentShop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AequipmentShop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AequipmentShop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass equipmentShop.equipmentShop_C");
		return ptr;
	}

}


