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
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmegaphoneTowerBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.UserConstructionScript");
		
		AmegaphoneTowerBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmegaphoneTowerBP_C::fadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__FinishedFunc");
		
		AmegaphoneTowerBP_C_fadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmegaphoneTowerBP_C::fadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__UpdateFunc");
		
		AmegaphoneTowerBP_C_fadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AmegaphoneTowerBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.ReceiveBeginPlay");
		
		AmegaphoneTowerBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.tryInitialise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmegaphoneTowerBP_C::tryInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.tryInitialise");
		
		AmegaphoneTowerBP_C_tryInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.ActivateTower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmegaphoneTowerBP_C::ActivateTower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.ActivateTower");
		
		AmegaphoneTowerBP_C_ActivateTower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.FadeTowerOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmegaphoneTowerBP_C::FadeTowerOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.FadeTowerOut");
		
		AmegaphoneTowerBP_C_FadeTowerOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function megaphoneTowerBP.megaphoneTowerBP_C.ExecuteUbergraph_megaphoneTowerBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmegaphoneTowerBP_C::ExecuteUbergraph_megaphoneTowerBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.ExecuteUbergraph_megaphoneTowerBP");
		
		AmegaphoneTowerBP_C_ExecuteUbergraph_megaphoneTowerBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AmegaphoneTowerBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmegaphoneTowerBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass megaphoneTowerBP.megaphoneTowerBP_C");
		return ptr;
	}

}


