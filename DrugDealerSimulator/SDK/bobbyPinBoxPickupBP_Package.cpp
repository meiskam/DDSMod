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
	 * 		Name   -> Function bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AbobbyPinBoxPickupBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C.UserConstructionScript");
		
		AbobbyPinBoxPickupBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AbobbyPinBoxPickupBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C.ReceiveBeginPlay");
		
		AbobbyPinBoxPickupBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C.ExecuteUbergraph_bobbyPinBoxPickupBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbobbyPinBoxPickupBP_C::ExecuteUbergraph_bobbyPinBoxPickupBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C.ExecuteUbergraph_bobbyPinBoxPickupBP");
		
		AbobbyPinBoxPickupBP_C_ExecuteUbergraph_bobbyPinBoxPickupBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AbobbyPinBoxPickupBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AbobbyPinBoxPickupBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C");
		return ptr;
	}

}


