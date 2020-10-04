
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

// Function metalWicket01.metalWicket01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmetalWicket01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket01.metalWicket01_C.UserConstructionScript");

	AmetalWicket01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function metalWicket01.metalWicket01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmetalWicket01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket01.metalWicket01_C.ReceiveBeginPlay");

	AmetalWicket01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function metalWicket01.metalWicket01_C.resetWicket
// (BlueprintCallable, BlueprintEvent)

void AmetalWicket01_C::resetWicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket01.metalWicket01_C.resetWicket");

	AmetalWicket01_C_resetWicket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function metalWicket01.metalWicket01_C.ExecuteUbergraph_metalWicket01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmetalWicket01_C::ExecuteUbergraph_metalWicket01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket01.metalWicket01_C.ExecuteUbergraph_metalWicket01");

	AmetalWicket01_C_ExecuteUbergraph_metalWicket01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
