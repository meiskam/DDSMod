
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

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.updateSprayLook
// (Public, BlueprintCallable, BlueprintEvent)

void AsprayPlacementGizmo_C::updateSprayLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.updateSprayLook");

	AsprayPlacementGizmo_C_updateSprayLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.useSprayFromCan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AsprayPlacementGizmo_C::useSprayFromCan()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.useSprayFromCan");

	AsprayPlacementGizmo_C_useSprayFromCan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkPlacementConditions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           AreaUnlocked                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           showGizmo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool AsprayPlacementGizmo_C::checkPlacementConditions(bool* AreaUnlocked, bool* showGizmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkPlacementConditions");

	AsprayPlacementGizmo_C_checkPlacementConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaUnlocked != nullptr)
		*AreaUnlocked = params.AreaUnlocked;
	if (showGizmo != nullptr)
		*showGizmo = params.showGizmo;

	return params.ReturnValue;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkSurroundings
// (Public, BlueprintCallable, BlueprintEvent)

void AsprayPlacementGizmo_C::checkSurroundings()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkSurroundings");

	AsprayPlacementGizmo_C_checkSurroundings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.countdownHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsprayPlacementGizmo_C::countdownHold(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.countdownHold");

	AsprayPlacementGizmo_C_countdownHold_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsprayPlacementGizmo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.UserConstructionScript");

	AsprayPlacementGizmo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsprayPlacementGizmo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveBeginPlay");

	AsprayPlacementGizmo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsprayPlacementGizmo_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveTick");

	AsprayPlacementGizmo_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionPress
// (BlueprintCallable, BlueprintEvent)

void AsprayPlacementGizmo_C::ActionPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionPress");

	AsprayPlacementGizmo_C_ActionPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionRelease
// (BlueprintCallable, BlueprintEvent)

void AsprayPlacementGizmo_C::ActionRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionRelease");

	AsprayPlacementGizmo_C_ActionRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.PutSpraySymbol
// (BlueprintCallable, BlueprintEvent)

void AsprayPlacementGizmo_C::PutSpraySymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.PutSpraySymbol");

	AsprayPlacementGizmo_C_PutSpraySymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ExecuteUbergraph_sprayPlacementGizmo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsprayPlacementGizmo_C::ExecuteUbergraph_sprayPlacementGizmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPlacementGizmo.sprayPlacementGizmo_C.ExecuteUbergraph_sprayPlacementGizmo");

	AsprayPlacementGizmo_C_ExecuteUbergraph_sprayPlacementGizmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
