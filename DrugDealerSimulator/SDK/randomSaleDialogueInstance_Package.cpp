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
	 * 		Name   -> Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.chooseKnowResponses
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                outResponses                                               (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ArandomSaleDialogueInstance_C::chooseKnowResponses(TArray<class FText>* outResponses, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.chooseKnowResponses");
		
		ArandomSaleDialogueInstance_C_chooseKnowResponses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outResponses != nullptr)
			*outResponses = params.outResponses;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ArandomSaleDialogueInstance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.UserConstructionScript");
		
		ArandomSaleDialogueInstance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ArandomSaleDialogueInstance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ReceiveBeginPlay");
		
		ArandomSaleDialogueInstance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ConfigDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Male                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ArandomSaleDialogueInstance_C::ConfigDialogue(bool Male)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ConfigDialogue");
		
		ArandomSaleDialogueInstance_C_ConfigDialogue_Params params {};
		params.Male = Male;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.gangUnlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ArandomSaleDialogueInstance_C::gangUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.gangUnlock");
		
		ArandomSaleDialogueInstance_C_gangUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.askedAround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ArandomSaleDialogueInstance_C::askedAround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.askedAround");
		
		ArandomSaleDialogueInstance_C_askedAround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ExecuteUbergraph_randomSaleDialogueInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ArandomSaleDialogueInstance_C::ExecuteUbergraph_randomSaleDialogueInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ExecuteUbergraph_randomSaleDialogueInstance");
		
		ArandomSaleDialogueInstance_C_ExecuteUbergraph_randomSaleDialogueInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ArandomSaleDialogueInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ArandomSaleDialogueInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass randomSaleDialogueInstance.randomSaleDialogueInstance_C");
		return ptr;
	}

}


