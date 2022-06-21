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
	 * 		Name   -> Function confirmDumpContent.confirmDumpContent_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UconfirmDumpContent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.Construct");
		
		UconfirmDumpContent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmDumpContent.confirmDumpContent_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AworkStationEquipmentBase_C*                 EqName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UconfirmDumpContent_C::Setup(class AworkStationEquipmentBase_C* EqName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.Setup");
		
		UconfirmDumpContent_C_Setup_Params params {};
		params.EqName = EqName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmDumpContent.confirmDumpContent_C.Countdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UconfirmDumpContent_C::Countdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.Countdown");
		
		UconfirmDumpContent_C_Countdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UconfirmDumpContent_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UconfirmDumpContent_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UconfirmDumpContent_C::BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UconfirmDumpContent_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmDumpContent.confirmDumpContent_C.killMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UconfirmDumpContent_C::killMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.killMe");
		
		UconfirmDumpContent_C_killMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function confirmDumpContent.confirmDumpContent_C.ExecuteUbergraph_confirmDumpContent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UconfirmDumpContent_C::ExecuteUbergraph_confirmDumpContent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.ExecuteUbergraph_confirmDumpContent");
		
		UconfirmDumpContent_C_ExecuteUbergraph_confirmDumpContent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UconfirmDumpContent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UconfirmDumpContent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass confirmDumpContent.confirmDumpContent_C");
		return ptr;
	}

}


