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
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.ClearBlockade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::ClearBlockade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ClearBlockade");
		
		APoliceBlockadeArea_C_ClearBlockade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.SpawnBlockade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::SpawnBlockade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.SpawnBlockade");
		
		APoliceBlockadeArea_C_SpawnBlockade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanDespawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceBlockadeArea_C::CanDespawn(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanDespawn");
		
		APoliceBlockadeArea_C_CanDespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanSpawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceBlockadeArea_C::CanSpawn(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanSpawn");
		
		APoliceBlockadeArea_C_CanSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.RegisterPlayerPass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::RegisterPlayerPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.RegisterPlayerPass");
		
		APoliceBlockadeArea_C_RegisterPlayerPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.UserConstructionScript");
		
		APoliceBlockadeArea_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveBeginPlay");
		
		APoliceBlockadeArea_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeArea_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveTick");
		
		APoliceBlockadeArea_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APoliceBlockadeArea_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		APoliceBlockadeArea_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.TrySpawnBlockade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::TrySpawnBlockade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.TrySpawnBlockade");
		
		APoliceBlockadeArea_C_TrySpawnBlockade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.TryDespawnBlockade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::TryDespawnBlockade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.TryDespawnBlockade");
		
		APoliceBlockadeArea_C_TryDespawnBlockade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::ForceSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceSpawn");
		
		APoliceBlockadeArea_C_ForceSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceClear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeArea_C::ForceClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceClear");
		
		APoliceBlockadeArea_C_ForceClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeArea.PoliceBlockadeArea_C.ExecuteUbergraph_PoliceBlockadeArea
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeArea_C::ExecuteUbergraph_PoliceBlockadeArea(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeArea.PoliceBlockadeArea_C.ExecuteUbergraph_PoliceBlockadeArea");
		
		APoliceBlockadeArea_C_ExecuteUbergraph_PoliceBlockadeArea_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APoliceBlockadeArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceBlockadeArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceBlockadeArea.PoliceBlockadeArea_C");
		return ptr;
	}

}


