﻿/**
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
	 * 		Name   -> Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_Random_MaxWalkSpeed_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ReceiveExecute");
		
		UBTTask_Bird_Random_MaxWalkSpeed_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_Random_MaxWalkSpeed_C::ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed");
		
		UBTTask_Bird_Random_MaxWalkSpeed_C_ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_Bird_Random_MaxWalkSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Bird_Random_MaxWalkSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C");
		return ptr;
	}

}


