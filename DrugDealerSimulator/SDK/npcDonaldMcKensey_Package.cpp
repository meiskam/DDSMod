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
	 * 		Name   -> Function npcDonaldMcKensey.npcDonaldMcKensey_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AnpcDonaldMcKensey_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function npcDonaldMcKensey.npcDonaldMcKensey_C.UserConstructionScript");
		
		AnpcDonaldMcKensey_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function npcDonaldMcKensey.npcDonaldMcKensey_C.eventEnterDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AnpcDonaldMcKensey_C::eventEnterDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function npcDonaldMcKensey.npcDonaldMcKensey_C.eventEnterDialogue");
		
		AnpcDonaldMcKensey_C_eventEnterDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function npcDonaldMcKensey.npcDonaldMcKensey_C.ExecuteUbergraph_npcDonaldMcKensey
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AnpcDonaldMcKensey_C::ExecuteUbergraph_npcDonaldMcKensey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function npcDonaldMcKensey.npcDonaldMcKensey_C.ExecuteUbergraph_npcDonaldMcKensey");
		
		AnpcDonaldMcKensey_C_ExecuteUbergraph_npcDonaldMcKensey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AnpcDonaldMcKensey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AnpcDonaldMcKensey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass npcDonaldMcKensey.npcDonaldMcKensey_C");
		return ptr;
	}

}


