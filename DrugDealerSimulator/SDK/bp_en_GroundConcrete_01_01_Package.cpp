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
	 * 		Name   -> Function bp_en_GroundConcrete_01_01.bp_en_GroundConcrete_01_01_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void Abp_en_GroundConcrete_01_01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_en_GroundConcrete_01_01.bp_en_GroundConcrete_01_01_C.UserConstructionScript");
		
		Abp_en_GroundConcrete_01_01_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction Abp_en_GroundConcrete_01_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Abp_en_GroundConcrete_01_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass bp_en_GroundConcrete_01_01.bp_en_GroundConcrete_01_01_C");
		return ptr;
	}

}


