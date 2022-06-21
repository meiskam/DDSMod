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
	 * 		Name   -> Function gunshotsPlayer.gunshotsPlayer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AgunshotsPlayer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.UserConstructionScript");
		
		AgunshotsPlayer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gunshotsPlayer.gunshotsPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AgunshotsPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.ReceiveBeginPlay");
		
		AgunshotsPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gunshotsPlayer.gunshotsPlayer_C.playGunshot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgunshotsPlayer_C::playGunshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.playGunshot");
		
		AgunshotsPlayer_C_playGunshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gunshotsPlayer.gunshotsPlayer_C.ExecuteUbergraph_gunshotsPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgunshotsPlayer_C::ExecuteUbergraph_gunshotsPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.ExecuteUbergraph_gunshotsPlayer");
		
		AgunshotsPlayer_C_ExecuteUbergraph_gunshotsPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AgunshotsPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AgunshotsPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass gunshotsPlayer.gunshotsPlayer_C");
		return ptr;
	}

}


