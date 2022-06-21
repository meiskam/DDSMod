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
	 * 		Name   -> Function SectorC_GateGuard.SectorC_GateGuard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASectorC_GateGuard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuard.SectorC_GateGuard_C.UserConstructionScript");
		
		ASectorC_GateGuard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuard.SectorC_GateGuard_C.RamaLoadedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASectorC_GateGuard_C::RamaLoadedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuard.SectorC_GateGuard_C.RamaLoadedEvent");
		
		ASectorC_GateGuard_C_RamaLoadedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuard.SectorC_GateGuard_C.ExecuteUbergraph_SectorC_GateGuard
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASectorC_GateGuard_C::ExecuteUbergraph_SectorC_GateGuard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuard.SectorC_GateGuard_C.ExecuteUbergraph_SectorC_GateGuard");
		
		ASectorC_GateGuard_C_ExecuteUbergraph_SectorC_GateGuard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASectorC_GateGuard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASectorC_GateGuard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SectorC_GateGuard.SectorC_GateGuard_C");
		return ptr;
	}

}


