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
	 * 		Name   -> Function decoTrashFloorLamp.decoTrashFloorLamp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecoTrashFloorLamp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.UserConstructionScript");
		
		AdecoTrashFloorLamp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoTrashFloorLamp.decoTrashFloorLamp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdecoTrashFloorLamp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.ReceiveBeginPlay");
		
		AdecoTrashFloorLamp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecoTrashFloorLamp_C::InputToggleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOff");
		
		AdecoTrashFloorLamp_C_InputToggleOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecoTrashFloorLamp_C::InputToggleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.InputToggleOn");
		
		AdecoTrashFloorLamp_C_InputToggleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoTrashFloorLamp.decoTrashFloorLamp_C.ExecuteUbergraph_decoTrashFloorLamp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecoTrashFloorLamp_C::ExecuteUbergraph_decoTrashFloorLamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoTrashFloorLamp.decoTrashFloorLamp_C.ExecuteUbergraph_decoTrashFloorLamp");
		
		AdecoTrashFloorLamp_C_ExecuteUbergraph_decoTrashFloorLamp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecoTrashFloorLamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoTrashFloorLamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoTrashFloorLamp.decoTrashFloorLamp_C");
		return ptr;
	}

}


