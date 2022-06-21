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
	 * 		Name   -> Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtWoodPsychedelicHideout_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.UserConstructionScript");
		
		AdoorsExtWoodPsychedelicHideout_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.eventDoorActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorsExtWoodPsychedelicHideout_C::eventDoorActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.eventDoorActivated");
		
		AdoorsExtWoodPsychedelicHideout_C_eventDoorActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.ExecuteUbergraph_doorsExtWoodPsychedelicHideout
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdoorsExtWoodPsychedelicHideout_C::ExecuteUbergraph_doorsExtWoodPsychedelicHideout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C.ExecuteUbergraph_doorsExtWoodPsychedelicHideout");
		
		AdoorsExtWoodPsychedelicHideout_C_ExecuteUbergraph_doorsExtWoodPsychedelicHideout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdoorsExtWoodPsychedelicHideout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdoorsExtWoodPsychedelicHideout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C");
		return ptr;
	}

}


