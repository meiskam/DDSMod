
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function streetLight.streetLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstreetLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLight.streetLight_C.UserConstructionScript");

	AstreetLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLight.streetLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AstreetLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLight.streetLight_C.ReceiveBeginPlay");

	AstreetLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLight.streetLight_C.turnOn
// (BlueprintCallable, BlueprintEvent)

void AstreetLight_C::turnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLight.streetLight_C.turnOn");

	AstreetLight_C_turnOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLight.streetLight_C.turnOff
// (BlueprintCallable, BlueprintEvent)

void AstreetLight_C::turnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLight.streetLight_C.turnOff");

	AstreetLight_C_turnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLight.streetLight_C.eventLightChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreetLight_C::eventLightChange(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLight.streetLight_C.eventLightChange");

	AstreetLight_C_eventLightChange_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLight.streetLight_C.ExecuteUbergraph_streetLight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreetLight_C::ExecuteUbergraph_streetLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLight.streetLight_C.ExecuteUbergraph_streetLight");

	AstreetLight_C_ExecuteUbergraph_streetLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
