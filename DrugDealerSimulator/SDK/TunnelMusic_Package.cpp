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
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.PickRandomSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATunnelMusic_C::PickRandomSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.PickRandomSound");
		
		ATunnelMusic_C_PickRandomSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATunnelMusic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.UserConstructionScript");
		
		ATunnelMusic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATunnelMusic_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.ReceiveBeginPlay");
		
		ATunnelMusic_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATunnelMusic_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.ReceiveTick");
		
		ATunnelMusic_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.EventPlayerEnteredTunnels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATunnelMusic_C::EventPlayerEnteredTunnels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerEnteredTunnels");
		
		ATunnelMusic_C_EventPlayerEnteredTunnels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.EventPlayerPeeking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATunnelMusic_C::EventPlayerPeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerPeeking");
		
		ATunnelMusic_C_EventPlayerPeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.EventPlayerBack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATunnelMusic_C::EventPlayerBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerBack");
		
		ATunnelMusic_C_EventPlayerBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.EventPlayerLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATunnelMusic_C::EventPlayerLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.EventPlayerLeft");
		
		ATunnelMusic_C_EventPlayerLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function TunnelMusic.TunnelMusic_C.ExecuteUbergraph_TunnelMusic
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATunnelMusic_C::ExecuteUbergraph_TunnelMusic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TunnelMusic.TunnelMusic_C.ExecuteUbergraph_TunnelMusic");
		
		ATunnelMusic_C_ExecuteUbergraph_TunnelMusic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATunnelMusic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATunnelMusic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TunnelMusic.TunnelMusic_C");
		return ptr;
	}

}


