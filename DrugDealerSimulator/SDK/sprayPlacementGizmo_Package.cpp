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
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.updateSprayLook
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::updateSprayLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.updateSprayLook");
		
		AsprayPlacementGizmo_C_updateSprayLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.useSprayFromCan
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::useSprayFromCan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.useSprayFromCan");
		
		AsprayPlacementGizmo_C_useSprayFromCan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkPlacementConditions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               AreaUnlocked                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               showGizmo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AsprayPlacementGizmo_C::checkPlacementConditions(bool* AreaUnlocked, bool* showGizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkPlacementConditions");
		
		AsprayPlacementGizmo_C_checkPlacementConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AreaUnlocked != nullptr)
			*AreaUnlocked = params.AreaUnlocked;
		if (showGizmo != nullptr)
			*showGizmo = params.showGizmo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkSurroundings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::checkSurroundings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkSurroundings");
		
		AsprayPlacementGizmo_C_checkSurroundings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.countdownHold
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsprayPlacementGizmo_C::countdownHold(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.countdownHold");
		
		AsprayPlacementGizmo_C_countdownHold_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.UserConstructionScript");
		
		AsprayPlacementGizmo_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveBeginPlay");
		
		AsprayPlacementGizmo_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsprayPlacementGizmo_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveTick");
		
		AsprayPlacementGizmo_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::ActionPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionPress");
		
		AsprayPlacementGizmo_C_ActionPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.actionRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::actionRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.actionRelease");
		
		AsprayPlacementGizmo_C_actionRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.PutSpraySymbol
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsprayPlacementGizmo_C::PutSpraySymbol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.PutSpraySymbol");
		
		AsprayPlacementGizmo_C_PutSpraySymbol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayPlacementGizmo.sprayPlacementGizmo_C.ExecuteUbergraph_sprayPlacementGizmo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsprayPlacementGizmo_C::ExecuteUbergraph_sprayPlacementGizmo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ExecuteUbergraph_sprayPlacementGizmo");
		
		AsprayPlacementGizmo_C_ExecuteUbergraph_sprayPlacementGizmo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsprayPlacementGizmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsprayPlacementGizmo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sprayPlacementGizmo.sprayPlacementGizmo_C");
		return ptr;
	}

}


