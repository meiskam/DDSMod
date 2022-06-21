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
	 * 		Name   -> Function checkOutListItemWidget.checkOutListItemWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEquipmentShopInterfaceWidget_C*             parentRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UcheckOutListItemWidget_C::Setup(const class FName& NewParam, float Price, int32_t Quantity, int32_t Index, class UEquipmentShopInterfaceWidget_C* parentRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.Setup");
		
		UcheckOutListItemWidget_C_Setup_Params params {};
		params.NewParam = NewParam;
		params.Price = Price;
		params.Quantity = Quantity;
		params.Index = Index;
		params.parentRef = parentRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UcheckOutListItemWidget_C::BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UcheckOutListItemWidget_C_BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UcheckOutListItemWidget_C::BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UcheckOutListItemWidget_C_BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UcheckOutListItemWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UcheckOutListItemWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function checkOutListItemWidget.checkOutListItemWidget_C.ExecuteUbergraph_checkOutListItemWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UcheckOutListItemWidget_C::ExecuteUbergraph_checkOutListItemWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.ExecuteUbergraph_checkOutListItemWidget");
		
		UcheckOutListItemWidget_C_ExecuteUbergraph_checkOutListItemWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UcheckOutListItemWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UcheckOutListItemWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass checkOutListItemWidget.checkOutListItemWidget_C");
		return ptr;
	}

}


