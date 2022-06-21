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
	 * 		Name   -> Function ratDropSign.ratDropSign_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AratDropSign_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.UserConstructionScript");
		
		AratDropSign_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDropSign.ratDropSign_C.AnimLoop__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AratDropSign_C::AnimLoop__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.AnimLoop__FinishedFunc");
		
		AratDropSign_C_AnimLoop__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDropSign.ratDropSign_C.AnimLoop__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AratDropSign_C::AnimLoop__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.AnimLoop__UpdateFunc");
		
		AratDropSign_C_AnimLoop__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDropSign.ratDropSign_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AratDropSign_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.ReceiveBeginPlay");
		
		AratDropSign_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDropSign.ratDropSign_C.SetActivationState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AratDropSign_C::SetActivationState(bool active, bool Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.SetActivationState");
		
		AratDropSign_C_SetActivationState_Params params {};
		params.active = active;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDropSign.ratDropSign_C.startPlayAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AratDropSign_C::startPlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.startPlayAnim");
		
		AratDropSign_C_startPlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDropSign.ratDropSign_C.endPlayAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AratDropSign_C::endPlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.endPlayAnim");
		
		AratDropSign_C_endPlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ratDropSign.ratDropSign_C.ExecuteUbergraph_ratDropSign
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AratDropSign_C::ExecuteUbergraph_ratDropSign(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.ExecuteUbergraph_ratDropSign");
		
		AratDropSign_C_ExecuteUbergraph_ratDropSign_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AratDropSign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AratDropSign_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ratDropSign.ratDropSign_C");
		return ptr;
	}

}


