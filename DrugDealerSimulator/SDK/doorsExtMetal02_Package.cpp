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
	 * 		Name   -> Function doorsExtMetal02.doorsExtMetal02_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtMetal02_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.UserConstructionScript");
		
		AdoorsExtMetal02_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtMetal02.doorsExtMetal02_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdoorsExtMetal02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.ReceiveBeginPlay");
		
		AdoorsExtMetal02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtMetal02.doorsExtMetal02_C.TestOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtMetal02_C::TestOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.TestOpen");
		
		AdoorsExtMetal02_C_TestOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtMetal02.doorsExtMetal02_C.ExecuteUbergraph_doorsExtMetal02
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdoorsExtMetal02_C::ExecuteUbergraph_doorsExtMetal02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtMetal02.doorsExtMetal02_C.ExecuteUbergraph_doorsExtMetal02");
		
		AdoorsExtMetal02_C_ExecuteUbergraph_doorsExtMetal02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdoorsExtMetal02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdoorsExtMetal02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass doorsExtMetal02.doorsExtMetal02_C");
		return ptr;
	}

}


