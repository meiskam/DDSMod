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
	 * 		Name   -> Function Tunnel_Wall_01_BP.Tunnel_Wall_01_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATunnel_Wall_01_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tunnel_Wall_01_BP.Tunnel_Wall_01_BP_C.UserConstructionScript");
		
		ATunnel_Wall_01_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATunnel_Wall_01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATunnel_Wall_01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tunnel_Wall_01_BP.Tunnel_Wall_01_BP_C");
		return ptr;
	}

}


