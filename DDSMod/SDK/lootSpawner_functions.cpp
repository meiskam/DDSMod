
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

// Function lootSpawner.lootSpawner_C.pickRandomLoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  LootOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AlootSpawner_C::pickRandomLoot(class UClass** LootOut, int* quantity, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function lootSpawner.lootSpawner_C.pickRandomLoot");

	AlootSpawner_C_pickRandomLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootOut != nullptr)
		*LootOut = params.LootOut;
	if (quantity != nullptr)
		*quantity = params.quantity;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function lootSpawner.lootSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlootSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lootSpawner.lootSpawner_C.UserConstructionScript");

	AlootSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lootSpawner.lootSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlootSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lootSpawner.lootSpawner_C.ReceiveBeginPlay");

	AlootSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lootSpawner.lootSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlootSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function lootSpawner.lootSpawner_C.ReceiveTick");

	AlootSpawner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lootSpawner.lootSpawner_C.spawnRandomLoot
// (BlueprintCallable, BlueprintEvent)

void AlootSpawner_C::spawnRandomLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function lootSpawner.lootSpawner_C.spawnRandomLoot");

	AlootSpawner_C_spawnRandomLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lootSpawner.lootSpawner_C.testCountdownSpawn
// (BlueprintCallable, BlueprintEvent)

void AlootSpawner_C::testCountdownSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function lootSpawner.lootSpawner_C.testCountdownSpawn");

	AlootSpawner_C_testCountdownSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lootSpawner.lootSpawner_C.ExecuteUbergraph_lootSpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlootSpawner_C::ExecuteUbergraph_lootSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lootSpawner.lootSpawner_C.ExecuteUbergraph_lootSpawner");

	AlootSpawner_C_ExecuteUbergraph_lootSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
