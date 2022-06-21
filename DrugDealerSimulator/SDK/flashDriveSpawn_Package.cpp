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
	 * 		Name   -> Function flashDriveSpawn.flashDriveSpawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AflashDriveSpawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.UserConstructionScript");
		
		AflashDriveSpawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function flashDriveSpawn.flashDriveSpawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AflashDriveSpawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.ReceiveBeginPlay");
		
		AflashDriveSpawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function flashDriveSpawn.flashDriveSpawn_C.spawnFlashDrive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AflashDriveSpawn_C::spawnFlashDrive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.spawnFlashDrive");
		
		AflashDriveSpawn_C_spawnFlashDrive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function flashDriveSpawn.flashDriveSpawn_C.enableFlashPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AflashDriveSpawn_C::enableFlashPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.enableFlashPickup");
		
		AflashDriveSpawn_C_enableFlashPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function flashDriveSpawn.flashDriveSpawn_C.ExecuteUbergraph_flashDriveSpawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AflashDriveSpawn_C::ExecuteUbergraph_flashDriveSpawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function flashDriveSpawn.flashDriveSpawn_C.ExecuteUbergraph_flashDriveSpawn");
		
		AflashDriveSpawn_C_ExecuteUbergraph_flashDriveSpawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AflashDriveSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AflashDriveSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass flashDriveSpawn.flashDriveSpawn_C");
		return ptr;
	}

}


