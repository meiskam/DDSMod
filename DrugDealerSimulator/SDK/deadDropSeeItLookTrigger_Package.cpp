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
	 * 		Name   -> Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdeadDropSeeItLookTrigger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.UserConstructionScript");
		
		AdeadDropSeeItLookTrigger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.playerLookedAt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdeadDropSeeItLookTrigger_C::playerLookedAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.playerLookedAt");
		
		AdeadDropSeeItLookTrigger_C_playerLookedAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.ExecuteUbergraph_deadDropSeeItLookTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdeadDropSeeItLookTrigger_C::ExecuteUbergraph_deadDropSeeItLookTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.ExecuteUbergraph_deadDropSeeItLookTrigger");
		
		AdeadDropSeeItLookTrigger_C_ExecuteUbergraph_deadDropSeeItLookTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdeadDropSeeItLookTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdeadDropSeeItLookTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C");
		return ptr;
	}

}


