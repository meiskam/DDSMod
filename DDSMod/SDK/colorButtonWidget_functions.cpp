
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

// Function colorButtonWidget.colorButtonWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UlabelEditWidget_C*      Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FColor                  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcolorButtonWidget_C::setup(class UlabelEditWidget_C* Parent, const struct FColor& Color, int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorButtonWidget.colorButtonWidget_C.setup");

	UcolorButtonWidget_C_setup_Params params;
	params.Parent = Parent;
	params.Color = Color;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorButtonWidget.colorButtonWidget_C.BndEvt__btnColor_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UcolorButtonWidget_C::BndEvt__btnColor_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function colorButtonWidget.colorButtonWidget_C.BndEvt__btnColor_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UcolorButtonWidget_C_BndEvt__btnColor_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function colorButtonWidget.colorButtonWidget_C.ExecuteUbergraph_colorButtonWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcolorButtonWidget_C::ExecuteUbergraph_colorButtonWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function colorButtonWidget.colorButtonWidget_C.ExecuteUbergraph_colorButtonWidget");

	UcolorButtonWidget_C_ExecuteUbergraph_colorButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
