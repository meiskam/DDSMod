
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

// Function labelEditWidget.labelEditWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlabelEditWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.Tick");

	UlabelEditWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AadditiveContainerBase_C* parentContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DefaultName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DisableCancel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlabelEditWidget_C::setup(class AadditiveContainerBase_C* parentContainer, const struct FText& DefaultName, bool DisableCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.setup");

	UlabelEditWidget_C_setup_Params params;
	params.parentContainer = parentContainer;
	params.DefaultName = DefaultName;
	params.DisableCancel = DisableCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UlabelEditWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UlabelEditWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UlabelEditWidget_C::BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UlabelEditWidget_C_BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UlabelEditWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.killMe");

	UlabelEditWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labelEditWidget.labelEditWidget_C.ExecuteUbergraph_labelEditWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlabelEditWidget_C::ExecuteUbergraph_labelEditWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labelEditWidget.labelEditWidget_C.ExecuteUbergraph_labelEditWidget");

	UlabelEditWidget_C_ExecuteUbergraph_labelEditWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
