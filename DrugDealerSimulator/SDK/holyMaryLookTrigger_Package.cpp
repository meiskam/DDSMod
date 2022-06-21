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
	 * 		Name   -> Function holyMaryLookTrigger.holyMaryLookTrigger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AholyMaryLookTrigger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function holyMaryLookTrigger.holyMaryLookTrigger_C.UserConstructionScript");
		
		AholyMaryLookTrigger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function holyMaryLookTrigger.holyMaryLookTrigger_C.playerLookedAt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AholyMaryLookTrigger_C::playerLookedAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function holyMaryLookTrigger.holyMaryLookTrigger_C.playerLookedAt");
		
		AholyMaryLookTrigger_C_playerLookedAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function holyMaryLookTrigger.holyMaryLookTrigger_C.ExecuteUbergraph_holyMaryLookTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AholyMaryLookTrigger_C::ExecuteUbergraph_holyMaryLookTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function holyMaryLookTrigger.holyMaryLookTrigger_C.ExecuteUbergraph_holyMaryLookTrigger");
		
		AholyMaryLookTrigger_C_ExecuteUbergraph_holyMaryLookTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AholyMaryLookTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AholyMaryLookTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass holyMaryLookTrigger.holyMaryLookTrigger_C");
		return ptr;
	}

}


