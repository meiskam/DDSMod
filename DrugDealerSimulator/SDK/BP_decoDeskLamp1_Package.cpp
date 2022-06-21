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
	 * 		Name   -> Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_decoDeskLamp1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.UserConstructionScript");
		
		ABP_decoDeskLamp1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_decoDeskLamp1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.ReceiveBeginPlay");
		
		ABP_decoDeskLamp1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.InputToggleOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_decoDeskLamp1_C::InputToggleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.InputToggleOff");
		
		ABP_decoDeskLamp1_C_InputToggleOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.InputToggleOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_decoDeskLamp1_C::InputToggleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.InputToggleOn");
		
		ABP_decoDeskLamp1_C_InputToggleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.ExecuteUbergraph_BP_decoDeskLamp1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_decoDeskLamp1_C::ExecuteUbergraph_BP_decoDeskLamp1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp1.BP_decoDeskLamp1_C.ExecuteUbergraph_BP_decoDeskLamp1");
		
		ABP_decoDeskLamp1_C_ExecuteUbergraph_BP_decoDeskLamp1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_decoDeskLamp1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_decoDeskLamp1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_decoDeskLamp1.BP_decoDeskLamp1_C");
		return ptr;
	}

}


