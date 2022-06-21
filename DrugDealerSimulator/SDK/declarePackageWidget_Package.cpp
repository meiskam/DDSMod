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
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.changeQuantity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Quan                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeclarePackageWidget_C::changeQuantity(int32_t Quan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.changeQuantity");
		
		UdeclarePackageWidget_C_changeQuantity_Params params {};
		params.Quan = Quan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.clearAllButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::clearAllButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.clearAllButtons");
		
		UdeclarePackageWidget_C_clearAllButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.Construct");
		
		UdeclarePackageWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeclarePackageWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.Tick");
		
		UdeclarePackageWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UpackageProductWidget_C*                     Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeclarePackageWidget_C::Setup(class UpackageProductWidget_C* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.Setup");
		
		UdeclarePackageWidget_C_Setup_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeclarePackageWidget_C::BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn500g_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn500g_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn500g_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn500g_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn1kg_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeclarePackageWidget_C::BndEvt__btn1kg_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn1kg_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UdeclarePackageWidget_C_BndEvt__btn1kg_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function declarePackageWidget.declarePackageWidget_C.ExecuteUbergraph_declarePackageWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeclarePackageWidget_C::ExecuteUbergraph_declarePackageWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.ExecuteUbergraph_declarePackageWidget");
		
		UdeclarePackageWidget_C_ExecuteUbergraph_declarePackageWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UdeclarePackageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UdeclarePackageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass declarePackageWidget.declarePackageWidget_C");
		return ptr;
	}

}


