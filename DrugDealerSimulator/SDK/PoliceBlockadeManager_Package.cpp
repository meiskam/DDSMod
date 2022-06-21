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
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetBlockadeLifetime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              LifeTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeManager_C::GetBlockadeLifetime(float* LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetBlockadeLifetime");
		
		APoliceBlockadeManager_C_GetBlockadeLifetime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LifeTime != nullptr)
			*LifeTime = params.LifeTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetSpawnChance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              SpawnChance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeManager_C::GetSpawnChance(float* SpawnChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetSpawnChance");
		
		APoliceBlockadeManager_C_GetSpawnChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnChance != nullptr)
			*SpawnChance = params.SpawnChance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.chooseSpawnPoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APoliceBlockadeArea_C*                       OutArea                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeManager_C::chooseSpawnPoint(class APoliceBlockadeArea_C** OutArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.chooseSpawnPoint");
		
		APoliceBlockadeManager_C_chooseSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArea != nullptr)
			*OutArea = params.OutArea;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.RegisterPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APoliceBlockadeArea_C*                       Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeManager_C::RegisterPlayer(class APoliceBlockadeArea_C* Area)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.RegisterPlayer");
		
		APoliceBlockadeManager_C_RegisterPlayer_Params params {};
		params.Area = Area;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.UserConstructionScript");
		
		APoliceBlockadeManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APoliceBlockadeManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveBeginPlay");
		
		APoliceBlockadeManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveTick");
		
		APoliceBlockadeManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.ForceSpawnBlockade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeManager_C::ForceSpawnBlockade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ForceSpawnBlockade");
		
		APoliceBlockadeManager_C_ForceSpawnBlockade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.CheckRefs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APoliceBlockadeManager_C::CheckRefs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.CheckRefs");
		
		APoliceBlockadeManager_C_CheckRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PoliceBlockadeManager.PoliceBlockadeManager_C.ExecuteUbergraph_PoliceBlockadeManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceBlockadeManager_C::ExecuteUbergraph_PoliceBlockadeManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceBlockadeManager.PoliceBlockadeManager_C.ExecuteUbergraph_PoliceBlockadeManager");
		
		APoliceBlockadeManager_C_ExecuteUbergraph_PoliceBlockadeManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APoliceBlockadeManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceBlockadeManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceBlockadeManager.PoliceBlockadeManager_C");
		return ptr;
	}

}


