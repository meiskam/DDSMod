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
	 * 		Name   -> Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicDoorDialogue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.UserConstructionScript");
		
		ApsychedelicDoorDialogue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.unlockGangDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicDoorDialogue_C::unlockGangDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.unlockGangDoor");
		
		ApsychedelicDoorDialogue_C_unlockGangDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.ExecuteUbergraph_psychedelicDoorDialogue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApsychedelicDoorDialogue_C::ExecuteUbergraph_psychedelicDoorDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicDoorDialogue.psychedelicDoorDialogue_C.ExecuteUbergraph_psychedelicDoorDialogue");
		
		ApsychedelicDoorDialogue_C_ExecuteUbergraph_psychedelicDoorDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApsychedelicDoorDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApsychedelicDoorDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicDoorDialogue.psychedelicDoorDialogue_C");
		return ptr;
	}

}


