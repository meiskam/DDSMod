
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

// Function planeManager.planeManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AplaneManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function planeManager.planeManager_C.UserConstructionScript");

	AplaneManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function planeManager.planeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AplaneManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function planeManager.planeManager_C.ReceiveBeginPlay");

	AplaneManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function planeManager.planeManager_C.trySpawnPlane
// (BlueprintCallable, BlueprintEvent)

void AplaneManager_C::trySpawnPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function planeManager.planeManager_C.trySpawnPlane");

	AplaneManager_C_trySpawnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function planeManager.planeManager_C.ExecuteUbergraph_planeManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AplaneManager_C::ExecuteUbergraph_planeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function planeManager.planeManager_C.ExecuteUbergraph_planeManager");

	AplaneManager_C_ExecuteUbergraph_planeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
