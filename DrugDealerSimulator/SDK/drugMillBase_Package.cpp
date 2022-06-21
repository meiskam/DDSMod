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
	 * 		Name   -> Function drugMillBase.drugMillBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugMillBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.UserConstructionScript");
		
		AdrugMillBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugMillBase.drugMillBase_C.addSubstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugMillBase_C::addSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.addSubstance");
		
		AdrugMillBase_C_addSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugMillBase.drugMillBase_C.millContents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugMillBase_C::millContents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.millContents");
		
		AdrugMillBase_C_millContents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugMillBase.drugMillBase_C.workFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugMillBase_C::workFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.workFinished");
		
		AdrugMillBase_C_workFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugMillBase.drugMillBase_C.tryAddSubstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugMillBase_C::tryAddSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.tryAddSubstance");
		
		AdrugMillBase_C_tryAddSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugMillBase.drugMillBase_C.ExecuteUbergraph_drugMillBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugMillBase_C::ExecuteUbergraph_drugMillBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.ExecuteUbergraph_drugMillBase");
		
		AdrugMillBase_C_ExecuteUbergraph_drugMillBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdrugMillBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdrugMillBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass drugMillBase.drugMillBase_C");
		return ptr;
	}

}


