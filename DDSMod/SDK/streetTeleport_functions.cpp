
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function streetTeleport.streetTeleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstreetTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetTeleport.streetTeleport_C.UserConstructionScript");

	AstreetTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetTeleport.streetTeleport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AstreetTeleport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetTeleport.streetTeleport_C.ReceiveBeginPlay");

	AstreetTeleport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetTeleport.streetTeleport_C.chujDupaCyce
// (BlueprintCallable, BlueprintEvent)

void AstreetTeleport_C::chujDupaCyce()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetTeleport.streetTeleport_C.chujDupaCyce");

	AstreetTeleport_C_chujDupaCyce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetTeleport.streetTeleport_C.ExecuteUbergraph_streetTeleport
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreetTeleport_C::ExecuteUbergraph_streetTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function streetTeleport.streetTeleport_C.ExecuteUbergraph_streetTeleport");

	AstreetTeleport_C_ExecuteUbergraph_streetTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
