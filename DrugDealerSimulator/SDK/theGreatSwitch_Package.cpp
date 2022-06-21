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
	 * 		Name   -> Function theGreatSwitch.theGreatSwitch_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtheGreatSwitch_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.UserConstructionScript");
		
		AtheGreatSwitch_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function theGreatSwitch.theGreatSwitch_C.anim__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AtheGreatSwitch_C::anim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.anim__FinishedFunc");
		
		AtheGreatSwitch_C_anim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function theGreatSwitch.theGreatSwitch_C.anim__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AtheGreatSwitch_C::anim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.anim__UpdateFunc");
		
		AtheGreatSwitch_C_anim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function theGreatSwitch.theGreatSwitch_C.SwitchButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtheGreatSwitch_C::SwitchButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.SwitchButton");
		
		AtheGreatSwitch_C_SwitchButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function theGreatSwitch.theGreatSwitch_C.ExecuteUbergraph_theGreatSwitch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtheGreatSwitch_C::ExecuteUbergraph_theGreatSwitch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.ExecuteUbergraph_theGreatSwitch");
		
		AtheGreatSwitch_C_ExecuteUbergraph_theGreatSwitch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AtheGreatSwitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AtheGreatSwitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass theGreatSwitch.theGreatSwitch_C");
		return ptr;
	}

}


