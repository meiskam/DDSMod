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
	 * 		Name   -> Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityGuardSectorCDialogue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.UserConstructionScript");
		
		ASecurityGuardSectorCDialogue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.DialogueLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityGuardSectorCDialogue_C::DialogueLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.DialogueLoaded");
		
		ASecurityGuardSectorCDialogue_C_DialogueLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.tryHandleKey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityGuardSectorCDialogue_C::tryHandleKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.tryHandleKey");
		
		ASecurityGuardSectorCDialogue_C_tryHandleKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.ExecuteUbergraph_SecurityGuardSectorCDialogue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityGuardSectorCDialogue_C::ExecuteUbergraph_SecurityGuardSectorCDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C.ExecuteUbergraph_SecurityGuardSectorCDialogue");
		
		ASecurityGuardSectorCDialogue_C_ExecuteUbergraph_SecurityGuardSectorCDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityGuardSectorCDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityGuardSectorCDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C");
		return ptr;
	}

}


