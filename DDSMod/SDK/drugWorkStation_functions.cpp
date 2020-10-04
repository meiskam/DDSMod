
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

// Function drugWorkStation.drugWorkStation_C.respawnWorkStation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::respawnWorkStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.respawnWorkStation");

	AdrugWorkStation_C_respawnWorkStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.checkHasEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasEquipment                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdrugWorkStation_C::checkHasEquipment(bool* hasEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.checkHasEquipment");

	AdrugWorkStation_C_checkHasEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasEquipment != nullptr)
		*hasEquipment = params.hasEquipment;
}


// Function drugWorkStation.drugWorkStation_C.displayInteractionError
// (Public, BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::displayInteractionError()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.displayInteractionError");

	AdrugWorkStation_C_displayInteractionError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.eqGizmoUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::eqGizmoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.eqGizmoUpdate");

	AdrugWorkStation_C_eqGizmoUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.setEqPlacementGizmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromHoveredObject              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AworkStationEquipmentBase_C* HoveredEq                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdrugWorkStation_C::setEqPlacementGizmo(bool FromHoveredObject, class AworkStationEquipmentBase_C* HoveredEq)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.setEqPlacementGizmo");

	AdrugWorkStation_C_setEqPlacementGizmo_Params params;
	params.FromHoveredObject = FromHoveredObject;
	params.HoveredEq = HoveredEq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.setDrugPlacementGizmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::setDrugPlacementGizmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.setDrugPlacementGizmo");

	AdrugWorkStation_C_setDrugPlacementGizmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.packageGizmoUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::packageGizmoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.packageGizmoUpdate");

	AdrugWorkStation_C_packageGizmoUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.switchNextMode
// (Public, BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::switchNextMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.switchNextMode");

	AdrugWorkStation_C_switchNextMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.UserConstructionScript");

	AdrugWorkStation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.ActivateWorkStation
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::ActivateWorkStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ActivateWorkStation");

	AdrugWorkStation_C_ActivateWorkStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.LeaveWorkStation
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::LeaveWorkStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.LeaveWorkStation");

	AdrugWorkStation_C_LeaveWorkStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.TabHeldDown
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::TabHeldDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.TabHeldDown");

	AdrugWorkStation_C_TabHeldDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.TabReleased
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::TabReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.TabReleased");

	AdrugWorkStation_C_TabReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.ShiftHeldDown
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::ShiftHeldDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ShiftHeldDown");

	AdrugWorkStation_C_ShiftHeldDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.ShiftReleased
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::ShiftReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ShiftReleased");

	AdrugWorkStation_C_ShiftReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.placeCurObject
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::placeCurObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.placeCurObject");

	AdrugWorkStation_C_placeCurObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdrugWorkStation_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ReceiveTick");

	AdrugWorkStation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdrugWorkStation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ReceiveBeginPlay");

	AdrugWorkStation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.scrollOneUp
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::scrollOneUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.scrollOneUp");

	AdrugWorkStation_C_scrollOneUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.scrollOneDown
// (BlueprintCallable, BlueprintEvent)

void AdrugWorkStation_C::scrollOneDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.scrollOneDown");

	AdrugWorkStation_C_scrollOneDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.rotateGizmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdrugWorkStation_C::rotateGizmo(float Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.rotateGizmo");

	AdrugWorkStation_C_rotateGizmo_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.updateWorkStationObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Placed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdrugWorkStation_C::updateWorkStationObjects(bool Placed)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.updateWorkStationObjects");

	AdrugWorkStation_C_updateWorkStationObjects_Params params;
	params.Placed = Placed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugWorkStation.drugWorkStation_C.ExecuteUbergraph_drugWorkStation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdrugWorkStation_C::ExecuteUbergraph_drugWorkStation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ExecuteUbergraph_drugWorkStation");

	AdrugWorkStation_C_ExecuteUbergraph_drugWorkStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
