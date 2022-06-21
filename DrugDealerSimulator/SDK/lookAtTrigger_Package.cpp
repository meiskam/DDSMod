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
	 * 		Name   -> Function lookAtTrigger.lookAtTrigger_C.lookAtHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlookAtTrigger_C::lookAtHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.lookAtHit");
		
		AlookAtTrigger_C_lookAtHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lookAtTrigger.lookAtTrigger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlookAtTrigger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.UserConstructionScript");
		
		AlookAtTrigger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lookAtTrigger.lookAtTrigger_C.playerLookedAt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlookAtTrigger_C::playerLookedAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.playerLookedAt");
		
		AlookAtTrigger_C_playerLookedAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lookAtTrigger.lookAtTrigger_C.ExecuteUbergraph_lookAtTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlookAtTrigger_C::ExecuteUbergraph_lookAtTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.ExecuteUbergraph_lookAtTrigger");
		
		AlookAtTrigger_C_ExecuteUbergraph_lookAtTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlookAtTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlookAtTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass lookAtTrigger.lookAtTrigger_C");
		return ptr;
	}

}


