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
	 * 		Name   -> Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecoOldschoolFloorLamp1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.UserConstructionScript");
		
		AdecoOldschoolFloorLamp1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecoOldschoolFloorLamp1_C::InputToggleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOff");
		
		AdecoOldschoolFloorLamp1_C_InputToggleOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecoOldschoolFloorLamp1_C::InputToggleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.InputToggleOn");
		
		AdecoOldschoolFloorLamp1_C_InputToggleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.ExecuteUbergraph_decoOldschoolFloorLamp1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecoOldschoolFloorLamp1_C::ExecuteUbergraph_decoOldschoolFloorLamp1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C.ExecuteUbergraph_decoOldschoolFloorLamp1");
		
		AdecoOldschoolFloorLamp1_C_ExecuteUbergraph_decoOldschoolFloorLamp1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecoOldschoolFloorLamp1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoOldschoolFloorLamp1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoOldschoolFloorLamp1.decoOldschoolFloorLamp1_C");
		return ptr;
	}

}


