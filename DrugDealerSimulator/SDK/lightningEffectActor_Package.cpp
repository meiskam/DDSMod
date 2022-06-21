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
	 * 		Name   -> Function lightningEffectActor.lightningEffectActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlightningEffectActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.UserConstructionScript");
		
		AlightningEffectActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightningEffectActor.lightningEffectActor_C.lightningLight__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AlightningEffectActor_C::lightningLight__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.lightningLight__FinishedFunc");
		
		AlightningEffectActor_C_lightningLight__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightningEffectActor.lightningEffectActor_C.lightningLight__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AlightningEffectActor_C::lightningLight__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.lightningLight__UpdateFunc");
		
		AlightningEffectActor_C_lightningLight__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightningEffectActor.lightningEffectActor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AlightningEffectActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.ReceiveBeginPlay");
		
		AlightningEffectActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightningEffectActor.lightningEffectActor_C.lightningSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlightningEffectActor_C::lightningSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.lightningSound");
		
		AlightningEffectActor_C_lightningSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightningEffectActor.lightningEffectActor_C.InitiateLightning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              stormIntensity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlightningEffectActor_C::InitiateLightning(float stormIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.InitiateLightning");
		
		AlightningEffectActor_C_InitiateLightning_Params params {};
		params.stormIntensity = stormIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lightningEffectActor.lightningEffectActor_C.ExecuteUbergraph_lightningEffectActor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlightningEffectActor_C::ExecuteUbergraph_lightningEffectActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.ExecuteUbergraph_lightningEffectActor");
		
		AlightningEffectActor_C_ExecuteUbergraph_lightningEffectActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlightningEffectActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlightningEffectActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass lightningEffectActor.lightningEffectActor_C");
		return ptr;
	}

}


