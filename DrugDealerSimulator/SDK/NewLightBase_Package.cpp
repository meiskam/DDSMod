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
	 * 		Name   -> Function NewLightBase.NewLightBase_C.HasPower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Power                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANewLightBase_C::HasPower(bool* Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.HasPower");
		
		ANewLightBase_C_HasPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Power != nullptr)
			*Power = params.Power;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ANewLightBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.UserConstructionScript");
		
		ANewLightBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANewLightBase_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.LongRadiusChanged");
		
		ANewLightBase_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ANewLightBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.ReceiveBeginPlay");
		
		ANewLightBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.LightStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LightVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CastShadows                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANewLightBase_C::LightStateChanged(bool LightVisible, bool CastShadows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.LightStateChanged");
		
		ANewLightBase_C_LightStateChanged_Params params {};
		params.LightVisible = LightVisible;
		params.CastShadows = CastShadows;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANewLightBase_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.ShortRadiusChanged");
		
		ANewLightBase_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.UpdateDaytimeCon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AdayTimeControler_C*                         dayTimeCon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANewLightBase_C::UpdateDaytimeCon(class AdayTimeControler_C* dayTimeCon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.UpdateDaytimeCon");
		
		ANewLightBase_C_UpdateDaytimeCon_Params params {};
		params.dayTimeCon = dayTimeCon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.Switch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TurnedOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANewLightBase_C::Switch(bool TurnedOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.Switch");
		
		ANewLightBase_C_Switch_Params params {};
		params.TurnedOn = TurnedOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.RefreshLantern
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANewLightBase_C::RefreshLantern()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.RefreshLantern");
		
		ANewLightBase_C_RefreshLantern_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.PowerChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANewLightBase_C::PowerChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.PowerChange");
		
		ANewLightBase_C_PowerChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.updatePlayerDistance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANewLightBase_C::updatePlayerDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.updatePlayerDistance");
		
		ANewLightBase_C_updatePlayerDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.openOutLightRange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANewLightBase_C::openOutLightRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.openOutLightRange");
		
		ANewLightBase_C_openOutLightRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function NewLightBase.NewLightBase_C.ExecuteUbergraph_NewLightBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANewLightBase_C::ExecuteUbergraph_NewLightBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewLightBase.NewLightBase_C.ExecuteUbergraph_NewLightBase");
		
		ANewLightBase_C_ExecuteUbergraph_NewLightBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ANewLightBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANewLightBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NewLightBase.NewLightBase_C");
		return ptr;
	}

}


