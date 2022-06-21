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
	 * 		Name   -> Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UConfirmPopupInterface_C::UserClickedCancel(const class FString& ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedCancel");
		
		UConfirmPopupInterface_C_UserClickedCancel_Params params {};
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedConfirm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UConfirmPopupInterface_C::UserClickedConfirm(const class FString& ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedConfirm");
		
		UConfirmPopupInterface_C_UserClickedConfirm_Params params {};
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConfirmPopupInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmPopupInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ConfirmPopupInterface.ConfirmPopupInterface_C");
		return ptr;
	}

}


