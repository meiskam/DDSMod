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
	 * 		Name   -> Function sewageTeleportWidget.sewageTeleportWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UsewageTeleportWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportWidget.sewageTeleportWidget_C.Construct");
		
		UsewageTeleportWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewageTeleportWidget.sewageTeleportWidget_C.ConfirmTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UsewageTeleportWidget_C::ConfirmTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportWidget.sewageTeleportWidget_C.ConfirmTeleport");
		
		UsewageTeleportWidget_C_ConfirmTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sewageTeleportWidget.sewageTeleportWidget_C.ExecuteUbergraph_sewageTeleportWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsewageTeleportWidget_C::ExecuteUbergraph_sewageTeleportWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sewageTeleportWidget.sewageTeleportWidget_C.ExecuteUbergraph_sewageTeleportWidget");
		
		UsewageTeleportWidget_C_ExecuteUbergraph_sewageTeleportWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UsewageTeleportWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UsewageTeleportWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass sewageTeleportWidget.sewageTeleportWidget_C");
		return ptr;
	}

}


