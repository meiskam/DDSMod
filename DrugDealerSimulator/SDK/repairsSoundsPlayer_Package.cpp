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
	 * 		Name   -> Function repairsSoundsPlayer.repairsSoundsPlayer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ArepairsSoundsPlayer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.UserConstructionScript");
		
		ArepairsSoundsPlayer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function repairsSoundsPlayer.repairsSoundsPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ArepairsSoundsPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.ReceiveBeginPlay");
		
		ArepairsSoundsPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function repairsSoundsPlayer.repairsSoundsPlayer_C.PlaySound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ArepairsSoundsPlayer_C::PlaySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.PlaySound");
		
		ArepairsSoundsPlayer_C_PlaySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function repairsSoundsPlayer.repairsSoundsPlayer_C.ExecuteUbergraph_repairsSoundsPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ArepairsSoundsPlayer_C::ExecuteUbergraph_repairsSoundsPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.ExecuteUbergraph_repairsSoundsPlayer");
		
		ArepairsSoundsPlayer_C_ExecuteUbergraph_repairsSoundsPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ArepairsSoundsPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ArepairsSoundsPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass repairsSoundsPlayer.repairsSoundsPlayer_C");
		return ptr;
	}

}


