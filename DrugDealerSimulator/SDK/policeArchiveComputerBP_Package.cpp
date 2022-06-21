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
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPlayerForFlashdrive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               hasFlashDrive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ApoliceArchiveComputerBP_C::checkPlayerForFlashdrive(bool* hasFlashDrive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPlayerForFlashdrive");
		
		ApoliceArchiveComputerBP_C_checkPlayerForFlashdrive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasFlashDrive != nullptr)
			*hasFlashDrive = params.hasFlashDrive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceArchiveComputerBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.UserConstructionScript");
		
		ApoliceArchiveComputerBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApoliceArchiveComputerBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveBeginPlay");
		
		ApoliceArchiveComputerBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApoliceArchiveComputerBP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveTick");
		
		ApoliceArchiveComputerBP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceArchiveComputerBP_C::KeyDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyDown");
		
		ApoliceArchiveComputerBP_C_KeyDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceArchiveComputerBP_C::KeyRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyRelease");
		
		ApoliceArchiveComputerBP_C_KeyRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkStillFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceArchiveComputerBP_C::checkStillFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkStillFocus");
		
		ApoliceArchiveComputerBP_C_checkStillFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceArchiveComputerBP_C::checkPen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPen");
		
		ApoliceArchiveComputerBP_C_checkPen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeArchiveComputerBP.policeArchiveComputerBP_C.ExecuteUbergraph_policeArchiveComputerBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApoliceArchiveComputerBP_C::ExecuteUbergraph_policeArchiveComputerBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeArchiveComputerBP.policeArchiveComputerBP_C.ExecuteUbergraph_policeArchiveComputerBP");
		
		ApoliceArchiveComputerBP_C_ExecuteUbergraph_policeArchiveComputerBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApoliceArchiveComputerBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApoliceArchiveComputerBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass policeArchiveComputerBP.policeArchiveComputerBP_C");
		return ptr;
	}

}


