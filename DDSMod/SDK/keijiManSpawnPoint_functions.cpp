
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

// Function keijiManSpawnPoint.keijiManSpawnPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AkeijiManSpawnPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiManSpawnPoint.keijiManSpawnPoint_C.UserConstructionScript");

	AkeijiManSpawnPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiManSpawnPoint.keijiManSpawnPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AkeijiManSpawnPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiManSpawnPoint.keijiManSpawnPoint_C.ReceiveBeginPlay");

	AkeijiManSpawnPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiManSpawnPoint.keijiManSpawnPoint_C.ExecuteUbergraph_keijiManSpawnPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AkeijiManSpawnPoint_C::ExecuteUbergraph_keijiManSpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiManSpawnPoint.keijiManSpawnPoint_C.ExecuteUbergraph_keijiManSpawnPoint");

	AkeijiManSpawnPoint_C_ExecuteUbergraph_keijiManSpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
