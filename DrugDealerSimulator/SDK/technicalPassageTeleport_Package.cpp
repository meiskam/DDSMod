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
	 * 		Name   -> Function technicalPassageTeleport.technicalPassageTeleport_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtechnicalPassageTeleport_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.UserConstructionScript");
		
		AtechnicalPassageTeleport_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function technicalPassageTeleport.technicalPassageTeleport_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AtechnicalPassageTeleport_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.ReceiveBeginPlay");
		
		AtechnicalPassageTeleport_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function technicalPassageTeleport.technicalPassageTeleport_C.activatePassage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtechnicalPassageTeleport_C::activatePassage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.activatePassage");
		
		AtechnicalPassageTeleport_C_activatePassage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function technicalPassageTeleport.technicalPassageTeleport_C.checkSectorUnlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtechnicalPassageTeleport_C::checkSectorUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.checkSectorUnlock");
		
		AtechnicalPassageTeleport_C_checkSectorUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function technicalPassageTeleport.technicalPassageTeleport_C.ExecuteUbergraph_technicalPassageTeleport
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtechnicalPassageTeleport_C::ExecuteUbergraph_technicalPassageTeleport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.ExecuteUbergraph_technicalPassageTeleport");
		
		AtechnicalPassageTeleport_C_ExecuteUbergraph_technicalPassageTeleport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AtechnicalPassageTeleport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AtechnicalPassageTeleport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass technicalPassageTeleport.technicalPassageTeleport_C");
		return ptr;
	}

}


