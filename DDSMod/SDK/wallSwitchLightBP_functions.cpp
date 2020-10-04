
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

// Function wallSwitchLightBP.wallSwitchLightBP_C.clearWidgetComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::clearWidgetComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.clearWidgetComponents");

	AwallSwitchLightBP_C_clearWidgetComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.UserConstructionScript");

	AwallSwitchLightBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AwallSwitchLightBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.ReceiveBeginPlay");

	AwallSwitchLightBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.activateSwitch
// (BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::activateSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.activateSwitch");

	AwallSwitchLightBP_C_activateSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.resetMe
// (BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::resetMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.resetMe");

	AwallSwitchLightBP_C_resetMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.drawCheck
// (BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::drawCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.drawCheck");

	AwallSwitchLightBP_C_drawCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AwallSwitchLightBP_C::BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AwallSwitchLightBP_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function wallSwitchLightBP.wallSwitchLightBP_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AwallSwitchLightBP_C::BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AwallSwitchLightBP_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.ExecuteUbergraph_wallSwitchLightBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AwallSwitchLightBP_C::ExecuteUbergraph_wallSwitchLightBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.ExecuteUbergraph_wallSwitchLightBP");

	AwallSwitchLightBP_C_ExecuteUbergraph_wallSwitchLightBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
