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
	 * 		Name   -> Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityCameraAlertRadius_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.UserConstructionScript");
		
		ASecurityCameraAlertRadius_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASecurityCameraAlertRadius_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ReceiveBeginPlay");
		
		ASecurityCameraAlertRadius_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ExecuteUbergraph_SecurityCameraAlertRadius
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityCameraAlertRadius_C::ExecuteUbergraph_SecurityCameraAlertRadius(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraAlertRadius.SecurityCameraAlertRadius_C.ExecuteUbergraph_SecurityCameraAlertRadius");
		
		ASecurityCameraAlertRadius_C_ExecuteUbergraph_SecurityCameraAlertRadius_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityCameraAlertRadius_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityCameraAlertRadius_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityCameraAlertRadius.SecurityCameraAlertRadius_C");
		return ptr;
	}

}


