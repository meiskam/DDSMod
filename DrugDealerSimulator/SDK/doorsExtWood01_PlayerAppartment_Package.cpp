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
	 * 		Name   -> Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtWood01_PlayerAppartment_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.UserConstructionScript");
		
		AdoorsExtWood01_PlayerAppartment_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdoorsExtWood01_PlayerAppartment_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.ReceiveBeginPlay");
		
		AdoorsExtWood01_PlayerAppartment_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.eventDoorActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtWood01_PlayerAppartment_C::eventDoorActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.eventDoorActivated");
		
		AdoorsExtWood01_PlayerAppartment_C_eventDoorActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.EnableHouseDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtWood01_PlayerAppartment_C::EnableHouseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.EnableHouseDoor");
		
		AdoorsExtWood01_PlayerAppartment_C_EnableHouseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.DisableHouseDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtWood01_PlayerAppartment_C::DisableHouseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.DisableHouseDoor");
		
		AdoorsExtWood01_PlayerAppartment_C_DisableHouseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.ExecuteUbergraph_doorsExtWood01_PlayerAppartment
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdoorsExtWood01_PlayerAppartment_C::ExecuteUbergraph_doorsExtWood01_PlayerAppartment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C.ExecuteUbergraph_doorsExtWood01_PlayerAppartment");
		
		AdoorsExtWood01_PlayerAppartment_C_ExecuteUbergraph_doorsExtWood01_PlayerAppartment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdoorsExtWood01_PlayerAppartment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdoorsExtWood01_PlayerAppartment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C");
		return ptr;
	}

}


