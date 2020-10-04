
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

// Function spraySpawnPoint.spraySpawnPoint_C.checkObstacles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AspraySpawnPoint_C::checkObstacles(bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawnPoint.spraySpawnPoint_C.checkObstacles");

	AspraySpawnPoint_C_checkObstacles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function spraySpawnPoint.spraySpawnPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AspraySpawnPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawnPoint.spraySpawnPoint_C.UserConstructionScript");

	AspraySpawnPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawnPoint.spraySpawnPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AspraySpawnPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawnPoint.spraySpawnPoint_C.ReceiveBeginPlay");

	AspraySpawnPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawnPoint.spraySpawnPoint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AspraySpawnPoint_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawnPoint.spraySpawnPoint_C.ReceiveTick");

	AspraySpawnPoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawnPoint.spraySpawnPoint_C.spawnSpray
// (BlueprintCallable, BlueprintEvent)

void AspraySpawnPoint_C::spawnSpray()
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawnPoint.spraySpawnPoint_C.spawnSpray");

	AspraySpawnPoint_C_spawnSpray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spraySpawnPoint.spraySpawnPoint_C.ExecuteUbergraph_spraySpawnPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AspraySpawnPoint_C::ExecuteUbergraph_spraySpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function spraySpawnPoint.spraySpawnPoint_C.ExecuteUbergraph_spraySpawnPoint");

	AspraySpawnPoint_C_ExecuteUbergraph_spraySpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
