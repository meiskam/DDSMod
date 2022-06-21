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
	 * 		Name   -> Function ratDeadDrop.ratDeadDrop_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AratDeadDrop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.UserConstructionScript");
		
		AratDeadDrop_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDeadDrop.ratDeadDrop_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AratDeadDrop_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.ReceiveBeginPlay");
		
		AratDeadDrop_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDeadDrop.ratDeadDrop_C.envelopeDropped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AratDeadDrop_C::envelopeDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.envelopeDropped");
		
		AratDeadDrop_C_envelopeDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDeadDrop.ratDeadDrop_C.closeEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AratDeadDrop_C::closeEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.closeEventScript");
		
		AratDeadDrop_C_closeEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDeadDrop.ratDeadDrop_C.reInitiate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AratDeadDrop_C::reInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.reInitiate");
		
		AratDeadDrop_C_reInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDeadDrop.ratDeadDrop_C.testActivationState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AratDeadDrop_C::testActivationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.testActivationState");
		
		AratDeadDrop_C_testActivationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDeadDrop.ratDeadDrop_C.ExecuteUbergraph_ratDeadDrop
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AratDeadDrop_C::ExecuteUbergraph_ratDeadDrop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDeadDrop.ratDeadDrop_C.ExecuteUbergraph_ratDeadDrop");
		
		AratDeadDrop_C_ExecuteUbergraph_ratDeadDrop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AratDeadDrop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AratDeadDrop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ratDeadDrop.ratDeadDrop_C");
		return ptr;
	}

}


