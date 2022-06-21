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
	 * 		Name   -> Function lightSwitchWallBP.lightSwitchWallBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AlightSwitchWallBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.UserConstructionScript");
		
		AlightSwitchWallBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightSwitchWallBP.lightSwitchWallBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AlightSwitchWallBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.ReceiveBeginPlay");
		
		AlightSwitchWallBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightSwitchWallBP.lightSwitchWallBP_C.activateSwitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlightSwitchWallBP_C::activateSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.activateSwitch");
		
		AlightSwitchWallBP_C_activateSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightSwitchWallBP.lightSwitchWallBP_C.ExecuteUbergraph_lightSwitchWallBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlightSwitchWallBP_C::ExecuteUbergraph_lightSwitchWallBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightSwitchWallBP.lightSwitchWallBP_C.ExecuteUbergraph_lightSwitchWallBP");
		
		AlightSwitchWallBP_C_ExecuteUbergraph_lightSwitchWallBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlightSwitchWallBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlightSwitchWallBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass lightSwitchWallBP.lightSwitchWallBP_C");
		return ptr;
	}

}


