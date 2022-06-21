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
	 * 		Name   -> Function appartmentWallPicker.appartmentWallPicker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentWallPicker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.UserConstructionScript");
		
		AappartmentWallPicker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentWallPicker.appartmentWallPicker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AappartmentWallPicker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.ReceiveBeginPlay");
		
		AappartmentWallPicker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentWallPicker.appartmentWallPicker_C.highlightAppartment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentWallPicker_C::highlightAppartment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.highlightAppartment");
		
		AappartmentWallPicker_C_highlightAppartment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentWallPicker.appartmentWallPicker_C.disableHighlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentWallPicker_C::disableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.disableHighlight");
		
		AappartmentWallPicker_C_disableHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentWallPicker.appartmentWallPicker_C.ExecuteUbergraph_appartmentWallPicker
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentWallPicker_C::ExecuteUbergraph_appartmentWallPicker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.ExecuteUbergraph_appartmentWallPicker");
		
		AappartmentWallPicker_C_ExecuteUbergraph_appartmentWallPicker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AappartmentWallPicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AappartmentWallPicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass appartmentWallPicker.appartmentWallPicker_C");
		return ptr;
	}

}


