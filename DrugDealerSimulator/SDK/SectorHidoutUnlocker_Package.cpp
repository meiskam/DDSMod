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
	 * 		Name   -> Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASectorHidoutUnlocker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.UserConstructionScript");
		
		ASectorHidoutUnlocker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.RentHideout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASectorHidoutUnlocker_C::RentHideout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.RentHideout");
		
		ASectorHidoutUnlocker_C_RentHideout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.ExecuteUbergraph_SectorHidoutUnlocker
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASectorHidoutUnlocker_C::ExecuteUbergraph_SectorHidoutUnlocker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorHidoutUnlocker.SectorHidoutUnlocker_C.ExecuteUbergraph_SectorHidoutUnlocker");
		
		ASectorHidoutUnlocker_C_ExecuteUbergraph_SectorHidoutUnlocker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASectorHidoutUnlocker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASectorHidoutUnlocker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SectorHidoutUnlocker.SectorHidoutUnlocker_C");
		return ptr;
	}

}


