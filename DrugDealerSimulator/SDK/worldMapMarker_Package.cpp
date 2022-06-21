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
	 * 		Name   -> Function worldMapMarker.worldMapMarker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworldMapMarker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.UserConstructionScript");
		
		AworldMapMarker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AworldMapMarker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay");
		
		AworldMapMarker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldMapMarker.worldMapMarker_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EmapMarkerCategories                               Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ToolTip                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               dealer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TaskID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldMapMarker_C::Setup(EmapMarkerCategories Category, const class FText& Name, const class FText& ToolTip, bool dealer, int32_t TaskID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.Setup");
		
		AworldMapMarker_C_Setup_Params params {};
		params.Category = Category;
		params.Name = Name;
		params.ToolTip = ToolTip;
		params.dealer = dealer;
		params.TaskID = TaskID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldMapMarker.worldMapMarker_C.checkTaskEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldMapMarker_C::checkTaskEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.checkTaskEnded");
		
		AworldMapMarker_C_checkTaskEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldMapMarker.worldMapMarker_C.reinitialise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldMapMarker_C::reinitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.reinitialise");
		
		AworldMapMarker_C_reinitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldMapMarker.worldMapMarker_C.recalcWaitTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldMapMarker_C::recalcWaitTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.recalcWaitTime");
		
		AworldMapMarker_C_recalcWaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldMapMarker_C::ExecuteUbergraph_worldMapMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker");
		
		AworldMapMarker_C_ExecuteUbergraph_worldMapMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AworldMapMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AworldMapMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass worldMapMarker.worldMapMarker_C");
		return ptr;
	}

}


