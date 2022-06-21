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
	 * 		Name   -> Function PM_PatrolPartner.PM_PatrolPartner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolPartner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.UserConstructionScript");
		
		APM_PatrolPartner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolPartner.PM_PatrolPartner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APM_PatrolPartner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.ReceiveBeginPlay");
		
		APM_PatrolPartner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolPartner.PM_PatrolPartner_C.SetupPartner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APM_PatrolLead_C*                            LeadRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APM_PatrolPartner_C::SetupPartner(class APM_PatrolLead_C* LeadRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.SetupPartner");
		
		APM_PatrolPartner_C_SetupPartner_Params params {};
		params.LeadRef = LeadRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolPartner.PM_PatrolPartner_C.EngageSuspect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolPartner_C::EngageSuspect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.EngageSuspect");
		
		APM_PatrolPartner_C_EngageSuspect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolPartner.PM_PatrolPartner_C.SyncWithPartner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APM_PatrolPartner_C::SyncWithPartner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.SyncWithPartner");
		
		APM_PatrolPartner_C_SyncWithPartner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolPartner.PM_PatrolPartner_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void APM_PatrolPartner_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		APM_PatrolPartner_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PatrolPartner.PM_PatrolPartner_C.ExecuteUbergraph_PM_PatrolPartner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APM_PatrolPartner_C::ExecuteUbergraph_PM_PatrolPartner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.ExecuteUbergraph_PM_PatrolPartner");
		
		APM_PatrolPartner_C_ExecuteUbergraph_PM_PatrolPartner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APM_PatrolPartner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APM_PatrolPartner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PM_PatrolPartner.PM_PatrolPartner_C");
		return ptr;
	}

}


