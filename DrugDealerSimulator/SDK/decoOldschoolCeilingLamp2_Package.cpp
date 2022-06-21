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
	 * 		Name   -> Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.UserConstructionScript");
		
		AdecoOldschoolCeilingLamp2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ReceiveBeginPlay");
		
		AdecoOldschoolCeilingLamp2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ExecuteUbergraph_decoOldschoolCeilingLamp2
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecoOldschoolCeilingLamp2_C::ExecuteUbergraph_decoOldschoolCeilingLamp2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C.ExecuteUbergraph_decoOldschoolCeilingLamp2");
		
		AdecoOldschoolCeilingLamp2_C_ExecuteUbergraph_decoOldschoolCeilingLamp2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecoOldschoolCeilingLamp2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoOldschoolCeilingLamp2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoOldschoolCeilingLamp2.decoOldschoolCeilingLamp2_C");
		return ptr;
	}

}


