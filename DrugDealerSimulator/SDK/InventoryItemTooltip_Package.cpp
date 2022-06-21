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
	 * 		Name   -> Function InventoryItemTooltip.InventoryItemTooltip_C.Get_txtWeight_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UInventoryItemTooltip_C::Get_txtWeight_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.Get_txtWeight_Text_1");
		
		UInventoryItemTooltip_C_Get_txtWeight_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryItemTooltip.InventoryItemTooltip_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInventoryItemTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.Construct");
		
		UInventoryItemTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryItemTooltip.InventoryItemTooltip_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FinventoryItemStruct                        Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class FText                                        CustomTagName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryComponent_C*                       InvComp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ItemGuid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryItemTooltip_C::Setup(const class FName& ItemID, const struct FinventoryItemStruct& Data, const class FText& CustomTagName, int32_t Quantity, int32_t Amount, class UInventoryComponent_C* InvComp, const struct FGuid& ItemGuid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.Setup");
		
		UInventoryItemTooltip_C_Setup_Params params {};
		params.ItemID = ItemID;
		params.Data = Data;
		params.CustomTagName = CustomTagName;
		params.Quantity = Quantity;
		params.Amount = Amount;
		params.InvComp = InvComp;
		params.ItemGuid = ItemGuid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryItemTooltip.InventoryItemTooltip_C.ExecuteUbergraph_InventoryItemTooltip
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryItemTooltip_C::ExecuteUbergraph_InventoryItemTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItemTooltip.InventoryItemTooltip_C.ExecuteUbergraph_InventoryItemTooltip");
		
		UInventoryItemTooltip_C_ExecuteUbergraph_InventoryItemTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInventoryItemTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryItemTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryItemTooltip.InventoryItemTooltip_C");
		return ptr;
	}

}


