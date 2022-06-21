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
	 * 		Name   -> Function sprayAreaGizmo.sprayAreaGizmo_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsprayAreaGizmo_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.UserConstructionScript");
		
		AsprayAreaGizmo_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayAreaGizmo.sprayAreaGizmo_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsprayAreaGizmo_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.ReceiveBeginPlay");
		
		AsprayAreaGizmo_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayAreaGizmo.sprayAreaGizmo_C.checkSprayPlacement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsprayAreaGizmo_C::checkSprayPlacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.checkSprayPlacement");
		
		AsprayAreaGizmo_C_checkSprayPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayAreaGizmo.sprayAreaGizmo_C.ExecuteUbergraph_sprayAreaGizmo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsprayAreaGizmo_C::ExecuteUbergraph_sprayAreaGizmo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.ExecuteUbergraph_sprayAreaGizmo");
		
		AsprayAreaGizmo_C_ExecuteUbergraph_sprayAreaGizmo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsprayAreaGizmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsprayAreaGizmo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sprayAreaGizmo.sprayAreaGizmo_C");
		return ptr;
	}

}


