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
	 * 		Name   -> Function SectorCWicket.SectorCWicket_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASectorCWicket_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.UserConstructionScript");
		
		ASectorCWicket_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorCWicket.SectorCWicket_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASectorCWicket_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.LongRadiusChanged");
		
		ASectorCWicket_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorCWicket.SectorCWicket_C.eventDoorActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASectorCWicket_C::eventDoorActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.eventDoorActivated");
		
		ASectorCWicket_C_eventDoorActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorCWicket.SectorCWicket_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASectorCWicket_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.ShortRadiusChanged");
		
		ASectorCWicket_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SectorCWicket.SectorCWicket_C.ExecuteUbergraph_SectorCWicket
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASectorCWicket_C::ExecuteUbergraph_SectorCWicket(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SectorCWicket.SectorCWicket_C.ExecuteUbergraph_SectorCWicket");
		
		ASectorCWicket_C_ExecuteUbergraph_SectorCWicket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASectorCWicket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASectorCWicket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SectorCWicket.SectorCWicket_C");
		return ptr;
	}

}


