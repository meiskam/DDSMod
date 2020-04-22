
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

// Function sleepWaitWidget.sleepWaitWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsleepWaitWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.Construct");

	UsleepWaitWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsleepWaitWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.Tick");

	UsleepWaitWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.changeHour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsleepWaitWidget_C::changeHour(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.changeHour");

	UsleepWaitWidget_C_changeHour_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.changeMinute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsleepWaitWidget_C::changeMinute(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.changeMinute");

	UsleepWaitWidget_C_changeMinute_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsleepWaitWidget_C::BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UsleepWaitWidget_C_BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsleepWaitWidget_C::BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UsleepWaitWidget_C_BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsleepWaitWidget_C::BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UsleepWaitWidget_C_BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsleepWaitWidget_C::BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UsleepWaitWidget_C_BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsleepWaitWidget_C::BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UsleepWaitWidget_C_BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsleepWaitWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UsleepWaitWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sleep                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsleepWaitWidget_C::setup(bool Sleep)
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.setup");

	UsleepWaitWidget_C_setup_Params params;
	params.Sleep = Sleep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsleepWaitWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.Destruct");

	UsleepWaitWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sleepWaitWidget.sleepWaitWidget_C.ExecuteUbergraph_sleepWaitWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsleepWaitWidget_C::ExecuteUbergraph_sleepWaitWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sleepWaitWidget.sleepWaitWidget_C.ExecuteUbergraph_sleepWaitWidget");

	UsleepWaitWidget_C_ExecuteUbergraph_sleepWaitWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
