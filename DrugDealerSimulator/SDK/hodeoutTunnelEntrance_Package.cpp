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
	 * 		Name   -> Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AhodeoutTunnelEntrance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.UserConstructionScript");
		
		AhodeoutTunnelEntrance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AhodeoutTunnelEntrance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ReceiveBeginPlay");
		
		AhodeoutTunnelEntrance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.EntranceInteracted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AhodeoutTunnelEntrance_C::EntranceInteracted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.EntranceInteracted");
		
		AhodeoutTunnelEntrance_C_EntranceInteracted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ExecuteUbergraph_hodeoutTunnelEntrance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AhodeoutTunnelEntrance_C::ExecuteUbergraph_hodeoutTunnelEntrance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function hodeoutTunnelEntrance.hodeoutTunnelEntrance_C.ExecuteUbergraph_hodeoutTunnelEntrance");
		
		AhodeoutTunnelEntrance_C_ExecuteUbergraph_hodeoutTunnelEntrance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AhodeoutTunnelEntrance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AhodeoutTunnelEntrance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass hodeoutTunnelEntrance.hodeoutTunnelEntrance_C");
		return ptr;
	}

}


