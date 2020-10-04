
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

// Function launderSpawnLocation.launderSpawnLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlaunderSpawnLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function launderSpawnLocation.launderSpawnLocation_C.UserConstructionScript");

	AlaunderSpawnLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function launderSpawnLocation.launderSpawnLocation_C.SpawnCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            taskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlaunderSpawnLocation_C::SpawnCharacter(int taskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function launderSpawnLocation.launderSpawnLocation_C.SpawnCharacter");

	AlaunderSpawnLocation_C_SpawnCharacter_Params params;
	params.taskID = taskID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function launderSpawnLocation.launderSpawnLocation_C.ExecuteUbergraph_launderSpawnLocation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlaunderSpawnLocation_C::ExecuteUbergraph_launderSpawnLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function launderSpawnLocation.launderSpawnLocation_C.ExecuteUbergraph_launderSpawnLocation");

	AlaunderSpawnLocation_C_ExecuteUbergraph_launderSpawnLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
