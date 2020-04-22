
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function planeSourcePoint.planeSourcePoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AplaneSourcePoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function planeSourcePoint.planeSourcePoint_C.UserConstructionScript");

	AplaneSourcePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function planeSourcePoint.planeSourcePoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AplaneSourcePoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function planeSourcePoint.planeSourcePoint_C.ReceiveBeginPlay");

	AplaneSourcePoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function planeSourcePoint.planeSourcePoint_C.spawnPlane
// (BlueprintCallable, BlueprintEvent)

void AplaneSourcePoint_C::spawnPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function planeSourcePoint.planeSourcePoint_C.spawnPlane");

	AplaneSourcePoint_C_spawnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function planeSourcePoint.planeSourcePoint_C.ExecuteUbergraph_planeSourcePoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AplaneSourcePoint_C::ExecuteUbergraph_planeSourcePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function planeSourcePoint.planeSourcePoint_C.ExecuteUbergraph_planeSourcePoint");

	AplaneSourcePoint_C_ExecuteUbergraph_planeSourcePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
