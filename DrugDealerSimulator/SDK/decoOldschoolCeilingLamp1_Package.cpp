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
	 * 		Name   -> Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.UserConstructionScript");
		
		AdecoOldschoolCeilingLamp1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ReceiveBeginPlay");
		
		AdecoOldschoolCeilingLamp1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ExecuteUbergraph_decoOldschoolCeilingLamp1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecoOldschoolCeilingLamp1_C::ExecuteUbergraph_decoOldschoolCeilingLamp1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C.ExecuteUbergraph_decoOldschoolCeilingLamp1");
		
		AdecoOldschoolCeilingLamp1_C_ExecuteUbergraph_decoOldschoolCeilingLamp1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecoOldschoolCeilingLamp1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoOldschoolCeilingLamp1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoOldschoolCeilingLamp1.decoOldschoolCeilingLamp1_C");
		return ptr;
	}

}


