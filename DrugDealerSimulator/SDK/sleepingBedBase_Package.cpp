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
	 * 		Name   -> Function sleepingBedBase.sleepingBedBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AsleepingBedBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.UserConstructionScript");
		
		AsleepingBedBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sleepingBedBase.sleepingBedBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsleepingBedBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.ReceiveBeginPlay");
		
		AsleepingBedBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sleepingBedBase.sleepingBedBase_C.engageSleepMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsleepingBedBase_C::engageSleepMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.engageSleepMode");
		
		AsleepingBedBase_C_engageSleepMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sleepingBedBase.sleepingBedBase_C.sleepEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsleepingBedBase_C::sleepEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.sleepEnd");
		
		AsleepingBedBase_C_sleepEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sleepingBedBase.sleepingBedBase_C.ExecuteUbergraph_sleepingBedBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsleepingBedBase_C::ExecuteUbergraph_sleepingBedBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.ExecuteUbergraph_sleepingBedBase");
		
		AsleepingBedBase_C_ExecuteUbergraph_sleepingBedBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsleepingBedBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsleepingBedBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sleepingBedBase.sleepingBedBase_C");
		return ptr;
	}

}


