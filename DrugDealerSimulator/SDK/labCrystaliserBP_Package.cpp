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
	 * 		Name   -> Function labCrystaliserBP.labCrystaliserBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlabCrystaliserBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.UserConstructionScript");
		
		AlabCrystaliserBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labCrystaliserBP.labCrystaliserBP_C.addSubstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlabCrystaliserBP_C::addSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.addSubstance");
		
		AlabCrystaliserBP_C_addSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labCrystaliserBP.labCrystaliserBP_C.tryAddSubstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlabCrystaliserBP_C::tryAddSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.tryAddSubstance");
		
		AlabCrystaliserBP_C_tryAddSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labCrystaliserBP.labCrystaliserBP_C.crystaliseContent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlabCrystaliserBP_C::crystaliseContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.crystaliseContent");
		
		AlabCrystaliserBP_C_crystaliseContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labCrystaliserBP.labCrystaliserBP_C.workFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlabCrystaliserBP_C::workFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.workFinished");
		
		AlabCrystaliserBP_C_workFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labCrystaliserBP.labCrystaliserBP_C.ExecuteUbergraph_labCrystaliserBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlabCrystaliserBP_C::ExecuteUbergraph_labCrystaliserBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.ExecuteUbergraph_labCrystaliserBP");
		
		AlabCrystaliserBP_C_ExecuteUbergraph_labCrystaliserBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlabCrystaliserBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlabCrystaliserBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass labCrystaliserBP.labCrystaliserBP_C");
		return ptr;
	}

}


