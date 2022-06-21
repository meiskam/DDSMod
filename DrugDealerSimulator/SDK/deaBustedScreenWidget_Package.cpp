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
	 * 		Name   -> Function deaBustedScreenWidget.deaBustedScreenWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UdeaBustedScreenWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.Construct");
		
		UdeaBustedScreenWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaBustedScreenWidget.deaBustedScreenWidget_C.showGameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UdeaBustedScreenWidget_C::showGameOver(const class FText& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.showGameOver");
		
		UdeaBustedScreenWidget_C_showGameOver_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaBustedScreenWidget.deaBustedScreenWidget_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeaBustedScreenWidget_C::BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UdeaBustedScreenWidget_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaBustedScreenWidget.deaBustedScreenWidget_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdeaBustedScreenWidget_C::BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UdeaBustedScreenWidget_C_BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaBustedScreenWidget.deaBustedScreenWidget_C.ExecuteUbergraph_deaBustedScreenWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeaBustedScreenWidget_C::ExecuteUbergraph_deaBustedScreenWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.ExecuteUbergraph_deaBustedScreenWidget");
		
		UdeaBustedScreenWidget_C_ExecuteUbergraph_deaBustedScreenWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UdeaBustedScreenWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UdeaBustedScreenWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass deaBustedScreenWidget.deaBustedScreenWidget_C");
		return ptr;
	}

}


