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
	 * 		Name   -> Function policeHoursCounterWidget.policeHoursCounterWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UpoliceHoursCounterWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeHoursCounterWidget.policeHoursCounterWidget_C.Construct");
		
		UpoliceHoursCounterWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeHoursCounterWidget.policeHoursCounterWidget_C.updateTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UpoliceHoursCounterWidget_C::updateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeHoursCounterWidget.policeHoursCounterWidget_C.updateTime");
		
		UpoliceHoursCounterWidget_C_updateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeHoursCounterWidget.policeHoursCounterWidget_C.ExecuteUbergraph_policeHoursCounterWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UpoliceHoursCounterWidget_C::ExecuteUbergraph_policeHoursCounterWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeHoursCounterWidget.policeHoursCounterWidget_C.ExecuteUbergraph_policeHoursCounterWidget");
		
		UpoliceHoursCounterWidget_C_ExecuteUbergraph_policeHoursCounterWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UpoliceHoursCounterWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UpoliceHoursCounterWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass policeHoursCounterWidget.policeHoursCounterWidget_C");
		return ptr;
	}

}


