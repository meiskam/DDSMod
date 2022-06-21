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
	 * 		Name   -> Function worldCustomMarker.worldCustomMarker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworldCustomMarker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldCustomMarker.worldCustomMarker_C.UserConstructionScript");
		
		AworldCustomMarker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldCustomMarker.worldCustomMarker_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AworldCustomMarker_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldCustomMarker.worldCustomMarker_C.ReceiveDestroyed");
		
		AworldCustomMarker_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldCustomMarker.worldCustomMarker_C.ExecuteUbergraph_worldCustomMarker
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldCustomMarker_C::ExecuteUbergraph_worldCustomMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldCustomMarker.worldCustomMarker_C.ExecuteUbergraph_worldCustomMarker");
		
		AworldCustomMarker_C_ExecuteUbergraph_worldCustomMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AworldCustomMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AworldCustomMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass worldCustomMarker.worldCustomMarker_C");
		return ptr;
	}

}


