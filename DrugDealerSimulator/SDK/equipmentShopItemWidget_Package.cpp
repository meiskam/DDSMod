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
	 * 		Name   -> Function equipmentShopItemWidget.equipmentShopItemWidget_C.Get_mainHolder_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UequipmentShopItemWidget_C::Get_mainHolder_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.Get_mainHolder_ToolTipWidget_1");
		
		UequipmentShopItemWidget_C_Get_mainHolder_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShopItemWidget.equipmentShopItemWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EqID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEquipmentShopInterfaceWidget_C*             parentRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               checkedOut                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            WaitBoost                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UequipmentShopItemWidget_C::Setup(const class FName& EqID, float Price, int32_t Index, class UEquipmentShopInterfaceWidget_C* parentRef, bool checkedOut, int32_t WaitBoost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.Setup");
		
		UequipmentShopItemWidget_C_Setup_Params params {};
		params.EqID = EqID;
		params.Price = Price;
		params.Index = Index;
		params.parentRef = parentRef;
		params.checkedOut = checkedOut;
		params.WaitBoost = WaitBoost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShopItemWidget.equipmentShopItemWidget_C.BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UequipmentShopItemWidget_C::BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UequipmentShopItemWidget_C_BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function equipmentShopItemWidget.equipmentShopItemWidget_C.ExecuteUbergraph_equipmentShopItemWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UequipmentShopItemWidget_C::ExecuteUbergraph_equipmentShopItemWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.ExecuteUbergraph_equipmentShopItemWidget");
		
		UequipmentShopItemWidget_C_ExecuteUbergraph_equipmentShopItemWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UequipmentShopItemWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UequipmentShopItemWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass equipmentShopItemWidget.equipmentShopItemWidget_C");
		return ptr;
	}

}


