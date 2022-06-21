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
	 * 		Name   -> Function sewageTeleportPoint.sewageTeleportPoint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsewageTeleportPoint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.UserConstructionScript");
		
		AsewageTeleportPoint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewageTeleportPoint.sewageTeleportPoint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsewageTeleportPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.ReceiveBeginPlay");
		
		AsewageTeleportPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewageTeleportPoint.sewageTeleportPoint_C.CheckAvailable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsewageTeleportPoint_C::CheckAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.CheckAvailable");
		
		AsewageTeleportPoint_C_CheckAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewageTeleportPoint.sewageTeleportPoint_C.activateTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsewageTeleportPoint_C::activateTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.activateTeleport");
		
		AsewageTeleportPoint_C_activateTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewageTeleportPoint.sewageTeleportPoint_C.InformTunnelPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsewageTeleportPoint_C::InformTunnelPlayer(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.InformTunnelPlayer");
		
		AsewageTeleportPoint_C_InformTunnelPlayer_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewageTeleportPoint.sewageTeleportPoint_C.ExecuteUbergraph_sewageTeleportPoint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsewageTeleportPoint_C::ExecuteUbergraph_sewageTeleportPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.ExecuteUbergraph_sewageTeleportPoint");
		
		AsewageTeleportPoint_C_ExecuteUbergraph_sewageTeleportPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsewageTeleportPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsewageTeleportPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sewageTeleportPoint.sewageTeleportPoint_C");
		return ptr;
	}

}


