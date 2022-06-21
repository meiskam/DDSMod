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
	 * 		Name   -> Function extinguishPoliceCar.extinguishPoliceCar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AextinguishPoliceCar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.UserConstructionScript");
		
		AextinguishPoliceCar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function extinguishPoliceCar.extinguishPoliceCar_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AextinguishPoliceCar_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.ReceiveTick");
		
		AextinguishPoliceCar_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function extinguishPoliceCar.extinguishPoliceCar_C.startMoving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AextinguishPoliceCar_C::startMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.startMoving");
		
		AextinguishPoliceCar_C_startMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function extinguishPoliceCar.extinguishPoliceCar_C.ExecuteUbergraph_extinguishPoliceCar
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AextinguishPoliceCar_C::ExecuteUbergraph_extinguishPoliceCar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.ExecuteUbergraph_extinguishPoliceCar");
		
		AextinguishPoliceCar_C_ExecuteUbergraph_extinguishPoliceCar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AextinguishPoliceCar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AextinguishPoliceCar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass extinguishPoliceCar.extinguishPoliceCar_C");
		return ptr;
	}

}


