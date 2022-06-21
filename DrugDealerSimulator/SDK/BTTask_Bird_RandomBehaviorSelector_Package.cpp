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
	 * 		Name   -> Function BTTask_Bird_RandomBehaviorSelector.BTTask_Bird_RandomBehaviorSelector_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_RandomBehaviorSelector_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_RandomBehaviorSelector.BTTask_Bird_RandomBehaviorSelector_C.ReceiveExecuteAI");
		
		UBTTask_Bird_RandomBehaviorSelector_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BTTask_Bird_RandomBehaviorSelector.BTTask_Bird_RandomBehaviorSelector_C.ExecuteUbergraph_BTTask_Bird_RandomBehaviorSelector
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_Bird_RandomBehaviorSelector_C::ExecuteUbergraph_BTTask_Bird_RandomBehaviorSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_Bird_RandomBehaviorSelector.BTTask_Bird_RandomBehaviorSelector_C.ExecuteUbergraph_BTTask_Bird_RandomBehaviorSelector");
		
		UBTTask_Bird_RandomBehaviorSelector_C_ExecuteUbergraph_BTTask_Bird_RandomBehaviorSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_Bird_RandomBehaviorSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Bird_RandomBehaviorSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_RandomBehaviorSelector.BTTask_Bird_RandomBehaviorSelector_C");
		return ptr;
	}

}


