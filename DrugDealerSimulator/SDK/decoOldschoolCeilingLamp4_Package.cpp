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
	 * 		Name   -> Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp4_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.UserConstructionScript");
		
		AdecoOldschoolCeilingLamp4_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdecoOldschoolCeilingLamp4_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ReceiveBeginPlay");
		
		AdecoOldschoolCeilingLamp4_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ExecuteUbergraph_decoOldschoolCeilingLamp4
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecoOldschoolCeilingLamp4_C::ExecuteUbergraph_decoOldschoolCeilingLamp4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C.ExecuteUbergraph_decoOldschoolCeilingLamp4");
		
		AdecoOldschoolCeilingLamp4_C_ExecuteUbergraph_decoOldschoolCeilingLamp4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecoOldschoolCeilingLamp4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoOldschoolCeilingLamp4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C");
		return ptr;
	}

}


