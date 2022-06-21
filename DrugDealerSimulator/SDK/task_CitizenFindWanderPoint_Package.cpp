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
	 * 		Name   -> Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Utask_CitizenFindWanderPoint_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ReceiveExecute");
		
		Utask_CitizenFindWanderPoint_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ExecuteUbergraph_task_CitizenFindWanderPoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Utask_CitizenFindWanderPoint_C::ExecuteUbergraph_task_CitizenFindWanderPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ExecuteUbergraph_task_CitizenFindWanderPoint");
		
		Utask_CitizenFindWanderPoint_C_ExecuteUbergraph_task_CitizenFindWanderPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction Utask_CitizenFindWanderPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Utask_CitizenFindWanderPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C");
		return ptr;
	}

}


