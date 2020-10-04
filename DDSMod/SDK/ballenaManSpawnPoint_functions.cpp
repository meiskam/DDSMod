
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

// Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AballenaManSpawnPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.UserConstructionScript");

	AballenaManSpawnPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AballenaManSpawnPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ReceiveBeginPlay");

	AballenaManSpawnPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ExecuteUbergraph_ballenaManSpawnPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AballenaManSpawnPoint_C::ExecuteUbergraph_ballenaManSpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaManSpawnPoint.ballenaManSpawnPoint_C.ExecuteUbergraph_ballenaManSpawnPoint");

	AballenaManSpawnPoint_C_ExecuteUbergraph_ballenaManSpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
