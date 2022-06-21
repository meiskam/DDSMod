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
	 * 		Name   -> Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnFail_1112766D49DE3644F96D37AFC9E0BC84
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_SetMovement_T0_Perched_C::OnFail_1112766D49DE3644F96D37AFC9E0BC84(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnFail_1112766D49DE3644F96D37AFC9E0BC84");
		
		UBTTask_Bird_SetMovement_T0_Perched_C_OnFail_1112766D49DE3644F96D37AFC9E0BC84_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnSuccess_1112766D49DE3644F96D37AFC9E0BC84
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_SetMovement_T0_Perched_C::OnSuccess_1112766D49DE3644F96D37AFC9E0BC84(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnSuccess_1112766D49DE3644F96D37AFC9E0BC84");
		
		UBTTask_Bird_SetMovement_T0_Perched_C_OnSuccess_1112766D49DE3644F96D37AFC9E0BC84_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_SetMovement_T0_Perched_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ReceiveExecuteAI");
		
		UBTTask_Bird_SetMovement_T0_Perched_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_SetMovement_T0_Perched_C::ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched");
		
		UBTTask_Bird_SetMovement_T0_Perched_C_ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_Bird_SetMovement_T0_Perched_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Bird_SetMovement_T0_Perched_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C");
		return ptr;
	}

}


