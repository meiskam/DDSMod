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
	 * 		Name   -> Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtutorialTipMarkerBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.UserConstructionScript");
		
		AtutorialTipMarkerBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AtutorialTipMarkerBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ReceiveBeginPlay");
		
		AtutorialTipMarkerBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ExecuteUbergraph_tutorialTipMarkerBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtutorialTipMarkerBP_C::ExecuteUbergraph_tutorialTipMarkerBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ExecuteUbergraph_tutorialTipMarkerBP");
		
		AtutorialTipMarkerBP_C_ExecuteUbergraph_tutorialTipMarkerBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AtutorialTipMarkerBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AtutorialTipMarkerBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass tutorialTipMarkerBP.tutorialTipMarkerBP_C");
		return ptr;
	}

}


