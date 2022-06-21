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
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.UserConstructionScript");
		
		APM_PatrolLead_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APM_PatrolLead_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ShortRadiusChanged");
		
		APM_PatrolLead_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APM_PatrolLead_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ReceiveBeginPlay");
		
		APM_PatrolLead_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APM_PatrolLead_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ReceiveTick");
		
		APM_PatrolLead_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.EngageSuspect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::EngageSuspect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.EngageSuspect");
		
		APM_PatrolLead_C_EngageSuspect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APM_PatrolLead_C::BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		APM_PatrolLead_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.ControlEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::ControlEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ControlEnded");
		
		APM_PatrolLead_C_ControlEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.breakControl
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::breakControl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.breakControl");
		
		APM_PatrolLead_C_breakControl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.overrideStartSearch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::overrideStartSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.overrideStartSearch");
		
		APM_PatrolLead_C_overrideStartSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.checkForPartner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::checkForPartner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.checkForPartner");
		
		APM_PatrolLead_C_checkForPartner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.unlockRespawnPartner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::unlockRespawnPartner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.unlockRespawnPartner");
		
		APM_PatrolLead_C_unlockRespawnPartner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APM_PatrolLead_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.LongRadiusChanged");
		
		APM_PatrolLead_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void APM_PatrolLead_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		APM_PatrolLead_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.WipePatrol
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::WipePatrol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.WipePatrol");
		
		APM_PatrolLead_C_WipePatrol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.RetryWipe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolLead_C::RetryWipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.RetryWipe");
		
		APM_PatrolLead_C_RetryWipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolLead.PM_PatrolLead_C.ExecuteUbergraph_PM_PatrolLead
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APM_PatrolLead_C::ExecuteUbergraph_PM_PatrolLead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ExecuteUbergraph_PM_PatrolLead");
		
		APM_PatrolLead_C_ExecuteUbergraph_PM_PatrolLead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APM_PatrolLead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APM_PatrolLead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PM_PatrolLead.PM_PatrolLead_C");
		return ptr;
	}

}


