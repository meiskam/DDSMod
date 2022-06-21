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
	 * 		Name   -> Function keijiManSpawnPoint.keijiManSpawnPoint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AkeijiManSpawnPoint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiManSpawnPoint.keijiManSpawnPoint_C.UserConstructionScript");
		
		AkeijiManSpawnPoint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function keijiManSpawnPoint.keijiManSpawnPoint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AkeijiManSpawnPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiManSpawnPoint.keijiManSpawnPoint_C.ReceiveBeginPlay");
		
		AkeijiManSpawnPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function keijiManSpawnPoint.keijiManSpawnPoint_C.ExecuteUbergraph_keijiManSpawnPoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AkeijiManSpawnPoint_C::ExecuteUbergraph_keijiManSpawnPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiManSpawnPoint.keijiManSpawnPoint_C.ExecuteUbergraph_keijiManSpawnPoint");
		
		AkeijiManSpawnPoint_C_ExecuteUbergraph_keijiManSpawnPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AkeijiManSpawnPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AkeijiManSpawnPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass keijiManSpawnPoint.keijiManSpawnPoint_C");
		return ptr;
	}

}


