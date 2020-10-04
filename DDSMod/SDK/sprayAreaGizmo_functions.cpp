
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

// Function sprayAreaGizmo.sprayAreaGizmo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsprayAreaGizmo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.UserConstructionScript");

	AsprayAreaGizmo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayAreaGizmo.sprayAreaGizmo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsprayAreaGizmo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.ReceiveBeginPlay");

	AsprayAreaGizmo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayAreaGizmo.sprayAreaGizmo_C.checkSprayPlacement
// (BlueprintCallable, BlueprintEvent)

void AsprayAreaGizmo_C::checkSprayPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.checkSprayPlacement");

	AsprayAreaGizmo_C_checkSprayPlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayAreaGizmo.sprayAreaGizmo_C.ExecuteUbergraph_sprayAreaGizmo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsprayAreaGizmo_C::ExecuteUbergraph_sprayAreaGizmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayAreaGizmo.sprayAreaGizmo_C.ExecuteUbergraph_sprayAreaGizmo");

	AsprayAreaGizmo_C_ExecuteUbergraph_sprayAreaGizmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
