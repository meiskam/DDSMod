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
	 * 		Name   -> Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnFail_F22B8A5A43E73BA6CA860ABAD38534D2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_MoveToEnemyLocation_C::OnFail_F22B8A5A43E73BA6CA860ABAD38534D2(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnFail_F22B8A5A43E73BA6CA860ABAD38534D2");
		
		UBTTask_Bird_MoveToEnemyLocation_C_OnFail_F22B8A5A43E73BA6CA860ABAD38534D2_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_MoveToEnemyLocation_C::OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2");
		
		UBTTask_Bird_MoveToEnemyLocation_C_OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_MoveToEnemyLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ReceiveExecuteAI");
		
		UBTTask_Bird_MoveToEnemyLocation_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_MoveToEnemyLocation_C::ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation");
		
		UBTTask_Bird_MoveToEnemyLocation_C_ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_Bird_MoveToEnemyLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Bird_MoveToEnemyLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C");
		return ptr;
	}

}


