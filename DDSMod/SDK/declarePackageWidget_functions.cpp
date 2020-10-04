
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

// Function declarePackageWidget.declarePackageWidget_C.changeQuantity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quan                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeclarePackageWidget_C::changeQuantity(int Quan)
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.changeQuantity");

	UdeclarePackageWidget_C_changeQuantity_Params params;
	params.Quan = Quan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.clearAllButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UdeclarePackageWidget_C::clearAllButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.clearAllButtons");

	UdeclarePackageWidget_C_clearAllButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeclarePackageWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.Tick");

	UdeclarePackageWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UpackageProductWidget_C* Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UdeclarePackageWidget_C::setup(class UpackageProductWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.setup");

	UdeclarePackageWidget_C_setup_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn1g_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn2g_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn5g_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn10g_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn20g_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btnSub5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btnSub_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btnAdd5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeclarePackageWidget_C::BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn3g_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn50g_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeclarePackageWidget_C::BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UdeclarePackageWidget_C_BndEvt__btn100g_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function declarePackageWidget.declarePackageWidget_C.ExecuteUbergraph_declarePackageWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeclarePackageWidget_C::ExecuteUbergraph_declarePackageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function declarePackageWidget.declarePackageWidget_C.ExecuteUbergraph_declarePackageWidget");

	UdeclarePackageWidget_C_ExecuteUbergraph_declarePackageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
