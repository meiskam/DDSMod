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
	 * 		Name   -> Function workStationListWidget.workStationListWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FinventoryItemStruct                        InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class FName                                        EqID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DrugID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       InventoryGuid                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Equipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FappartmentEquipment                        EqData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMixProportionsStruct                       MixProportions                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UworkStationListWidget_C::Setup(const struct FinventoryItemStruct& InventoryData, const class FName& EqID, const class FName& DrugID, const struct FGuid& InventoryGuid, int32_t Quantity, int32_t Amount, bool Equipment, const struct FappartmentEquipment& EqData, bool Selected, const struct FMixProportionsStruct& MixProportions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.Setup");
		
		UworkStationListWidget_C_Setup_Params params {};
		params.InventoryData = InventoryData;
		params.EqID = EqID;
		params.DrugID = DrugID;
		params.InventoryGuid = InventoryGuid;
		params.Quantity = Quantity;
		params.Amount = Amount;
		params.Equipment = Equipment;
		params.EqData = EqData;
		params.Selected = Selected;
		params.MixProportions = MixProportions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UworkStationListWidget_C::ExecuteUbergraph_workStationListWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget");
		
		UworkStationListWidget_C_ExecuteUbergraph_workStationListWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UworkStationListWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UworkStationListWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass workStationListWidget.workStationListWidget_C");
		return ptr;
	}

}


