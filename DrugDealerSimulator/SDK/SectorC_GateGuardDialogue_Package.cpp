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
	 * 		Name   -> Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.CheckPlayerPass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Pass                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASectorC_GateGuardDialogue_C::CheckPlayerPass(bool* Pass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.CheckPlayerPass");
		
		ASectorC_GateGuardDialogue_C_CheckPlayerPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pass != nullptr)
			*Pass = params.Pass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASectorC_GateGuardDialogue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.UserConstructionScript");
		
		ASectorC_GateGuardDialogue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASectorC_GateGuardDialogue_C::DialogueLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueLoaded");
		
		ASectorC_GateGuardDialogue_C_DialogueLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.RecheckPlayerPass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASectorC_GateGuardDialogue_C::RecheckPlayerPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.RecheckPlayerPass");
		
		ASectorC_GateGuardDialogue_C_RecheckPlayerPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.tryOpenPass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASectorC_GateGuardDialogue_C::tryOpenPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.tryOpenPass");
		
		ASectorC_GateGuardDialogue_C_tryOpenPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASectorC_GateGuardDialogue_C::DialogueActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueActivated");
		
		ASectorC_GateGuardDialogue_C_DialogueActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.ExecuteUbergraph_SectorC_GateGuardDialogue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASectorC_GateGuardDialogue_C::ExecuteUbergraph_SectorC_GateGuardDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.ExecuteUbergraph_SectorC_GateGuardDialogue");
		
		ASectorC_GateGuardDialogue_C_ExecuteUbergraph_SectorC_GateGuardDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASectorC_GateGuardDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASectorC_GateGuardDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C");
		return ptr;
	}

}


