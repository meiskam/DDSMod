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
	 * 		Name   -> Function pillMakerBase.pillMakerBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApillMakerBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.UserConstructionScript");
		
		ApillMakerBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pillMakerBase.pillMakerBase_C.addSubstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApillMakerBase_C::addSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.addSubstance");
		
		ApillMakerBase_C_addSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pillMakerBase.pillMakerBase_C.tryAddSubstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApillMakerBase_C::tryAddSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.tryAddSubstance");
		
		ApillMakerBase_C_tryAddSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pillMakerBase.pillMakerBase_C.makePills
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApillMakerBase_C::makePills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.makePills");
		
		ApillMakerBase_C_makePills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pillMakerBase.pillMakerBase_C.workFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApillMakerBase_C::workFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.workFinished");
		
		ApillMakerBase_C_workFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pillMakerBase.pillMakerBase_C.ExecuteUbergraph_pillMakerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApillMakerBase_C::ExecuteUbergraph_pillMakerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.ExecuteUbergraph_pillMakerBase");
		
		ApillMakerBase_C_ExecuteUbergraph_pillMakerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApillMakerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApillMakerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass pillMakerBase.pillMakerBase_C");
		return ptr;
	}

}


