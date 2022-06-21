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
	 * 		Name   -> Function launderSpawnLocation.launderSpawnLocation_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlaunderSpawnLocation_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function launderSpawnLocation.launderSpawnLocation_C.UserConstructionScript");
		
		AlaunderSpawnLocation_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function launderSpawnLocation.launderSpawnLocation_C.SpawnCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TaskID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlaunderSpawnLocation_C::SpawnCharacter(int32_t TaskID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function launderSpawnLocation.launderSpawnLocation_C.SpawnCharacter");
		
		AlaunderSpawnLocation_C_SpawnCharacter_Params params {};
		params.TaskID = TaskID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function launderSpawnLocation.launderSpawnLocation_C.ExecuteUbergraph_launderSpawnLocation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlaunderSpawnLocation_C::ExecuteUbergraph_launderSpawnLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function launderSpawnLocation.launderSpawnLocation_C.ExecuteUbergraph_launderSpawnLocation");
		
		AlaunderSpawnLocation_C_ExecuteUbergraph_launderSpawnLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlaunderSpawnLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlaunderSpawnLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass launderSpawnLocation.launderSpawnLocation_C");
		return ptr;
	}

}


