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
	 * 		Name   -> Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ArandomTwoTowersSoundPlayer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.UserConstructionScript");
		
		ArandomTwoTowersSoundPlayer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ArandomTwoTowersSoundPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ReceiveBeginPlay");
		
		ArandomTwoTowersSoundPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.playPartySound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ArandomTwoTowersSoundPlayer_C::playPartySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.playPartySound");
		
		ArandomTwoTowersSoundPlayer_C_playPartySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ExecuteUbergraph_randomTwoTowersSoundPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ArandomTwoTowersSoundPlayer_C::ExecuteUbergraph_randomTwoTowersSoundPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ExecuteUbergraph_randomTwoTowersSoundPlayer");
		
		ArandomTwoTowersSoundPlayer_C_ExecuteUbergraph_randomTwoTowersSoundPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ArandomTwoTowersSoundPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ArandomTwoTowersSoundPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C");
		return ptr;
	}

}


