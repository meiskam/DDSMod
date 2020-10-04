
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function deaRaidCounterWidget.deaRaidCounterWidget_C.secondsToTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   timeText                       (Parm, OutParm)

void UdeaRaidCounterWidget_C::secondsToTime(int Seconds, struct FText* timeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.secondsToTime");

	UdeaRaidCounterWidget_C_secondsToTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (timeText != nullptr)
		*timeText = params.timeText;
}


// Function deaRaidCounterWidget.deaRaidCounterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdeaRaidCounterWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.Construct");

	UdeaRaidCounterWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidCounterWidget.deaRaidCounterWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            baseSeconds                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeaRaidCounterWidget_C::setup(int baseSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.setup");

	UdeaRaidCounterWidget_C_setup_Params params;
	params.baseSeconds = baseSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidCounterWidget.deaRaidCounterWidget_C.updateCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Drama                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            leftSeconds                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeaRaidCounterWidget_C::updateCountdown(bool Drama, int leftSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.updateCountdown");

	UdeaRaidCounterWidget_C_updateCountdown_Params params;
	params.Drama = Drama;
	params.leftSeconds = leftSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidCounterWidget.deaRaidCounterWidget_C.killWidget
// (BlueprintCallable, BlueprintEvent)

void UdeaRaidCounterWidget_C::killWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.killWidget");

	UdeaRaidCounterWidget_C_killWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidCounterWidget.deaRaidCounterWidget_C.ExecuteUbergraph_deaRaidCounterWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeaRaidCounterWidget_C::ExecuteUbergraph_deaRaidCounterWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidCounterWidget.deaRaidCounterWidget_C.ExecuteUbergraph_deaRaidCounterWidget");

	UdeaRaidCounterWidget_C_ExecuteUbergraph_deaRaidCounterWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
