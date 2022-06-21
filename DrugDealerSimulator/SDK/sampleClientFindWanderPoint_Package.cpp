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
	 * 		Name   -> Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsampleClientFindWanderPoint_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ReceiveExecute");
		
		UsampleClientFindWanderPoint_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ExecuteUbergraph_sampleClientFindWanderPoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsampleClientFindWanderPoint_C::ExecuteUbergraph_sampleClientFindWanderPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ExecuteUbergraph_sampleClientFindWanderPoint");
		
		UsampleClientFindWanderPoint_C_ExecuteUbergraph_sampleClientFindWanderPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UsampleClientFindWanderPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UsampleClientFindWanderPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sampleClientFindWanderPoint.sampleClientFindWanderPoint_C");
		return ptr;
	}

}


