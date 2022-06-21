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
	 * 		Name   -> Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_WorldTimeAndConditions_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.UserConstructionScript");
		
		ABP_WorldTimeAndConditions_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_WorldTimeAndConditions_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ReceiveBeginPlay");
		
		ABP_WorldTimeAndConditions_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ShadowsSettingsChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_WorldTimeAndConditions_C::ShadowsSettingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ShadowsSettingsChanged");
		
		ABP_WorldTimeAndConditions_C_ShadowsSettingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.updateShadowStatus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_WorldTimeAndConditions_C::updateShadowStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.updateShadowStatus");
		
		ABP_WorldTimeAndConditions_C_updateShadowStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.InWorldInitiated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_WorldTimeAndConditions_C::InWorldInitiated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.InWorldInitiated");
		
		ABP_WorldTimeAndConditions_C_InWorldInitiated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ExecuteUbergraph_BP_WorldTimeAndConditions
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WorldTimeAndConditions_C::ExecuteUbergraph_BP_WorldTimeAndConditions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ExecuteUbergraph_BP_WorldTimeAndConditions");
		
		ABP_WorldTimeAndConditions_C_ExecuteUbergraph_BP_WorldTimeAndConditions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_WorldTimeAndConditions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WorldTimeAndConditions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C");
		return ptr;
	}

}


