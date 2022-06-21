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
	 * 		Name   -> Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdealerCashTransactionDialogue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.UserConstructionScript");
		
		AdealerCashTransactionDialogue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdealerCashTransactionDialogue_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ReceiveBeginPlay");
		
		AdealerCashTransactionDialogue_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.giveMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdealerCashTransactionDialogue_C::giveMoney()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.giveMoney");
		
		AdealerCashTransactionDialogue_C_giveMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ExecuteUbergraph_dealerCashTransactionDialogue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdealerCashTransactionDialogue_C::ExecuteUbergraph_dealerCashTransactionDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ExecuteUbergraph_dealerCashTransactionDialogue");
		
		AdealerCashTransactionDialogue_C_ExecuteUbergraph_dealerCashTransactionDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdealerCashTransactionDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdealerCashTransactionDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass dealerCashTransactionDialogue.dealerCashTransactionDialogue_C");
		return ptr;
	}

}


