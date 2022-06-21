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
	 * 		Name   -> Function sewerMetalGate.sewerMetalGate_C.DoorCanInteract
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        FailReason                                                 (Parm, OutParm)
	 */
	void AsewerMetalGate_C::DoorCanInteract(bool* CanInteract, class FText* FailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.DoorCanInteract");
		
		AsewerMetalGate_C_DoorCanInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (FailReason != nullptr)
			*FailReason = params.FailReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewerMetalGate.sewerMetalGate_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsewerMetalGate_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.UserConstructionScript");
		
		AsewerMetalGate_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewerMetalGate.sewerMetalGate_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsewerMetalGate_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.ReceiveBeginPlay");
		
		AsewerMetalGate_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewerMetalGate.sewerMetalGate_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsewerMetalGate_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.ReceiveTick");
		
		AsewerMetalGate_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewerMetalGate.sewerMetalGate_C.ExecuteUbergraph_sewerMetalGate
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsewerMetalGate_C::ExecuteUbergraph_sewerMetalGate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewerMetalGate.sewerMetalGate_C.ExecuteUbergraph_sewerMetalGate");
		
		AsewerMetalGate_C_ExecuteUbergraph_sewerMetalGate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsewerMetalGate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsewerMetalGate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sewerMetalGate.sewerMetalGate_C");
		return ptr;
	}

}


