
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function streetLantern.streetLantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstreetLantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.UserConstructionScript");

	AstreetLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AstreetLantern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.ReceiveBeginPlay");

	AstreetLantern_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.eventLightChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreetLantern_C::eventLightChange(bool* on)
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.eventLightChange");

	AstreetLantern_C_eventLightChange_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.checkDayTime
// (BlueprintCallable, BlueprintEvent)

void AstreetLantern_C::checkDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.checkDayTime");

	AstreetLantern_C_checkDayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.repairLantern
// (BlueprintCallable, BlueprintEvent)

void AstreetLantern_C::repairLantern()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.repairLantern");

	AstreetLantern_C_repairLantern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.updatePlayerDistance
// (BlueprintCallable, BlueprintEvent)

void AstreetLantern_C::updatePlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.updatePlayerDistance");

	AstreetLantern_C_updatePlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.openOutLightRange
// (BlueprintCallable, BlueprintEvent)

void AstreetLantern_C::openOutLightRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.openOutLightRange");

	AstreetLantern_C_openOutLightRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.farDistancePlayerCheck
// (BlueprintCallable, BlueprintEvent)

void AstreetLantern_C::farDistancePlayerCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.farDistancePlayerCheck");

	AstreetLantern_C_farDistancePlayerCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.BndEvt__proximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AstreetLantern_C::BndEvt__proximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.BndEvt__proximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AstreetLantern_C_BndEvt__proximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function streetLantern.streetLantern_C.BndEvt__proximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreetLantern_C::BndEvt__proximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.BndEvt__proximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AstreetLantern_C_BndEvt__proximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streetLantern.streetLantern_C.ExecuteUbergraph_streetLantern
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreetLantern_C::ExecuteUbergraph_streetLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function streetLantern.streetLantern_C.ExecuteUbergraph_streetLantern");

	AstreetLantern_C_ExecuteUbergraph_streetLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
