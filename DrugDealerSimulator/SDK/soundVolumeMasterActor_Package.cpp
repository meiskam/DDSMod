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
	 * 		Name   -> Function soundVolumeMasterActor.soundVolumeMasterActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsoundVolumeMasterActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function soundVolumeMasterActor.soundVolumeMasterActor_C.UserConstructionScript");
		
		AsoundVolumeMasterActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function soundVolumeMasterActor.soundVolumeMasterActor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsoundVolumeMasterActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function soundVolumeMasterActor.soundVolumeMasterActor_C.ReceiveBeginPlay");
		
		AsoundVolumeMasterActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function soundVolumeMasterActor.soundVolumeMasterActor_C.ExecuteUbergraph_soundVolumeMasterActor
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsoundVolumeMasterActor_C::ExecuteUbergraph_soundVolumeMasterActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function soundVolumeMasterActor.soundVolumeMasterActor_C.ExecuteUbergraph_soundVolumeMasterActor");
		
		AsoundVolumeMasterActor_C_ExecuteUbergraph_soundVolumeMasterActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsoundVolumeMasterActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsoundVolumeMasterActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass soundVolumeMasterActor.soundVolumeMasterActor_C");
		return ptr;
	}

}


