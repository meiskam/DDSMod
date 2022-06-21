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
	 * 		Name   -> Function psychedelicDoorNPC.psychedelicDoorNPC_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicDoorNPC_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.UserConstructionScript");
		
		ApsychedelicDoorNPC_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicDoorNPC.psychedelicDoorNPC_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApsychedelicDoorNPC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.ReceiveBeginPlay");
		
		ApsychedelicDoorNPC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicDoorNPC.psychedelicDoorNPC_C.checkDoorOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicDoorNPC_C::checkDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.checkDoorOpen");
		
		ApsychedelicDoorNPC_C_checkDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicDoorNPC.psychedelicDoorNPC_C.ExecuteUbergraph_psychedelicDoorNPC
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApsychedelicDoorNPC_C::ExecuteUbergraph_psychedelicDoorNPC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicDoorNPC.psychedelicDoorNPC_C.ExecuteUbergraph_psychedelicDoorNPC");
		
		ApsychedelicDoorNPC_C_ExecuteUbergraph_psychedelicDoorNPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApsychedelicDoorNPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApsychedelicDoorNPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicDoorNPC.psychedelicDoorNPC_C");
		return ptr;
	}

}


