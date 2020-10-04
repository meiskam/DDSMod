
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function sleepingBedBase.sleepingBedBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AsleepingBedBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.UserConstructionScript");

	AsleepingBedBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepingBedBase.sleepingBedBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsleepingBedBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.ReceiveBeginPlay");

	AsleepingBedBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepingBedBase.sleepingBedBase_C.engageSleepMode
// (BlueprintCallable, BlueprintEvent)

void AsleepingBedBase_C::engageSleepMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.engageSleepMode");

	AsleepingBedBase_C_engageSleepMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepingBedBase.sleepingBedBase_C.sleepEnd
// (BlueprintCallable, BlueprintEvent)

void AsleepingBedBase_C::sleepEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.sleepEnd");

	AsleepingBedBase_C_sleepEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepingBedBase.sleepingBedBase_C.ExecuteUbergraph_sleepingBedBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsleepingBedBase_C::ExecuteUbergraph_sleepingBedBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepingBedBase.sleepingBedBase_C.ExecuteUbergraph_sleepingBedBase");

	AsleepingBedBase_C_ExecuteUbergraph_sleepingBedBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
