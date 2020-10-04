
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

// Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABird_Perch_TargetPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.UserConstructionScript");

	ABird_Perch_TargetPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.FlyToPerch__FinishedFunc
// (BlueprintEvent)

void ABird_Perch_TargetPoint_C::FlyToPerch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.FlyToPerch__FinishedFunc");

	ABird_Perch_TargetPoint_C_FlyToPerch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.FlyToPerch__UpdateFunc
// (BlueprintEvent)

void ABird_Perch_TargetPoint_C::FlyToPerch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.FlyToPerch__UpdateFunc");

	ABird_Perch_TargetPoint_C_FlyToPerch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABird_Perch_TargetPoint_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature");

	ABird_Perch_TargetPoint_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_35_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABird_Perch_TargetPoint_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_35_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_35_ComponentEndOverlapSignature__DelegateSignature");

	ABird_Perch_TargetPoint_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_35_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.ExecuteUbergraph_Bird_Perch_TargetPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABird_Perch_TargetPoint_C::ExecuteUbergraph_Bird_Perch_TargetPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.ExecuteUbergraph_Bird_Perch_TargetPoint");

	ABird_Perch_TargetPoint_C_ExecuteUbergraph_Bird_Perch_TargetPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
