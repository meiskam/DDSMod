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
	 * 		Name   -> Function gangDeadDropBase.gangDeadDropBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AgangDeadDropBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.UserConstructionScript");
		
		AgangDeadDropBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangDeadDropBase.gangDeadDropBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AgangDeadDropBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.ReceiveBeginPlay");
		
		AgangDeadDropBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangDeadDropBase.gangDeadDropBase_C.clearDeadDrop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangDeadDropBase_C::clearDeadDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.clearDeadDrop");
		
		AgangDeadDropBase_C_clearDeadDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangDeadDropBase.gangDeadDropBase_C.checkEnabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangDeadDropBase_C::checkEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.checkEnabled");
		
		AgangDeadDropBase_C_checkEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangDeadDropBase.gangDeadDropBase_C.ExecuteUbergraph_gangDeadDropBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgangDeadDropBase_C::ExecuteUbergraph_gangDeadDropBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.ExecuteUbergraph_gangDeadDropBase");
		
		AgangDeadDropBase_C_ExecuteUbergraph_gangDeadDropBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AgangDeadDropBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AgangDeadDropBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass gangDeadDropBase.gangDeadDropBase_C");
		return ptr;
	}

}


