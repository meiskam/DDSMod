﻿/**
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
	 * 		Name   -> Function furnitureDoorFixer.furnitureDoorFixer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AfurnitureDoorFixer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.UserConstructionScript");
		
		AfurnitureDoorFixer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDoorFixer.furnitureDoorFixer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AfurnitureDoorFixer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.ReceiveBeginPlay");
		
		AfurnitureDoorFixer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDoorFixer.furnitureDoorFixer_C.testDoorOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AfurnitureDoorFixer_C::testDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.testDoorOpen");
		
		AfurnitureDoorFixer_C_testDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDoorFixer.furnitureDoorFixer_C.ExecuteUbergraph_furnitureDoorFixer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AfurnitureDoorFixer_C::ExecuteUbergraph_furnitureDoorFixer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.ExecuteUbergraph_furnitureDoorFixer");
		
		AfurnitureDoorFixer_C_ExecuteUbergraph_furnitureDoorFixer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AfurnitureDoorFixer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AfurnitureDoorFixer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass furnitureDoorFixer.furnitureDoorFixer_C");
		return ptr;
	}

}


