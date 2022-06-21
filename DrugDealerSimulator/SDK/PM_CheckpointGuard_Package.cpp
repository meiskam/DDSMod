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
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkBackpackForIllegals
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AbackpackBase_C*                             backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APM_CheckpointGuard_C::checkBackpackForIllegals(class AbackpackBase_C* backpack, bool* found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkBackpackForIllegals");
		
		APM_CheckpointGuard_C_checkBackpackForIllegals_Params params {};
		params.backpack = backpack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (found != nullptr)
			*found = params.found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.UserConstructionScript");
		
		APM_CheckpointGuard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveBeginPlay");
		
		APM_CheckpointGuard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APM_CheckpointGuard_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveTick");
		
		APM_CheckpointGuard_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkTrespass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::checkTrespass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkTrespass");
		
		APM_CheckpointGuard_C_checkTrespass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APM_CheckpointGuard_C::BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		APM_CheckpointGuard_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.ControlEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::ControlEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ControlEnded");
		
		APM_CheckpointGuard_C_ControlEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.breakControl
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::breakControl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.breakControl");
		
		APM_CheckpointGuard_C_breakControl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.EngageSuspect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::EngageSuspect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.EngageSuspect");
		
		APM_CheckpointGuard_C_EngageSuspect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.setSuicideTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::setSuicideTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.setSuicideTimer");
		
		APM_CheckpointGuard_C_setSuicideTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.trySuicide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::trySuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.trySuicide");
		
		APM_CheckpointGuard_C_trySuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.overrideSearch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::overrideSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.overrideSearch");
		
		APM_CheckpointGuard_C_overrideSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void APM_CheckpointGuard_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveDestroyed");
		
		APM_CheckpointGuard_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_CheckpointGuard.PM_CheckpointGuard_C.ExecuteUbergraph_PM_CheckpointGuard
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APM_CheckpointGuard_C::ExecuteUbergraph_PM_CheckpointGuard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ExecuteUbergraph_PM_CheckpointGuard");
		
		APM_CheckpointGuard_C_ExecuteUbergraph_PM_CheckpointGuard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APM_CheckpointGuard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APM_CheckpointGuard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PM_CheckpointGuard.PM_CheckpointGuard_C");
		return ptr;
	}

}


