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
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.beforeLoadCleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UsaveLoadWidget_C::beforeLoadCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.beforeLoadCleanup");
		
		UsaveLoadWidget_C_beforeLoadCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.getStringDateTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DateTime                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UsaveLoadWidget_C::getStringDateTime(class FString* DateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.getStringDateTime");
		
		UsaveLoadWidget_C_getStringDateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DateTime != nullptr)
			*DateTime = params.DateTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UsaveLoadWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.Construct");
		
		UsaveLoadWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.SlotClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsaveLoadWidget_C::SlotClicked(int32_t SlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.SlotClicked");
		
		UsaveLoadWidget_C_SlotClicked_Params params {};
		params.SlotID = SlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SaveGame                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               mainMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AsaveStation_C*                              saveStationRef                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsaveLoadWidget_C::Setup(bool SaveGame, bool mainMenu, class AsaveStation_C* saveStationRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.Setup");
		
		UsaveLoadWidget_C_Setup_Params params {};
		params.SaveGame = SaveGame;
		params.mainMenu = mainMenu;
		params.saveStationRef = saveStationRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UsaveLoadWidget_C::BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UsaveLoadWidget_C_BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UsaveLoadWidget_C::BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UsaveLoadWidget_C_BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UsaveLoadWidget_C::BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UsaveLoadWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UsaveLoadWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.Destruct");
		
		UsaveLoadWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnAddSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UsaveLoadWidget_C::BndEvt__btnAddSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnAddSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UsaveLoadWidget_C_BndEvt__btnAddSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.RefreshList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UsaveLoadWidget_C::RefreshList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.RefreshList");
		
		UsaveLoadWidget_C_RefreshList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveLoadWidget.saveLoadWidget_C.ExecuteUbergraph_saveLoadWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsaveLoadWidget_C::ExecuteUbergraph_saveLoadWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.ExecuteUbergraph_saveLoadWidget");
		
		UsaveLoadWidget_C_ExecuteUbergraph_saveLoadWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UsaveLoadWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UsaveLoadWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass saveLoadWidget.saveLoadWidget_C");
		return ptr;
	}

}


