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
	 * 		Name   -> Function equipmentListWidget.equipmentListWidget_C.getSurfaceData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SurfaceID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EVillaListCategories                               Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVillaSurfaceFinish                         SurfaceData                                                (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UequipmentListWidget_C::getSurfaceData(const class FName& SurfaceID, EVillaListCategories Category, struct FVillaSurfaceFinish* SurfaceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.getSurfaceData");
		
		UequipmentListWidget_C_getSurfaceData_Params params {};
		params.SurfaceID = SurfaceID;
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SurfaceData != nullptr)
			*SurfaceData = params.SurfaceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentListWidget.equipmentListWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UequipmentListWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.Construct");
		
		UequipmentListWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentListWidget.equipmentListWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FappartmentEquipment                        EqData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        EqID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EVillaListCategories                               Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UequipmentListWidget_C::Setup(const struct FappartmentEquipment& EqData, const class FName& EqID, EVillaListCategories Category, int32_t Quantity, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.Setup");
		
		UequipmentListWidget_C_Setup_Params params {};
		params.EqData = EqData;
		params.EqID = EqID;
		params.Category = Category;
		params.Quantity = Quantity;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UequipmentListWidget_C::ExecuteUbergraph_equipmentListWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget");
		
		UequipmentListWidget_C_ExecuteUbergraph_equipmentListWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UequipmentListWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UequipmentListWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass equipmentListWidget.equipmentListWidget_C");
		return ptr;
	}

}


