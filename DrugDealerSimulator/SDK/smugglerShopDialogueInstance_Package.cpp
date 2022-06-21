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
	 * 		Name   -> Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsmugglerShopDialogueInstance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.UserConstructionScript");
		
		AsmugglerShopDialogueInstance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsmugglerShopDialogueInstance_C::DialogueLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueLoaded");
		
		AsmugglerShopDialogueInstance_C_DialogueLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsmugglerShopDialogueInstance_C::DialogueActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.DialogueActivated");
		
		AsmugglerShopDialogueInstance_C_DialogueActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.EngageSmuggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsmugglerShopDialogueInstance_C::EngageSmuggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.EngageSmuggle");
		
		AsmugglerShopDialogueInstance_C_EngageSmuggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.SmugglersTask
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsmugglerShopDialogueInstance_C::SmugglersTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.SmugglersTask");
		
		AsmugglerShopDialogueInstance_C_SmugglersTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.ExecuteUbergraph_smugglerShopDialogueInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsmugglerShopDialogueInstance_C::ExecuteUbergraph_smugglerShopDialogueInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopDialogueInstance.smugglerShopDialogueInstance_C.ExecuteUbergraph_smugglerShopDialogueInstance");
		
		AsmugglerShopDialogueInstance_C_ExecuteUbergraph_smugglerShopDialogueInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsmugglerShopDialogueInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsmugglerShopDialogueInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass smugglerShopDialogueInstance.smugglerShopDialogueInstance_C");
		return ptr;
	}

}


