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
	 * 		Name   -> Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.chooseKnowSomething
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                outResponses                                               (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AdealerSaleDialogueInstance_C::chooseKnowSomething(TArray<class FText>* outResponses, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.chooseKnowSomething");
		
		AdealerSaleDialogueInstance_C_chooseKnowSomething_Params params {};
		
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
	 * 		Name   -> Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdealerSaleDialogueInstance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.UserConstructionScript");
		
		AdealerSaleDialogueInstance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ConfigDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Male                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AdealerSaleDialogueInstance_C::ConfigDialogue(bool Male)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ConfigDialogue");
		
		AdealerSaleDialogueInstance_C_ConfigDialogue_Params params {};
		params.Male = Male;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdealerSaleDialogueInstance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ReceiveBeginPlay");
		
		AdealerSaleDialogueInstance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.gangUnlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdealerSaleDialogueInstance_C::gangUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.gangUnlock");
		
		AdealerSaleDialogueInstance_C_gangUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.askedAround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdealerSaleDialogueInstance_C::askedAround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.askedAround");
		
		AdealerSaleDialogueInstance_C_askedAround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ExecuteUbergraph_dealerSaleDialogueInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdealerSaleDialogueInstance_C::ExecuteUbergraph_dealerSaleDialogueInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ExecuteUbergraph_dealerSaleDialogueInstance");
		
		AdealerSaleDialogueInstance_C_ExecuteUbergraph_dealerSaleDialogueInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdealerSaleDialogueInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdealerSaleDialogueInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass dealerSaleDialogueInstance.dealerSaleDialogueInstance_C");
		return ptr;
	}

}


