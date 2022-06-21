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
	 * 		Name   -> Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.parseInventory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            quantityFound                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApsychedelicWeedDialogue_C::parseInventory(int32_t* quantityFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.parseInventory");
		
		ApsychedelicWeedDialogue_C_parseInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (quantityFound != nullptr)
			*quantityFound = params.quantityFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicWeedDialogue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.UserConstructionScript");
		
		ApsychedelicWeedDialogue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApsychedelicWeedDialogue_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ReceiveBeginPlay");
		
		ApsychedelicWeedDialogue_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.firstDialogueDone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicWeedDialogue_C::firstDialogueDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.firstDialogueDone");
		
		ApsychedelicWeedDialogue_C_firstDialogueDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.resetDialogueLines
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicWeedDialogue_C::resetDialogueLines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.resetDialogueLines");
		
		ApsychedelicWeedDialogue_C_resetDialogueLines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ExecuteUbergraph_psychedelicWeedDialogue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApsychedelicWeedDialogue_C::ExecuteUbergraph_psychedelicWeedDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedDialogue.psychedelicWeedDialogue_C.ExecuteUbergraph_psychedelicWeedDialogue");
		
		ApsychedelicWeedDialogue_C_ExecuteUbergraph_psychedelicWeedDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApsychedelicWeedDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApsychedelicWeedDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicWeedDialogue.psychedelicWeedDialogue_C");
		return ptr;
	}

}


