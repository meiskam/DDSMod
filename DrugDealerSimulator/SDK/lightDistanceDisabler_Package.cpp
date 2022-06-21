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
	 * 		Name   -> Function lightDistanceDisabler.lightDistanceDisabler_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlightDistanceDisabler_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.UserConstructionScript");
		
		AlightDistanceDisabler_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightDistanceDisabler.lightDistanceDisabler_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AlightDistanceDisabler_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.ReceiveBeginPlay");
		
		AlightDistanceDisabler_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightDistanceDisabler.lightDistanceDisabler_C.checkDistance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlightDistanceDisabler_C::checkDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.checkDistance");
		
		AlightDistanceDisabler_C_checkDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightDistanceDisabler.lightDistanceDisabler_C.ExecuteUbergraph_lightDistanceDisabler
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlightDistanceDisabler_C::ExecuteUbergraph_lightDistanceDisabler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.ExecuteUbergraph_lightDistanceDisabler");
		
		AlightDistanceDisabler_C_ExecuteUbergraph_lightDistanceDisabler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlightDistanceDisabler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlightDistanceDisabler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass lightDistanceDisabler.lightDistanceDisabler_C");
		return ptr;
	}

}


