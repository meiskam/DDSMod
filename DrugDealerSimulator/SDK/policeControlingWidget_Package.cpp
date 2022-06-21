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
	 * 		Name   -> Function policeControlingWidget.policeControlingWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UpoliceControlingWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.Construct");
		
		UpoliceControlingWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeControlingWidget.policeControlingWidget_C.ToggleVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UpoliceControlingWidget_C::ToggleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.ToggleVisibility");
		
		UpoliceControlingWidget_C_ToggleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeControlingWidget.policeControlingWidget_C.killMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UpoliceControlingWidget_C::killMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.killMe");
		
		UpoliceControlingWidget_C_killMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeControlingWidget.policeControlingWidget_C.ExecuteUbergraph_policeControlingWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UpoliceControlingWidget_C::ExecuteUbergraph_policeControlingWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.ExecuteUbergraph_policeControlingWidget");
		
		UpoliceControlingWidget_C_ExecuteUbergraph_policeControlingWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UpoliceControlingWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UpoliceControlingWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass policeControlingWidget.policeControlingWidget_C");
		return ptr;
	}

}


