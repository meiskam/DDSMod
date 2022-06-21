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
	 * 		Name   -> Function weedDeskBlocker.weedDeskBlocker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AweedDeskBlocker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.UserConstructionScript");
		
		AweedDeskBlocker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedDeskBlocker.weedDeskBlocker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AweedDeskBlocker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.ReceiveBeginPlay");
		
		AweedDeskBlocker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedDeskBlocker.weedDeskBlocker_C.testGangUnlocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AweedDeskBlocker_C::testGangUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.testGangUnlocked");
		
		AweedDeskBlocker_C_testGangUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedDeskBlocker.weedDeskBlocker_C.ExecuteUbergraph_weedDeskBlocker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AweedDeskBlocker_C::ExecuteUbergraph_weedDeskBlocker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedDeskBlocker.weedDeskBlocker_C.ExecuteUbergraph_weedDeskBlocker");
		
		AweedDeskBlocker_C_ExecuteUbergraph_weedDeskBlocker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AweedDeskBlocker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AweedDeskBlocker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass weedDeskBlocker.weedDeskBlocker_C");
		return ptr;
	}

}


