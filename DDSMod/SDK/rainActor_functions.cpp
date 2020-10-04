
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function rainActor.rainActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ArainActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function rainActor.rainActor_C.UserConstructionScript");

	ArainActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rainActor.rainActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ArainActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function rainActor.rainActor_C.ReceiveBeginPlay");

	ArainActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rainActor.rainActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArainActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function rainActor.rainActor_C.ReceiveTick");

	ArainActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rainActor.rainActor_C.spawnThunder
// (BlueprintCallable, BlueprintEvent)

void ArainActor_C::spawnThunder()
{
	static auto fn = UObject::FindObject<UFunction>("Function rainActor.rainActor_C.spawnThunder");

	ArainActor_C_spawnThunder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rainActor.rainActor_C.retrySetup
// (BlueprintCallable, BlueprintEvent)

void ArainActor_C::retrySetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function rainActor.rainActor_C.retrySetup");

	ArainActor_C_retrySetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rainActor.rainActor_C.checkWeatherConditions
// (BlueprintCallable, BlueprintEvent)

void ArainActor_C::checkWeatherConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function rainActor.rainActor_C.checkWeatherConditions");

	ArainActor_C_checkWeatherConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rainActor.rainActor_C.ExecuteUbergraph_rainActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArainActor_C::ExecuteUbergraph_rainActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function rainActor.rainActor_C.ExecuteUbergraph_rainActor");

	ArainActor_C_ExecuteUbergraph_rainActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
