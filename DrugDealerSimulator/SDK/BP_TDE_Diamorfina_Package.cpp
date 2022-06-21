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
	 * 		Name   -> Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TDE_Diamorfina_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.UserConstructionScript");
		
		ABP_TDE_Diamorfina_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.StartEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_TDE_Diamorfina_C::StartEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.StartEffect");
		
		ABP_TDE_Diamorfina_C_StartEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.EffectTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TDE_Diamorfina_C::EffectTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.EffectTick");
		
		ABP_TDE_Diamorfina_C_EffectTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.EndEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_TDE_Diamorfina_C::EndEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.EndEffect");
		
		ABP_TDE_Diamorfina_C_EndEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.ExecuteUbergraph_BP_TDE_Diamorfina
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TDE_Diamorfina_C::ExecuteUbergraph_BP_TDE_Diamorfina(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TDE_Diamorfina.BP_TDE_Diamorfina_C.ExecuteUbergraph_BP_TDE_Diamorfina");
		
		ABP_TDE_Diamorfina_C_ExecuteUbergraph_BP_TDE_Diamorfina_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_TDE_Diamorfina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TDE_Diamorfina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TDE_Diamorfina.BP_TDE_Diamorfina_C");
		return ptr;
	}

}


