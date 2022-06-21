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
	 * 		Name   -> Function decoModernFloorLamp3.decoModernFloorLamp3_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecoModernFloorLamp3_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.UserConstructionScript");
		
		AdecoModernFloorLamp3_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoModernFloorLamp3.decoModernFloorLamp3_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdecoModernFloorLamp3_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.ReceiveBeginPlay");
		
		AdecoModernFloorLamp3_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecoModernFloorLamp3_C::InputToggleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOff");
		
		AdecoModernFloorLamp3_C_InputToggleOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecoModernFloorLamp3_C::InputToggleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.InputToggleOn");
		
		AdecoModernFloorLamp3_C_InputToggleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoModernFloorLamp3.decoModernFloorLamp3_C.ExecuteUbergraph_decoModernFloorLamp3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecoModernFloorLamp3_C::ExecuteUbergraph_decoModernFloorLamp3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoModernFloorLamp3.decoModernFloorLamp3_C.ExecuteUbergraph_decoModernFloorLamp3");
		
		AdecoModernFloorLamp3_C_ExecuteUbergraph_decoModernFloorLamp3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecoModernFloorLamp3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoModernFloorLamp3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoModernFloorLamp3.decoModernFloorLamp3_C");
		return ptr;
	}

}


