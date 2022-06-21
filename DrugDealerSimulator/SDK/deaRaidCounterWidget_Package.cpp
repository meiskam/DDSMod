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
	 * 		Name   -> Function deaRaidCounterWidget.deaRaidCounterWidget_C.secondsToTime
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        timeText                                                   (Parm, OutParm)
	 */
	void UdeaRaidCounterWidget_C::secondsToTime(int32_t Seconds, class FText* timeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.secondsToTime");
		
		UdeaRaidCounterWidget_C_secondsToTime_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (timeText != nullptr)
			*timeText = params.timeText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidCounterWidget.deaRaidCounterWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UdeaRaidCounterWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.Construct");
		
		UdeaRaidCounterWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidCounterWidget.deaRaidCounterWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            baseSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeaRaidCounterWidget_C::Setup(int32_t baseSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.Setup");
		
		UdeaRaidCounterWidget_C_Setup_Params params {};
		params.baseSeconds = baseSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidCounterWidget.deaRaidCounterWidget_C.updateCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Drama                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            leftSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeaRaidCounterWidget_C::updateCountdown(bool Drama, int32_t leftSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.updateCountdown");
		
		UdeaRaidCounterWidget_C_updateCountdown_Params params {};
		params.Drama = Drama;
		params.leftSeconds = leftSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidCounterWidget.deaRaidCounterWidget_C.killWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UdeaRaidCounterWidget_C::killWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.killWidget");
		
		UdeaRaidCounterWidget_C_killWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidCounterWidget.deaRaidCounterWidget_C.ExecuteUbergraph_deaRaidCounterWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdeaRaidCounterWidget_C::ExecuteUbergraph_deaRaidCounterWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.ExecuteUbergraph_deaRaidCounterWidget");
		
		UdeaRaidCounterWidget_C_ExecuteUbergraph_deaRaidCounterWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UdeaRaidCounterWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UdeaRaidCounterWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass deaRaidCounterWidget.deaRaidCounterWidget_C");
		return ptr;
	}

}


