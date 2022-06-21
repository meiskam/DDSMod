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
	 * 		Name   -> Function warehouseBarierSegmentBP.warehouseBarierSegmentBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AwarehouseBarierSegmentBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function warehouseBarierSegmentBP.warehouseBarierSegmentBP_C.UserConstructionScript");
		
		AwarehouseBarierSegmentBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AwarehouseBarierSegmentBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AwarehouseBarierSegmentBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass warehouseBarierSegmentBP.warehouseBarierSegmentBP_C");
		return ptr;
	}

}


