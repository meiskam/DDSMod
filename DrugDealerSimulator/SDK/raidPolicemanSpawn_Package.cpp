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
	 * 		Name   -> Function raidPolicemanSpawn.raidPolicemanSpawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AraidPolicemanSpawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.UserConstructionScript");
		
		AraidPolicemanSpawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function raidPolicemanSpawn.raidPolicemanSpawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AraidPolicemanSpawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.ReceiveBeginPlay");
		
		AraidPolicemanSpawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function raidPolicemanSpawn.raidPolicemanSpawn_C.SpawnPoliceman
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AraidPolicemanSpawn_C::SpawnPoliceman()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.SpawnPoliceman");
		
		AraidPolicemanSpawn_C_SpawnPoliceman_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function raidPolicemanSpawn.raidPolicemanSpawn_C.ExecuteUbergraph_raidPolicemanSpawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AraidPolicemanSpawn_C::ExecuteUbergraph_raidPolicemanSpawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.ExecuteUbergraph_raidPolicemanSpawn");
		
		AraidPolicemanSpawn_C_ExecuteUbergraph_raidPolicemanSpawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AraidPolicemanSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AraidPolicemanSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass raidPolicemanSpawn.raidPolicemanSpawn_C");
		return ptr;
	}

}


