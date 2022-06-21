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
	 * 		Name   -> Function popupFrame.popupFrame_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UpopupFrame_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.Construct");
		
		UpopupFrame_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function popupFrame.popupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpopupFrame_C::BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UpopupFrame_C_BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function popupFrame.popupFrame_C.configure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PopupTitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PopupDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShowMouse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UpopupFrame_C::configure(const class FText& PopupTitle, const class FText& PopupDesc, const class FText& ButtonText, bool ShowMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.configure");
		
		UpopupFrame_C_configure_Params params {};
		params.PopupTitle = PopupTitle;
		params.PopupDesc = PopupDesc;
		params.ButtonText = ButtonText;
		params.ShowMouse = ShowMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function popupFrame.popupFrame_C.killWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UpopupFrame_C::killWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.killWidget");
		
		UpopupFrame_C_killWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function popupFrame.popupFrame_C.ExecuteUbergraph_popupFrame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UpopupFrame_C::ExecuteUbergraph_popupFrame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.ExecuteUbergraph_popupFrame");
		
		UpopupFrame_C_ExecuteUbergraph_popupFrame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UpopupFrame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UpopupFrame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass popupFrame.popupFrame_C");
		return ptr;
	}

}


