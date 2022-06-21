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
	 * 		Name   -> Function pauseMenu.pauseMenu_C.showConfirm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            ConfirmActionIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UpauseMenu_C::showConfirm(const class FText& Header, const class FText& Desc, int32_t ConfirmActionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.showConfirm");
		
		UpauseMenu_C_showConfirm_Params params {};
		params.Header = Header;
		params.Desc = Desc;
		params.ConfirmActionIndex = ConfirmActionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.terminateMe
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canUnpause                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UpauseMenu_C::terminateMe(bool* canUnpause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.terminateMe");
		
		UpauseMenu_C_terminateMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canUnpause != nullptr)
			*canUnpause = params.canUnpause;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UpauseMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.Construct");
		
		UpauseMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpauseMenu_C::BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UpauseMenu_C_BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpauseMenu_C::BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UpauseMenu_C_BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpauseMenu_C::BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UpauseMenu_C_BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpauseMenu_C::BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UpauseMenu_C_BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpauseMenu_C::BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UpauseMenu_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpauseMenu_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UpauseMenu_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpauseMenu_C::BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UpauseMenu_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pauseMenu.pauseMenu_C.ExecuteUbergraph_pauseMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UpauseMenu_C::ExecuteUbergraph_pauseMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.ExecuteUbergraph_pauseMenu");
		
		UpauseMenu_C_ExecuteUbergraph_pauseMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UpauseMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UpauseMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass pauseMenu.pauseMenu_C");
		return ptr;
	}

}


