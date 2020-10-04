
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

// Function popupFrame.popupFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpopupFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.Construct");

	UpopupFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popupFrame.popupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpopupFrame_C::BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UpopupFrame_C_BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popupFrame.popupFrame_C.configure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PopupTitle                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   PopupDesc                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ShowMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpopupFrame_C::configure(const struct FText& PopupTitle, const struct FText& PopupDesc, const struct FText& ButtonText, bool ShowMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.configure");

	UpopupFrame_C_configure_Params params;
	params.PopupTitle = PopupTitle;
	params.PopupDesc = PopupDesc;
	params.ButtonText = ButtonText;
	params.ShowMouse = ShowMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popupFrame.popupFrame_C.killWidget
// (BlueprintCallable, BlueprintEvent)

void UpopupFrame_C::killWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.killWidget");

	UpopupFrame_C_killWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popupFrame.popupFrame_C.ExecuteUbergraph_popupFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpopupFrame_C::ExecuteUbergraph_popupFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function popupFrame.popupFrame_C.ExecuteUbergraph_popupFrame");

	UpopupFrame_C_ExecuteUbergraph_popupFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
