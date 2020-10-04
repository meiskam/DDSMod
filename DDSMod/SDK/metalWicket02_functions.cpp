
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

// Function metalWicket02.metalWicket02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmetalWicket02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket02.metalWicket02_C.UserConstructionScript");

	AmetalWicket02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function metalWicket02.metalWicket02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmetalWicket02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket02.metalWicket02_C.ReceiveBeginPlay");

	AmetalWicket02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function metalWicket02.metalWicket02_C.resetWicket
// (BlueprintCallable, BlueprintEvent)

void AmetalWicket02_C::resetWicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket02.metalWicket02_C.resetWicket");

	AmetalWicket02_C_resetWicket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function metalWicket02.metalWicket02_C.ExecuteUbergraph_metalWicket02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmetalWicket02_C::ExecuteUbergraph_metalWicket02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function metalWicket02.metalWicket02_C.ExecuteUbergraph_metalWicket02");

	AmetalWicket02_C_ExecuteUbergraph_metalWicket02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
