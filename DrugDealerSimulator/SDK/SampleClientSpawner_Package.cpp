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
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.TrySpawnAreaClient
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AsprayAreaGizmo_C*                           AreaGizmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AreaString                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASampleClientSpawner_C::TrySpawnAreaClient(class AsprayAreaGizmo_C* AreaGizmo, const class FString& AreaString, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.TrySpawnAreaClient");
		
		ASampleClientSpawner_C_TrySpawnAreaClient_Params params {};
		params.AreaGizmo = AreaGizmo;
		params.AreaString = AreaString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.HasAreaClient
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               HasClient                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASampleClientSpawner_C::HasAreaClient(const class FString& Area, bool* HasClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.HasAreaClient");
		
		ASampleClientSpawner_C_HasAreaClient_Params params {};
		params.Area = Area;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasClient != nullptr)
			*HasClient = params.HasClient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.UnregisterClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               DirectClear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASampleClientSpawner_C::UnregisterClient(const class FString& Area, bool DirectClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.UnregisterClient");
		
		ASampleClientSpawner_C_UnregisterClient_Params params {};
		params.Area = Area;
		params.DirectClear = DirectClear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.RegisterClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OnArea                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ASampleClientSpawner_C::RegisterClient(const class FString& OnArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.RegisterClient");
		
		ASampleClientSpawner_C_RegisterClient_Params params {};
		params.OnArea = OnArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASampleClientSpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.UserConstructionScript");
		
		ASampleClientSpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASampleClientSpawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.ReceiveBeginPlay");
		
		ASampleClientSpawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.CheckSampleClients
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASampleClientSpawner_C::CheckSampleClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.CheckSampleClients");
		
		ASampleClientSpawner_C_CheckSampleClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.BreakAreaLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASampleClientSpawner_C::BreakAreaLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.BreakAreaLoop");
		
		ASampleClientSpawner_C_BreakAreaLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.CleanAreas
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASampleClientSpawner_C::CleanAreas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.CleanAreas");
		
		ASampleClientSpawner_C_CleanAreas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SampleClientSpawner.SampleClientSpawner_C.ExecuteUbergraph_SampleClientSpawner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASampleClientSpawner_C::ExecuteUbergraph_SampleClientSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SampleClientSpawner.SampleClientSpawner_C.ExecuteUbergraph_SampleClientSpawner");
		
		ASampleClientSpawner_C_ExecuteUbergraph_SampleClientSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASampleClientSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASampleClientSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SampleClientSpawner.SampleClientSpawner_C");
		return ptr;
	}

}


