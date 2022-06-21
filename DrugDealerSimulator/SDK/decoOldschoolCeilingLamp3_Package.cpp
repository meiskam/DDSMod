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
	 * 		Name   -> Function decoOldschoolCeilingLamp3.decoOldschoolCeilingLamp3_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp3_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp3.decoOldschoolCeilingLamp3_C.UserConstructionScript");
		
		AdecoOldschoolCeilingLamp3_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp3.decoOldschoolCeilingLamp3_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp3_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp3.decoOldschoolCeilingLamp3_C.ReceiveBeginPlay");
		
		AdecoOldschoolCeilingLamp3_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp3.decoOldschoolCeilingLamp3_C.ExecuteUbergraph_decoOldschoolCeilingLamp3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecoOldschoolCeilingLamp3_C::ExecuteUbergraph_decoOldschoolCeilingLamp3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp3.decoOldschoolCeilingLamp3_C.ExecuteUbergraph_decoOldschoolCeilingLamp3");
		
		AdecoOldschoolCeilingLamp3_C_ExecuteUbergraph_decoOldschoolCeilingLamp3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecoOldschoolCeilingLamp3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoOldschoolCeilingLamp3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoOldschoolCeilingLamp3.decoOldschoolCeilingLamp3_C");
		return ptr;
	}

}


