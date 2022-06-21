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
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.selectFillBottle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ChosenBottleQuantity                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinteractiveWaterSinkBP_C::selectFillBottle(int32_t* ChosenBottleQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.selectFillBottle");
		
		AinteractiveWaterSinkBP_C_selectFillBottle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChosenBottleQuantity != nullptr)
			*ChosenBottleQuantity = params.ChosenBottleQuantity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.fillOneBottle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveWaterSinkBP_C::fillOneBottle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.fillOneBottle");
		
		AinteractiveWaterSinkBP_C_fillOneBottle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveWaterSinkBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.UserConstructionScript");
		
		AinteractiveWaterSinkBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AinteractiveWaterSinkBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveBeginPlay");
		
		AinteractiveWaterSinkBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinteractiveWaterSinkBP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveTick");
		
		AinteractiveWaterSinkBP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionHeld
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveWaterSinkBP_C::sinkActionHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionHeld");
		
		AinteractiveWaterSinkBP_C_sinkActionHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveWaterSinkBP_C::sinkActionRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionRelease");
		
		AinteractiveWaterSinkBP_C_sinkActionRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.showWaterFillDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveWaterSinkBP_C::showWaterFillDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.showWaterFillDialogue");
		
		AinteractiveWaterSinkBP_C_showWaterFillDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.hideWaterFillDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveWaterSinkBP_C::hideWaterFillDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.hideWaterFillDialogue");
		
		AinteractiveWaterSinkBP_C_hideWaterFillDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ExecuteUbergraph_interactiveWaterSinkBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinteractiveWaterSinkBP_C::ExecuteUbergraph_interactiveWaterSinkBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ExecuteUbergraph_interactiveWaterSinkBP");
		
		AinteractiveWaterSinkBP_C_ExecuteUbergraph_interactiveWaterSinkBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AinteractiveWaterSinkBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AinteractiveWaterSinkBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass interactiveWaterSinkBP.interactiveWaterSinkBP_C");
		return ptr;
	}

}


