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
	 * 		Name   -> Function npcPharmacist.npcPharmacist_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AnpcPharmacist_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function npcPharmacist.npcPharmacist_C.UserConstructionScript");
		
		AnpcPharmacist_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function npcPharmacist.npcPharmacist_C.eventEnterDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AnpcPharmacist_C::eventEnterDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function npcPharmacist.npcPharmacist_C.eventEnterDialogue");
		
		AnpcPharmacist_C_eventEnterDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function npcPharmacist.npcPharmacist_C.ExecuteUbergraph_npcPharmacist
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AnpcPharmacist_C::ExecuteUbergraph_npcPharmacist(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function npcPharmacist.npcPharmacist_C.ExecuteUbergraph_npcPharmacist");
		
		AnpcPharmacist_C_ExecuteUbergraph_npcPharmacist_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AnpcPharmacist_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AnpcPharmacist_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass npcPharmacist.npcPharmacist_C");
		return ptr;
	}

}


