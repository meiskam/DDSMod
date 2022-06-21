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
	 * 		Name   -> Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USeagull_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A");
		
		USeagull_AnimationBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USeagull_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.BlueprintUpdateAnimation");
		
		USeagull_AnimationBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.AnimNotify_IdleEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USeagull_AnimationBlueprint_C::AnimNotify_IdleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.AnimNotify_IdleEnd");
		
		USeagull_AnimationBlueprint_C_AnimNotify_IdleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.ExecuteUbergraph_Seagull_AnimationBlueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USeagull_AnimationBlueprint_C::ExecuteUbergraph_Seagull_AnimationBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.ExecuteUbergraph_Seagull_AnimationBlueprint");
		
		USeagull_AnimationBlueprint_C_ExecuteUbergraph_Seagull_AnimationBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USeagull_AnimationBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeagull_AnimationBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C");
		return ptr;
	}

}


