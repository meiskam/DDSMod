
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

// Function spraySpawner.spraySpawner_C.selectSpawnPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AspraySpawnPoint_C*      Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AspraySpawner_C::selectSpawnPoint(class AspraySpawnPoint_C** Output, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawner.spraySpawner_C.selectSpawnPoint");

	AspraySpawner_C_selectSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function spraySpawner.spraySpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AspraySpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawner.spraySpawner_C.UserConstructionScript");

	AspraySpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawner.spraySpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AspraySpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawner.spraySpawner_C.ReceiveBeginPlay");

	AspraySpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawner.spraySpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AspraySpawner_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawner.spraySpawner_C.ReceiveTick");

	AspraySpawner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawner.spraySpawner_C.trySpawnSpray
// (BlueprintCallable, BlueprintEvent)

void AspraySpawner_C::trySpawnSpray()
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawner.spraySpawner_C.trySpawnSpray");

	AspraySpawner_C_trySpawnSpray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawner.spraySpawner_C.burstInitialSprayPaint
// (BlueprintCallable, BlueprintEvent)

void AspraySpawner_C::burstInitialSprayPaint()
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawner.spraySpawner_C.burstInitialSprayPaint");

	AspraySpawner_C_burstInitialSprayPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawner.spraySpawner_C.ExecuteUbergraph_spraySpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AspraySpawner_C::ExecuteUbergraph_spraySpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawner.spraySpawner_C.ExecuteUbergraph_spraySpawner");

	AspraySpawner_C_ExecuteUbergraph_spraySpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
