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
	 * 		Name   -> Function BP_P_CarOpen.BP_P_CarOpen_C.RandomGenerator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_P_CarOpen_C::RandomGenerator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.RandomGenerator");
		
		ABP_P_CarOpen_C_RandomGenerator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_P_CarOpen.BP_P_CarOpen_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_P_CarOpen_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.UserConstructionScript");
		
		ABP_P_CarOpen_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_P_CarOpen.BP_P_CarOpen_C.GenerateCar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_P_CarOpen_C::GenerateCar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.GenerateCar");
		
		ABP_P_CarOpen_C_GenerateCar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_P_CarOpen.BP_P_CarOpen_C.ExecuteUbergraph_BP_P_CarOpen
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_P_CarOpen_C::ExecuteUbergraph_BP_P_CarOpen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P_CarOpen.BP_P_CarOpen_C.ExecuteUbergraph_BP_P_CarOpen");
		
		ABP_P_CarOpen_C_ExecuteUbergraph_BP_P_CarOpen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_P_CarOpen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_P_CarOpen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_P_CarOpen.BP_P_CarOpen_C");
		return ptr;
	}

}


