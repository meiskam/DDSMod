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
	 * 		Name   -> Function policeDogAnimBP.policeDogAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UpoliceDogAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeDogAnimBP.policeDogAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E");
		
		UpoliceDogAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeDogAnimBP.policeDogAnimBP_C.ExecuteUbergraph_policeDogAnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UpoliceDogAnimBP_C::ExecuteUbergraph_policeDogAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeDogAnimBP.policeDogAnimBP_C.ExecuteUbergraph_policeDogAnimBP");
		
		UpoliceDogAnimBP_C_ExecuteUbergraph_policeDogAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UpoliceDogAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UpoliceDogAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass policeDogAnimBP.policeDogAnimBP_C");
		return ptr;
	}

}


