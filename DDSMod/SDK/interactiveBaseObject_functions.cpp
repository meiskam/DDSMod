
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

// Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::reconstructEquipmentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData");

	AinteractiveBaseObject_C_reconstructEquipmentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::removeFromWorkStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation");

	AinteractiveBaseObject_C_removeFromWorkStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanStore                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Reason                         (Parm, OutParm)

void AinteractiveBaseObject_C::objectCanStoreApartment(bool* CanStore, struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment");

	AinteractiveBaseObject_C_objectCanStoreApartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanStore != nullptr)
		*CanStore = params.CanStore;
	if (Reason != nullptr)
		*Reason = params.Reason;
}


// Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming
// (Public, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::verifyCorrectNaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming");

	AinteractiveBaseObject_C_verifyCorrectNaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   OverrideKey                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   keyOverride                    (Parm, OutParm)
// struct FText                   Object_Name                    (Parm, OutParm)
// struct FText                   Action_Name                    (Parm, OutParm)

void AinteractiveBaseObject_C::GetActionNames(const struct FText& OverrideKey, struct FText* keyOverride, struct FText* Object_Name, struct FText* Action_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames");

	AinteractiveBaseObject_C_GetActionNames_Params params;
	params.OverrideKey = OverrideKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (keyOverride != nullptr)
		*keyOverride = params.keyOverride;
	if (Object_Name != nullptr)
		*Object_Name = params.Object_Name;
	if (Action_Name != nullptr)
		*Action_Name = params.Action_Name;
}


// Function interactiveBaseObject.interactiveBaseObject_C.beenActivated
// (Public, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::beenActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.beenActivated");

	AinteractiveBaseObject_C_beenActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript");

	AinteractiveBaseObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AinteractiveBaseObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay");

	AinteractiveBaseObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinteractiveBaseObject_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick");

	AinteractiveBaseObject_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial
// (BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::adaptPlaceMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial");

	AinteractiveBaseObject_C_adaptPlaceMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo
// (BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::SetAsGizmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo");

	AinteractiveBaseObject_C_SetAsGizmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinteractiveBaseObject_C::ExecuteUbergraph_interactiveBaseObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject");

	AinteractiveBaseObject_C_ExecuteUbergraph_interactiveBaseObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
