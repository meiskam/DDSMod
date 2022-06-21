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
	 * 		Name   -> Function BP_Truck01_Dump2Frame.BP_Truck01_Dump2Frame_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Truck01_Dump2Frame_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Truck01_Dump2Frame.BP_Truck01_Dump2Frame_C.UserConstructionScript");
		
		ABP_Truck01_Dump2Frame_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Truck01_Dump2Frame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Truck01_Dump2Frame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Truck01_Dump2Frame.BP_Truck01_Dump2Frame_C");
		return ptr;
	}

}


