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
	 * 		Name   -> Function smug_DeadDrop.smug_DeadDrop_C.findDeadDropRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asmug_DeadDrop_C::findDeadDropRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.findDeadDropRef");
		
		Asmug_DeadDrop_C_findDeadDropRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smug_DeadDrop.smug_DeadDrop_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asmug_DeadDrop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.UserConstructionScript");
		
		Asmug_DeadDrop_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smug_DeadDrop.smug_DeadDrop_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void Asmug_DeadDrop_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.ReceiveBeginPlay");
		
		Asmug_DeadDrop_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smug_DeadDrop.smug_DeadDrop_C.ExecuteUbergraph_smug_DeadDrop
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Asmug_DeadDrop_C::ExecuteUbergraph_smug_DeadDrop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.ExecuteUbergraph_smug_DeadDrop");
		
		Asmug_DeadDrop_C_ExecuteUbergraph_smug_DeadDrop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction Asmug_DeadDrop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asmug_DeadDrop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass smug_DeadDrop.smug_DeadDrop_C");
		return ptr;
	}

}


