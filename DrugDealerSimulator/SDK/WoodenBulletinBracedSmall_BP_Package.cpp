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
	 * 		Name   -> Function WoodenBulletinBracedSmall_BP.WoodenBulletinBracedSmall_BP_C.SetLights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LightsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWoodenBulletinBracedSmall_BP_C::SetLights(bool LightsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodenBulletinBracedSmall_BP.WoodenBulletinBracedSmall_BP_C.SetLights");
		
		AWoodenBulletinBracedSmall_BP_C_SetLights_Params params {};
		params.LightsOn = LightsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function WoodenBulletinBracedSmall_BP.WoodenBulletinBracedSmall_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWoodenBulletinBracedSmall_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WoodenBulletinBracedSmall_BP.WoodenBulletinBracedSmall_BP_C.UserConstructionScript");
		
		AWoodenBulletinBracedSmall_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AWoodenBulletinBracedSmall_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWoodenBulletinBracedSmall_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodenBulletinBracedSmall_BP.WoodenBulletinBracedSmall_BP_C");
		return ptr;
	}

}


