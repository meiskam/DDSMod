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
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.checkDayTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::checkDayTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.checkDayTime");
		
		AenviroLightBase_C_checkDayTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.UserConstructionScript");
		
		AenviroLightBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AenviroLightBase_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.LongRadiusChanged");
		
		AenviroLightBase_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AenviroLightBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.ReceiveBeginPlay");
		
		AenviroLightBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.turnLightOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::turnLightOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.turnLightOn");
		
		AenviroLightBase_C_turnLightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.turnLightOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::turnLightOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.turnLightOff");
		
		AenviroLightBase_C_turnLightOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.farPlayerCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::farPlayerCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.farPlayerCheck");
		
		AenviroLightBase_C_farPlayerCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.closeDistanceCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::closeDistanceCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.closeDistanceCheck");
		
		AenviroLightBase_C_closeDistanceCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.updateLightAffectPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::updateLightAffectPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.updateLightAffectPlayer");
		
		AenviroLightBase_C_updateLightAffectPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.openOutLightRange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::openOutLightRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.openOutLightRange");
		
		AenviroLightBase_C_openOutLightRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.retryGather
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AenviroLightBase_C::retryGather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.retryGather");
		
		AenviroLightBase_C_retryGather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AenviroLightBase_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.ShortRadiusChanged");
		
		AenviroLightBase_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.ToggleShadows
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               on                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AenviroLightBase_C::ToggleShadows(bool on)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.ToggleShadows");
		
		AenviroLightBase_C_ToggleShadows_Params params {};
		params.on = on;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function enviroLightBase.enviroLightBase_C.ExecuteUbergraph_enviroLightBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AenviroLightBase_C::ExecuteUbergraph_enviroLightBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.ExecuteUbergraph_enviroLightBase");
		
		AenviroLightBase_C_ExecuteUbergraph_enviroLightBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AenviroLightBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AenviroLightBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass enviroLightBase.enviroLightBase_C");
		return ptr;
	}

}


