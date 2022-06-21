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
	 * 		Name   -> Function BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_Bird_DisableAvoidance_NearGroundTarget_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C.ReceiveTickAI");
		
		UBTService_Bird_DisableAvoidance_NearGroundTarget_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C.ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearGroundTarget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_Bird_DisableAvoidance_NearGroundTarget_C::ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearGroundTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C.ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearGroundTarget");
		
		UBTService_Bird_DisableAvoidance_NearGroundTarget_C_ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearGroundTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBTService_Bird_DisableAvoidance_NearGroundTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_Bird_DisableAvoidance_NearGroundTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C");
		return ptr;
	}

}


