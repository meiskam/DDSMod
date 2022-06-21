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
	 * 		Name   -> Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrow_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UCrow_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.AnimNotify_IdleEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCrow_AnimBlueprint_C::AnimNotify_IdleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.AnimNotify_IdleEnd");
		
		UCrow_AnimBlueprint_C_AnimNotify_IdleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCrow_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57");
		
		UCrow_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.ExecuteUbergraph_Crow_AnimBlueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrow_AnimBlueprint_C::ExecuteUbergraph_Crow_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.ExecuteUbergraph_Crow_AnimBlueprint");
		
		UCrow_AnimBlueprint_C_ExecuteUbergraph_Crow_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCrow_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrow_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Crow_AnimBlueprint.Crow_AnimBlueprint_C");
		return ptr;
	}

}


