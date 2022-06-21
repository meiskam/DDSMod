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
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.GetPatrolSpawnChances
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Timeout                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChanceLow                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChanceHigh                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApolicePatrolArea_C::GetPatrolSpawnChances(float* Timeout, float* ChanceLow, float* ChanceHigh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.GetPatrolSpawnChances");
		
		ApolicePatrolArea_C_GetPatrolSpawnChances_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Timeout != nullptr)
			*Timeout = params.Timeout;
		if (ChanceLow != nullptr)
			*ChanceLow = params.ChanceLow;
		if (ChanceHigh != nullptr)
			*ChanceHigh = params.ChanceHigh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.SpawnPatrol
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ApolicePatrolPoint_C*                        spawnPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApolicePatrolArea_C::SpawnPatrol(class ApolicePatrolPoint_C* spawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.SpawnPatrol");
		
		ApolicePatrolArea_C_SpawnPatrol_Params params {};
		params.spawnPoint = spawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.chooseSpawnPoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ApolicePatrolPoint_C*                        OutPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Succeded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        FailID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApolicePatrolArea_C::chooseSpawnPoint(class ApolicePatrolPoint_C** OutPoint, bool* Succeded, class FName* FailID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.chooseSpawnPoint");
		
		ApolicePatrolArea_C_chooseSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
		if (Succeded != nullptr)
			*Succeded = params.Succeded;
		if (FailID != nullptr)
			*FailID = params.FailID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.getUnreachedPoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ApolicePatrolPoint_C*                        Patrol_Point                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApolicePatrolArea_C::getUnreachedPoint(class ApolicePatrolPoint_C** Patrol_Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.getUnreachedPoint");
		
		ApolicePatrolArea_C_getUnreachedPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Patrol_Point != nullptr)
			*Patrol_Point = params.Patrol_Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApolicePatrolArea_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.UserConstructionScript");
		
		ApolicePatrolArea_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ApolicePatrolArea_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ShortRadiusChanged");
		
		ApolicePatrolArea_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApolicePatrolArea_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay");
		
		ApolicePatrolArea_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.resetPatrolArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApolicePatrolArea_C::resetPatrolArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.resetPatrolArea");
		
		ApolicePatrolArea_C_resetPatrolArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.restartArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApolicePatrolArea_C::restartArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.restartArea");
		
		ApolicePatrolArea_C_restartArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ApolicePatrolArea_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.LongRadiusChanged");
		
		ApolicePatrolArea_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.ResetSpawnGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApolicePatrolArea_C::ResetSpawnGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ResetSpawnGate");
		
		ApolicePatrolArea_C_ResetSpawnGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApolicePatrolArea_C::ExecuteUbergraph_policePatrolArea(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea");
		
		ApolicePatrolArea_C_ExecuteUbergraph_policePatrolArea_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApolicePatrolArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApolicePatrolArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass policePatrolArea.policePatrolArea_C");
		return ptr;
	}

}


