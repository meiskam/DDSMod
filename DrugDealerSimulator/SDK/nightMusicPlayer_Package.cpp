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
	 * 		Name   -> Function nightMusicPlayer.nightMusicPlayer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AnightMusicPlayer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.UserConstructionScript");
		
		AnightMusicPlayer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function nightMusicPlayer.nightMusicPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AnightMusicPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.ReceiveBeginPlay");
		
		AnightMusicPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function nightMusicPlayer.nightMusicPlayer_C.checkDayTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AnightMusicPlayer_C::checkDayTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.checkDayTime");
		
		AnightMusicPlayer_C_checkDayTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function nightMusicPlayer.nightMusicPlayer_C.Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AnightMusicPlayer_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.Activate");
		
		AnightMusicPlayer_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function nightMusicPlayer.nightMusicPlayer_C.Deactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AnightMusicPlayer_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.Deactivate");
		
		AnightMusicPlayer_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function nightMusicPlayer.nightMusicPlayer_C.ExecuteUbergraph_nightMusicPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AnightMusicPlayer_C::ExecuteUbergraph_nightMusicPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.ExecuteUbergraph_nightMusicPlayer");
		
		AnightMusicPlayer_C_ExecuteUbergraph_nightMusicPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AnightMusicPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AnightMusicPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass nightMusicPlayer.nightMusicPlayer_C");
		return ptr;
	}

}


