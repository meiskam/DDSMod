
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

// Function burningTires.burningTires_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AburningTires_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.UserConstructionScript");

	AburningTires_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function burningTires.burningTires_C.lightIntensity__FinishedFunc
// (BlueprintEvent)

void AburningTires_C::lightIntensity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.lightIntensity__FinishedFunc");

	AburningTires_C_lightIntensity__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function burningTires.burningTires_C.lightIntensity__UpdateFunc
// (BlueprintEvent)

void AburningTires_C::lightIntensity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.lightIntensity__UpdateFunc");

	AburningTires_C_lightIntensity__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function burningTires.burningTires_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AburningTires_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.ReceiveBeginPlay");

	AburningTires_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function burningTires.burningTires_C.extinguish
// (BlueprintCallable, BlueprintEvent)

void AburningTires_C::extinguish()
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.extinguish");

	AburningTires_C_extinguish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function burningTires.burningTires_C.stopTimeline
// (BlueprintCallable, BlueprintEvent)

void AburningTires_C::stopTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.stopTimeline");

	AburningTires_C_stopTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function burningTires.burningTires_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AburningTires_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AburningTires_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function burningTires.burningTires_C.ExecuteUbergraph_burningTires
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AburningTires_C::ExecuteUbergraph_burningTires(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function burningTires.burningTires_C.ExecuteUbergraph_burningTires");

	AburningTires_C_ExecuteUbergraph_burningTires_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
