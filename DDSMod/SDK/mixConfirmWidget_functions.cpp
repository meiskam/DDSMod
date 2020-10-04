
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

// Function mixConfirmWidget.mixConfirmWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixConfirmWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixConfirmWidget.mixConfirmWidget_C.Tick");

	UmixConfirmWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixConfirmWidget.mixConfirmWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AworkStationMixerBase_C* Mixer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixConfirmWidget_C::setup(class AworkStationMixerBase_C* Mixer)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixConfirmWidget.mixConfirmWidget_C.setup");

	UmixConfirmWidget_C_setup_Params params;
	params.Mixer = Mixer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UmixConfirmWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UmixConfirmWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UmixConfirmWidget_C::BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UmixConfirmWidget_C_BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixConfirmWidget.mixConfirmWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UmixConfirmWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function mixConfirmWidget.mixConfirmWidget_C.killMe");

	UmixConfirmWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixConfirmWidget.mixConfirmWidget_C.ExecuteUbergraph_mixConfirmWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixConfirmWidget_C::ExecuteUbergraph_mixConfirmWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixConfirmWidget.mixConfirmWidget_C.ExecuteUbergraph_mixConfirmWidget");

	UmixConfirmWidget_C_ExecuteUbergraph_mixConfirmWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
