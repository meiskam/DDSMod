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
	 * 		Name   -> Function ArrestScreenWidget.ArrestScreenWidget_C.RenderArrestedList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UArrestScreenWidget_C::RenderArrestedList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.RenderArrestedList");
		
		UArrestScreenWidget_C_RenderArrestedList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ArrestScreenWidget.ArrestScreenWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UArrestScreenWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.Construct");
		
		UArrestScreenWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ArrestScreenWidget.ArrestScreenWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AsalesManager_C*                             salesManager                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UshadyCommInterface_C*                       ParentShady                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UArrestScreenWidget_C::Setup(class AsalesManager_C* salesManager, class UshadyCommInterface_C* ParentShady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.Setup");
		
		UArrestScreenWidget_C_Setup_Params params {};
		params.salesManager = salesManager;
		params.ParentShady = ParentShady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ArrestScreenWidget.ArrestScreenWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UArrestScreenWidget_C::BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UArrestScreenWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ArrestScreenWidget.ArrestScreenWidget_C.ExecuteUbergraph_ArrestScreenWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UArrestScreenWidget_C::ExecuteUbergraph_ArrestScreenWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.ExecuteUbergraph_ArrestScreenWidget");
		
		UArrestScreenWidget_C_ExecuteUbergraph_ArrestScreenWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UArrestScreenWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArrestScreenWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArrestScreenWidget.ArrestScreenWidget_C");
		return ptr;
	}

}


