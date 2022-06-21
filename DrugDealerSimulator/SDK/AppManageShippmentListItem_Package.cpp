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
	 * 		Name   -> Function AppManageShippmentListItem.AppManageShippmentListItem_C.Get_btnChose_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UAppManageShippmentListItem_C::Get_btnChose_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.Get_btnChose_ToolTipWidget_1");
		
		UAppManageShippmentListItem_C_Get_btnChose_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAppManageShippmentListItem_C::UserClickedCancel(const class FString& ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedCancel");
		
		UAppManageShippmentListItem_C_UserClickedCancel_Params params {};
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AppManageShippmentListItem.AppManageShippmentListItem_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ArentAppartmentArea_C*                       AppartmentRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UappartmentModeWidget_C*                     appModeWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppManageShippmentListItem_C::Setup(class ArentAppartmentArea_C* AppartmentRef, class UappartmentModeWidget_C* appModeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.Setup");
		
		UAppManageShippmentListItem_C_Setup_Params params {};
		params.AppartmentRef = AppartmentRef;
		params.appModeWidget = appModeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AppManageShippmentListItem.AppManageShippmentListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAppManageShippmentListItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAppManageShippmentListItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedConfirm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAppManageShippmentListItem_C::UserClickedConfirm(const class FString& ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedConfirm");
		
		UAppManageShippmentListItem_C_UserClickedConfirm_Params params {};
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AppManageShippmentListItem.AppManageShippmentListItem_C.ExecuteUbergraph_AppManageShippmentListItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppManageShippmentListItem_C::ExecuteUbergraph_AppManageShippmentListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppManageShippmentListItem.AppManageShippmentListItem_C.ExecuteUbergraph_AppManageShippmentListItem");
		
		UAppManageShippmentListItem_C_ExecuteUbergraph_AppManageShippmentListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAppManageShippmentListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppManageShippmentListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AppManageShippmentListItem.AppManageShippmentListItem_C");
		return ptr;
	}

}


