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
	 * 		Name   -> Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UraidWindowTeleportWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.Construct");
		
		UraidWindowTeleportWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.ExecuteUbergraph_raidWindowTeleportWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UraidWindowTeleportWidget_C::ExecuteUbergraph_raidWindowTeleportWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.ExecuteUbergraph_raidWindowTeleportWidget");
		
		UraidWindowTeleportWidget_C_ExecuteUbergraph_raidWindowTeleportWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UraidWindowTeleportWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UraidWindowTeleportWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass raidWindowTeleportWidget.raidWindowTeleportWidget_C");
		return ptr;
	}

}


