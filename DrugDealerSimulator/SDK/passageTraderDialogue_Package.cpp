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
	 * 		Name   -> Function passageTraderDialogue.passageTraderDialogue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApassageTraderDialogue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.UserConstructionScript");
		
		ApassageTraderDialogue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function passageTraderDialogue.passageTraderDialogue_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApassageTraderDialogue_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.ReceiveBeginPlay");
		
		ApassageTraderDialogue_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function passageTraderDialogue.passageTraderDialogue_C.openHatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApassageTraderDialogue_C::openHatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.openHatch");
		
		ApassageTraderDialogue_C_openHatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function passageTraderDialogue.passageTraderDialogue_C.checkPlayerCash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApassageTraderDialogue_C::checkPlayerCash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.checkPlayerCash");
		
		ApassageTraderDialogue_C_checkPlayerCash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function passageTraderDialogue.passageTraderDialogue_C.ExecuteUbergraph_passageTraderDialogue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApassageTraderDialogue_C::ExecuteUbergraph_passageTraderDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.ExecuteUbergraph_passageTraderDialogue");
		
		ApassageTraderDialogue_C_ExecuteUbergraph_passageTraderDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApassageTraderDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApassageTraderDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass passageTraderDialogue.passageTraderDialogue_C");
		return ptr;
	}

}


