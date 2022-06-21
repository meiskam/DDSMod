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
	 * 		Name   -> Function nightClubLookTrigger.nightClubLookTrigger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AnightClubLookTrigger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightClubLookTrigger.nightClubLookTrigger_C.UserConstructionScript");
		
		AnightClubLookTrigger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function nightClubLookTrigger.nightClubLookTrigger_C.playerLookedAt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AnightClubLookTrigger_C::playerLookedAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightClubLookTrigger.nightClubLookTrigger_C.playerLookedAt");
		
		AnightClubLookTrigger_C_playerLookedAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function nightClubLookTrigger.nightClubLookTrigger_C.ExecuteUbergraph_nightClubLookTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AnightClubLookTrigger_C::ExecuteUbergraph_nightClubLookTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightClubLookTrigger.nightClubLookTrigger_C.ExecuteUbergraph_nightClubLookTrigger");
		
		AnightClubLookTrigger_C_ExecuteUbergraph_nightClubLookTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AnightClubLookTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AnightClubLookTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass nightClubLookTrigger.nightClubLookTrigger_C");
		return ptr;
	}

}


