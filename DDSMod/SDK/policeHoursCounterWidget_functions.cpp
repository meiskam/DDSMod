
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function policeHoursCounterWidget.policeHoursCounterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpoliceHoursCounterWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeHoursCounterWidget.policeHoursCounterWidget_C.Construct");

	UpoliceHoursCounterWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeHoursCounterWidget.policeHoursCounterWidget_C.updateTime
// (BlueprintCallable, BlueprintEvent)

void UpoliceHoursCounterWidget_C::updateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeHoursCounterWidget.policeHoursCounterWidget_C.updateTime");

	UpoliceHoursCounterWidget_C_updateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeHoursCounterWidget.policeHoursCounterWidget_C.ExecuteUbergraph_policeHoursCounterWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpoliceHoursCounterWidget_C::ExecuteUbergraph_policeHoursCounterWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeHoursCounterWidget.policeHoursCounterWidget_C.ExecuteUbergraph_policeHoursCounterWidget");

	UpoliceHoursCounterWidget_C_ExecuteUbergraph_policeHoursCounterWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
