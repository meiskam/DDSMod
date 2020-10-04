
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

// Function raidPolicemanSpawn.raidPolicemanSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AraidPolicemanSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.UserConstructionScript");

	AraidPolicemanSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function raidPolicemanSpawn.raidPolicemanSpawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AraidPolicemanSpawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.ReceiveBeginPlay");

	AraidPolicemanSpawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function raidPolicemanSpawn.raidPolicemanSpawn_C.SpawnPoliceman
// (BlueprintCallable, BlueprintEvent)

void AraidPolicemanSpawn_C::SpawnPoliceman()
{
	static auto fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.SpawnPoliceman");

	AraidPolicemanSpawn_C_SpawnPoliceman_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function raidPolicemanSpawn.raidPolicemanSpawn_C.ExecuteUbergraph_raidPolicemanSpawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AraidPolicemanSpawn_C::ExecuteUbergraph_raidPolicemanSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function raidPolicemanSpawn.raidPolicemanSpawn_C.ExecuteUbergraph_raidPolicemanSpawn");

	AraidPolicemanSpawn_C_ExecuteUbergraph_raidPolicemanSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
