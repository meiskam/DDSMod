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
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TDE_Ergolina_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.UserConstructionScript");
		
		ABP_TDE_Ergolina_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TDE_Ergolina_C::fadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__FinishedFunc");
		
		ABP_TDE_Ergolina_C_fadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TDE_Ergolina_C::fadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.fadeOut__UpdateFunc");
		
		ABP_TDE_Ergolina_C_fadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.StartEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_TDE_Ergolina_C::StartEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.StartEffect");
		
		ABP_TDE_Ergolina_C_StartEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EffectTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TDE_Ergolina_C::EffectTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EffectTick");
		
		ABP_TDE_Ergolina_C_EffectTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EndEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_TDE_Ergolina_C::EndEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.EndEffect");
		
		ABP_TDE_Ergolina_C_EndEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.retryResetEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TDE_Ergolina_C::retryResetEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.retryResetEffect");
		
		ABP_TDE_Ergolina_C_retryResetEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.ExecuteUbergraph_BP_TDE_Ergolina
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TDE_Ergolina_C::ExecuteUbergraph_BP_TDE_Ergolina(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Ergolina.BP_TDE_Ergolina_C.ExecuteUbergraph_BP_TDE_Ergolina");
		
		ABP_TDE_Ergolina_C_ExecuteUbergraph_BP_TDE_Ergolina_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_TDE_Ergolina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TDE_Ergolina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TDE_Ergolina.BP_TDE_Ergolina_C");
		return ptr;
	}

}


