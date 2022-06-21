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
	 * 		Name   -> Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AballenaManSpawnPoint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.UserConstructionScript");
		
		AballenaManSpawnPoint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AballenaManSpawnPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ReceiveBeginPlay");
		
		AballenaManSpawnPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ExecuteUbergraph_ballenaManSpawnPoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AballenaManSpawnPoint_C::ExecuteUbergraph_ballenaManSpawnPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ExecuteUbergraph_ballenaManSpawnPoint");
		
		AballenaManSpawnPoint_C_ExecuteUbergraph_ballenaManSpawnPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AballenaManSpawnPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AballenaManSpawnPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ballenaManSpawnPoint.ballenaManSpawnPoint_C");
		return ptr;
	}

}


