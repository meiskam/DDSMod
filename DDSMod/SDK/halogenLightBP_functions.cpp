
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

// Function halogenLightBP.halogenLightBP_C.lightTest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AhalogenLightBP_C::lightTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.lightTest");

	AhalogenLightBP_C_lightTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function halogenLightBP.halogenLightBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AhalogenLightBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.UserConstructionScript");

	AhalogenLightBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function halogenLightBP.halogenLightBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AhalogenLightBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.ReceiveBeginPlay");

	AhalogenLightBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AhalogenLightBP_C::BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	AhalogenLightBP_C_BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AhalogenLightBP_C::BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AhalogenLightBP_C_BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function halogenLightBP.halogenLightBP_C.endDetected
// (BlueprintCallable, BlueprintEvent)

void AhalogenLightBP_C::endDetected()
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.endDetected");

	AhalogenLightBP_C_endDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function halogenLightBP.halogenLightBP_C.turnLightOn
// (BlueprintCallable, BlueprintEvent)

void AhalogenLightBP_C::turnLightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.turnLightOn");

	AhalogenLightBP_C_turnLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function halogenLightBP.halogenLightBP_C.turnLightOff
// (BlueprintCallable, BlueprintEvent)

void AhalogenLightBP_C::turnLightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.turnLightOff");

	AhalogenLightBP_C_turnLightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function halogenLightBP.halogenLightBP_C.ExecuteUbergraph_halogenLightBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AhalogenLightBP_C::ExecuteUbergraph_halogenLightBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function halogenLightBP.halogenLightBP_C.ExecuteUbergraph_halogenLightBP");

	AhalogenLightBP_C_ExecuteUbergraph_halogenLightBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
