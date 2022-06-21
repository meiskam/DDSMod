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
	 * 		Name   -> Function doorBreacher.doorBreacher_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdoorBreacher_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.UserConstructionScript");
		
		AdoorBreacher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.breachAnimation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AdoorBreacher_C::breachAnimation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.breachAnimation__FinishedFunc");
		
		AdoorBreacher_C_breachAnimation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.breachAnimation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AdoorBreacher_C::breachAnimation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.breachAnimation__UpdateFunc");
		
		AdoorBreacher_C_breachAnimation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.breachAnimation__hitMoment__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AdoorBreacher_C::breachAnimation__hitMoment__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.breachAnimation__hitMoment__EventFunc");
		
		AdoorBreacher_C_breachAnimation__hitMoment__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AdoorBreacher_C::InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.InpActEvt_Escape_K2Node_InputKeyEvent_2");
		
		AdoorBreacher_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.InpActEvt_F10_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AdoorBreacher_C::InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.InpActEvt_F10_K2Node_InputKeyEvent_1");
		
		AdoorBreacher_C_InpActEvt_F10_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.InpActEvt_JumpObstacle_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AdoorBreacher_C::InpActEvt_JumpObstacle_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.InpActEvt_JumpObstacle_K2Node_InputActionEvent_1");
		
		AdoorBreacher_C_InpActEvt_JumpObstacle_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdoorBreacher_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.ReceivePossessed");
		
		AdoorBreacher_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdoorBreacher_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.ReceiveUnpossessed");
		
		AdoorBreacher_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.breachHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorBreacher_C::breachHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.breachHit");
		
		AdoorBreacher_C_breachHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.endBreach
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorBreacher_C::endBreach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.endBreach");
		
		AdoorBreacher_C_endBreach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.rushBreach
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdoorBreacher_C::rushBreach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.rushBreach");
		
		AdoorBreacher_C_rushBreach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdoorBreacher_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.ReceiveTick");
		
		AdoorBreacher_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function doorBreacher.doorBreacher_C.ExecuteUbergraph_doorBreacher
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdoorBreacher_C::ExecuteUbergraph_doorBreacher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function doorBreacher.doorBreacher_C.ExecuteUbergraph_doorBreacher");
		
		AdoorBreacher_C_ExecuteUbergraph_doorBreacher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdoorBreacher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdoorBreacher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass doorBreacher.doorBreacher_C");
		return ptr;
	}

}


