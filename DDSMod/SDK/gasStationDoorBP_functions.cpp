
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

// Function gasStationDoorBP.gasStationDoorBP_C.playDoorSound
// (Public, BlueprintCallable, BlueprintEvent)

void AgasStationDoorBP_C::playDoorSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.playDoorSound");

	AgasStationDoorBP_C_playDoorSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AgasStationDoorBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.UserConstructionScript");

	AgasStationDoorBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.openPercent__FinishedFunc
// (BlueprintEvent)

void AgasStationDoorBP_C::openPercent__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.openPercent__FinishedFunc");

	AgasStationDoorBP_C_openPercent__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.openPercent__UpdateFunc
// (BlueprintEvent)

void AgasStationDoorBP_C::openPercent__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.openPercent__UpdateFunc");

	AgasStationDoorBP_C_openPercent__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AgasStationDoorBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.ReceiveBeginPlay");

	AgasStationDoorBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgasStationDoorBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.ReceiveTick");

	AgasStationDoorBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.openDoor
// (BlueprintCallable, BlueprintEvent)

void AgasStationDoorBP_C::openDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.openDoor");

	AgasStationDoorBP_C_openDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.closeDoor
// (BlueprintCallable, BlueprintEvent)

void AgasStationDoorBP_C::closeDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.closeDoor");

	AgasStationDoorBP_C_closeDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AgasStationDoorBP_C::BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AgasStationDoorBP_C_BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gasStationDoorBP.gasStationDoorBP_C.ExecuteUbergraph_gasStationDoorBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgasStationDoorBP_C::ExecuteUbergraph_gasStationDoorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gasStationDoorBP.gasStationDoorBP_C.ExecuteUbergraph_gasStationDoorBP");

	AgasStationDoorBP_C_ExecuteUbergraph_gasStationDoorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
