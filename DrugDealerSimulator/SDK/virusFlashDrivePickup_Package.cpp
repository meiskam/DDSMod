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
	 * 		Name   -> Function virusFlashDrivePickup.virusFlashDrivePickup_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AvirusFlashDrivePickup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function virusFlashDrivePickup.virusFlashDrivePickup_C.UserConstructionScript");
		
		AvirusFlashDrivePickup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function virusFlashDrivePickup.virusFlashDrivePickup_C.pickupEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AvirusFlashDrivePickup_C::pickupEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function virusFlashDrivePickup.virusFlashDrivePickup_C.pickupEventScript");
		
		AvirusFlashDrivePickup_C_pickupEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function virusFlashDrivePickup.virusFlashDrivePickup_C.ExecuteUbergraph_virusFlashDrivePickup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AvirusFlashDrivePickup_C::ExecuteUbergraph_virusFlashDrivePickup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function virusFlashDrivePickup.virusFlashDrivePickup_C.ExecuteUbergraph_virusFlashDrivePickup");
		
		AvirusFlashDrivePickup_C_ExecuteUbergraph_virusFlashDrivePickup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AvirusFlashDrivePickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AvirusFlashDrivePickup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass virusFlashDrivePickup.virusFlashDrivePickup_C");
		return ptr;
	}

}


