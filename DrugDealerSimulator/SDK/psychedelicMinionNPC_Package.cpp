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
	 * 		Name   -> Function psychedelicMinionNPC.psychedelicMinionNPC_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicMinionNPC_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.UserConstructionScript");
		
		ApsychedelicMinionNPC_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicMinionNPC.psychedelicMinionNPC_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApsychedelicMinionNPC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.ReceiveBeginPlay");
		
		ApsychedelicMinionNPC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicMinionNPC.psychedelicMinionNPC_C.checkCanTalk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicMinionNPC_C::checkCanTalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.checkCanTalk");
		
		ApsychedelicMinionNPC_C_checkCanTalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicMinionNPC.psychedelicMinionNPC_C.retryInitiate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicMinionNPC_C::retryInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.retryInitiate");
		
		ApsychedelicMinionNPC_C_retryInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicMinionNPC.psychedelicMinionNPC_C.ExecuteUbergraph_psychedelicMinionNPC
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApsychedelicMinionNPC_C::ExecuteUbergraph_psychedelicMinionNPC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicMinionNPC.psychedelicMinionNPC_C.ExecuteUbergraph_psychedelicMinionNPC");
		
		ApsychedelicMinionNPC_C_ExecuteUbergraph_psychedelicMinionNPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApsychedelicMinionNPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApsychedelicMinionNPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicMinionNPC.psychedelicMinionNPC_C");
		return ptr;
	}

}


