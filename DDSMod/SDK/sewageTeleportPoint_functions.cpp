
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

// Function sewageTeleportPoint.sewageTeleportPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsewageTeleportPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.UserConstructionScript");

	AsewageTeleportPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageTeleportPoint.sewageTeleportPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsewageTeleportPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.ReceiveBeginPlay");

	AsewageTeleportPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageTeleportPoint.sewageTeleportPoint_C.checkAvailable
// (BlueprintCallable, BlueprintEvent)

void AsewageTeleportPoint_C::checkAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.checkAvailable");

	AsewageTeleportPoint_C_checkAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageTeleportPoint.sewageTeleportPoint_C.activateTeleport
// (BlueprintCallable, BlueprintEvent)

void AsewageTeleportPoint_C::activateTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.activateTeleport");

	AsewageTeleportPoint_C_activateTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageTeleportPoint.sewageTeleportPoint_C.ExecuteUbergraph_sewageTeleportPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsewageTeleportPoint_C::ExecuteUbergraph_sewageTeleportPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportPoint.sewageTeleportPoint_C.ExecuteUbergraph_sewageTeleportPoint");

	AsewageTeleportPoint_C_ExecuteUbergraph_sewageTeleportPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
