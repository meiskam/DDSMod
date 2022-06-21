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
	 * 		Name   -> Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryItemTooltipContentItem_C::Setup(const class FText& Name, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.Setup");
		
		UInventoryItemTooltipContentItem_C_Setup_Params params {};
		params.Name = Name;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.ExecuteUbergraph_InventoryItemTooltipContentItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryItemTooltipContentItem_C::ExecuteUbergraph_InventoryItemTooltipContentItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C.ExecuteUbergraph_InventoryItemTooltipContentItem");
		
		UInventoryItemTooltipContentItem_C_ExecuteUbergraph_InventoryItemTooltipContentItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInventoryItemTooltipContentItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryItemTooltipContentItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryItemTooltipContentItem.InventoryItemTooltipContentItem_C");
		return ptr;
	}

}


