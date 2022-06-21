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
	 * 		Name   -> Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnFail_A030AE6644CF82915307329D4CCBBD31
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_TurnAndRunFrom_Enemy_C::OnFail_A030AE6644CF82915307329D4CCBBD31(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnFail_A030AE6644CF82915307329D4CCBBD31");
		
		UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnFail_A030AE6644CF82915307329D4CCBBD31_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnSuccess_A030AE6644CF82915307329D4CCBBD31
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_TurnAndRunFrom_Enemy_C::OnSuccess_A030AE6644CF82915307329D4CCBBD31(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnSuccess_A030AE6644CF82915307329D4CCBBD31");
		
		UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnSuccess_A030AE6644CF82915307329D4CCBBD31_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_TurnAndRunFrom_Enemy_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ReceiveExecuteAI");
		
		UBTTask_Bird_TurnAndRunFrom_Enemy_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_TurnAndRunFrom_Enemy_C::ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy");
		
		UBTTask_Bird_TurnAndRunFrom_Enemy_C_ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_Bird_TurnAndRunFrom_Enemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Bird_TurnAndRunFrom_Enemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C");
		return ptr;
	}

}


