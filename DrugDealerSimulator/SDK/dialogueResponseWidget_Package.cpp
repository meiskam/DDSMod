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
	 * 		Name   -> Function dialogueResponseWidget.dialogueResponseWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DialogueText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            responseID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UdialogueWidget_C*                           parentRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FdialogueResponseData                       responseData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UdialogueResponseWidget_C::Setup(const class FText& DialogueText, int32_t responseID, class UdialogueWidget_C* parentRef, const struct FdialogueResponseData& responseData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dialogueResponseWidget.dialogueResponseWidget_C.Setup");
		
		UdialogueResponseWidget_C_Setup_Params params {};
		params.DialogueText = DialogueText;
		params.responseID = responseID;
		params.parentRef = parentRef;
		params.responseData = responseData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dialogueResponseWidget.dialogueResponseWidget_C.BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdialogueResponseWidget_C::BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dialogueResponseWidget.dialogueResponseWidget_C.BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UdialogueResponseWidget_C_BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dialogueResponseWidget.dialogueResponseWidget_C.ExecuteUbergraph_dialogueResponseWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdialogueResponseWidget_C::ExecuteUbergraph_dialogueResponseWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dialogueResponseWidget.dialogueResponseWidget_C.ExecuteUbergraph_dialogueResponseWidget");
		
		UdialogueResponseWidget_C_ExecuteUbergraph_dialogueResponseWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UdialogueResponseWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UdialogueResponseWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass dialogueResponseWidget.dialogueResponseWidget_C");
		return ptr;
	}

}


