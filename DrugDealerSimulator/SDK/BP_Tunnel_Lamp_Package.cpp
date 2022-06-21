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
	 * 		Name   -> Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Tunnel_Lamp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.UserConstructionScript");
		
		ABP_Tunnel_Lamp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Tunnel_Lamp_C::blinkingAnim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__FinishedFunc");
		
		ABP_Tunnel_Lamp_C_blinkingAnim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Tunnel_Lamp_C::blinkingAnim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__UpdateFunc");
		
		ABP_Tunnel_Lamp_C_blinkingAnim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Tunnel_Lamp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ReceiveBeginPlay");
		
		ABP_Tunnel_Lamp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ExecuteUbergraph_BP_Tunnel_Lamp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tunnel_Lamp_C::ExecuteUbergraph_BP_Tunnel_Lamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ExecuteUbergraph_BP_Tunnel_Lamp");
		
		ABP_Tunnel_Lamp_C_ExecuteUbergraph_BP_Tunnel_Lamp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Tunnel_Lamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Tunnel_Lamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tunnel_Lamp.BP_Tunnel_Lamp_C");
		return ptr;
	}

}


