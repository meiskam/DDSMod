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
	 * 		Name   -> Function confirmPopupFrame.confirmPopupFrame_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UconfirmPopupFrame_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.Construct");
		
		UconfirmPopupFrame_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UconfirmPopupFrame_C::BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UconfirmPopupFrame_C_BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmPopupFrame.confirmPopupFrame_C.configure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PopupTitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PopupDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShowMouse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     Querier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UconfirmPopupFrame_C::configure(const class FText& PopupTitle, const class FText& PopupDesc, bool ShowMouse, class UObject* Querier, const class FString& ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.configure");
		
		UconfirmPopupFrame_C_configure_Params params {};
		params.PopupTitle = PopupTitle;
		params.PopupDesc = PopupDesc;
		params.ShowMouse = ShowMouse;
		params.Querier = Querier;
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmPopupFrame.confirmPopupFrame_C.killWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UconfirmPopupFrame_C::killWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.killWidget");
		
		UconfirmPopupFrame_C_killWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UconfirmPopupFrame_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UconfirmPopupFrame_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmPopupFrame.confirmPopupFrame_C.ExecuteUbergraph_confirmPopupFrame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UconfirmPopupFrame_C::ExecuteUbergraph_confirmPopupFrame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmPopupFrame.confirmPopupFrame_C.ExecuteUbergraph_confirmPopupFrame");
		
		UconfirmPopupFrame_C_ExecuteUbergraph_confirmPopupFrame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UconfirmPopupFrame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UconfirmPopupFrame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass confirmPopupFrame.confirmPopupFrame_C");
		return ptr;
	}

}


