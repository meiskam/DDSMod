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
	 * 		Name   -> Function ballenaMoneyMan.ballenaMoneyMan_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AballenaMoneyMan_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.UserConstructionScript");
		
		AballenaMoneyMan_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ballenaMoneyMan.ballenaMoneyMan_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AballenaMoneyMan_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.ReceiveBeginPlay");
		
		AballenaMoneyMan_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ballenaMoneyMan.ballenaMoneyMan_C.tryGoingHome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AballenaMoneyMan_C::tryGoingHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.tryGoingHome");
		
		AballenaMoneyMan_C_tryGoingHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ballenaMoneyMan.ballenaMoneyMan_C.ExecuteUbergraph_ballenaMoneyMan
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AballenaMoneyMan_C::ExecuteUbergraph_ballenaMoneyMan(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.ExecuteUbergraph_ballenaMoneyMan");
		
		AballenaMoneyMan_C_ExecuteUbergraph_ballenaMoneyMan_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AballenaMoneyMan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AballenaMoneyMan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ballenaMoneyMan.ballenaMoneyMan_C");
		return ptr;
	}

}


