
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkBackpackForIllegals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AbackpackBase_C*         Backpack                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APM_CheckpointGuard_C::checkBackpackForIllegals(class AbackpackBase_C* Backpack, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkBackpackForIllegals");

	APM_CheckpointGuard_C_checkBackpackForIllegals_Params params;
	params.Backpack = Backpack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.UserConstructionScript");

	APM_CheckpointGuard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APM_CheckpointGuard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveBeginPlay");

	APM_CheckpointGuard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_CheckpointGuard_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveTick");

	APM_CheckpointGuard_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkTrespass
// (BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::checkTrespass()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkTrespass");

	APM_CheckpointGuard_C_checkTrespass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APM_CheckpointGuard_C::BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APM_CheckpointGuard_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ControlEnded
// (BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::ControlEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ControlEnded");

	APM_CheckpointGuard_C_ControlEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.breakControl
// (BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::breakControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.breakControl");

	APM_CheckpointGuard_C_breakControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.EngageSuspect
// (BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::EngageSuspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.EngageSuspect");

	APM_CheckpointGuard_C_EngageSuspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.setSuicideTimer
// (BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::setSuicideTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.setSuicideTimer");

	APM_CheckpointGuard_C_setSuicideTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.trySuicide
// (BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::trySuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.trySuicide");

	APM_CheckpointGuard_C_trySuicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.overrideSearch
// (BlueprintCallable, BlueprintEvent)

void APM_CheckpointGuard_C::overrideSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.overrideSearch");

	APM_CheckpointGuard_C_overrideSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ExecuteUbergraph_PM_CheckpointGuard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_CheckpointGuard_C::ExecuteUbergraph_PM_CheckpointGuard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CheckpointGuard.PM_CheckpointGuard_C.ExecuteUbergraph_PM_CheckpointGuard");

	APM_CheckpointGuard_C_ExecuteUbergraph_PM_CheckpointGuard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
