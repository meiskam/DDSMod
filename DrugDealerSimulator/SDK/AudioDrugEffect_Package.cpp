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
	 * 		Name   -> Function AudioDrugEffect.AudioDrugEffect_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAudioDrugEffect_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.UserConstructionScript");
		
		AAudioDrugEffect_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AudioDrugEffect.AudioDrugEffect_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAudioDrugEffect_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.ReceiveBeginPlay");
		
		AAudioDrugEffect_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AudioDrugEffect.AudioDrugEffect_C.EffectTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAudioDrugEffect_C::EffectTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.EffectTick");
		
		AAudioDrugEffect_C_EffectTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AudioDrugEffect.AudioDrugEffect_C.StartEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAudioDrugEffect_C::StartEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.StartEffect");
		
		AAudioDrugEffect_C_StartEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AudioDrugEffect.AudioDrugEffect_C.updateBinauralState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAudioDrugEffect_C::updateBinauralState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.updateBinauralState");
		
		AAudioDrugEffect_C_updateBinauralState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AudioDrugEffect.AudioDrugEffect_C.ExecuteUbergraph_AudioDrugEffect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAudioDrugEffect_C::ExecuteUbergraph_AudioDrugEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.ExecuteUbergraph_AudioDrugEffect");
		
		AAudioDrugEffect_C_ExecuteUbergraph_AudioDrugEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAudioDrugEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAudioDrugEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AudioDrugEffect.AudioDrugEffect_C");
		return ptr;
	}

}


