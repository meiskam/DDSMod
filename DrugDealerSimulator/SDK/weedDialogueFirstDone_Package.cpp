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
	 * 		Name   -> Function weedDialogueFirstDone.weedDialogueFirstDone_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AweedDialogueFirstDone_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.UserConstructionScript");
		
		AweedDialogueFirstDone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedDialogueFirstDone.weedDialogueFirstDone_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AweedDialogueFirstDone_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.ReceiveBeginPlay");
		
		AweedDialogueFirstDone_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedDialogueFirstDone.weedDialogueFirstDone_C.retryDialSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AweedDialogueFirstDone_C::retryDialSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.retryDialSet");
		
		AweedDialogueFirstDone_C_retryDialSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedDialogueFirstDone.weedDialogueFirstDone_C.ExecuteUbergraph_weedDialogueFirstDone
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AweedDialogueFirstDone_C::ExecuteUbergraph_weedDialogueFirstDone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDialogueFirstDone.weedDialogueFirstDone_C.ExecuteUbergraph_weedDialogueFirstDone");
		
		AweedDialogueFirstDone_C_ExecuteUbergraph_weedDialogueFirstDone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AweedDialogueFirstDone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AweedDialogueFirstDone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass weedDialogueFirstDone.weedDialogueFirstDone_C");
		return ptr;
	}

}


