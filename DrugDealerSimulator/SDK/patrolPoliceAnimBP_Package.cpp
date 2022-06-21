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
	 * 		Name   -> Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpatrolPoliceAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D");
		
		UpatrolPoliceAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.ExecuteUbergraph_patrolPoliceAnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UpatrolPoliceAnimBP_C::ExecuteUbergraph_patrolPoliceAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.ExecuteUbergraph_patrolPoliceAnimBP");
		
		UpatrolPoliceAnimBP_C_ExecuteUbergraph_patrolPoliceAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UpatrolPoliceAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UpatrolPoliceAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass patrolPoliceAnimBP.patrolPoliceAnimBP_C");
		return ptr;
	}

}


