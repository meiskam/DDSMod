
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

// Function pickupItemBase.pickupItemBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApickupItemBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.UserConstructionScript");

	ApickupItemBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickupItemBase.pickupItemBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApickupItemBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.ReceiveBeginPlay");

	ApickupItemBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickupItemBase.pickupItemBase_C.objectPickup
// (BlueprintCallable, BlueprintEvent)

void ApickupItemBase_C::objectPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.objectPickup");

	ApickupItemBase_C_objectPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickupItemBase.pickupItemBase_C.pickupEventScript
// (BlueprintCallable, BlueprintEvent)

void ApickupItemBase_C::pickupEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.pickupEventScript");

	ApickupItemBase_C_pickupEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickupItemBase.pickupItemBase_C.setupItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Object_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Action_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Droped                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SimulatePhysics                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isGizmo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApickupItemBase_C::setupItem(const struct FinventoryItemStruct& Data, int quantity, const struct FText& Object_Name, const struct FText& Action_Name, bool Droped, bool SimulatePhysics, bool isGizmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.setupItem");

	ApickupItemBase_C_setupItem_Params params;
	params.Data = Data;
	params.quantity = quantity;
	params.Object_Name = Object_Name;
	params.Action_Name = Action_Name;
	params.Droped = Droped;
	params.SimulatePhysics = SimulatePhysics;
	params.isGizmo = isGizmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickupItemBase.pickupItemBase_C.resetDroped
// (BlueprintCallable, BlueprintEvent)

void ApickupItemBase_C::resetDroped()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.resetDroped");

	ApickupItemBase_C_resetDroped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickupItemBase.pickupItemBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApickupItemBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.ReceiveActorBeginOverlap");

	ApickupItemBase_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickupItemBase.pickupItemBase_C.ExecuteUbergraph_pickupItemBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApickupItemBase_C::ExecuteUbergraph_pickupItemBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.ExecuteUbergraph_pickupItemBase");

	ApickupItemBase_C_ExecuteUbergraph_pickupItemBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
