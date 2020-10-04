
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

// Function bankAppWidget.bankAppWidget_C.renderHistory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UbankAppWidget_C::renderHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function bankAppWidget.bankAppWidget_C.renderHistory");

	UbankAppWidget_C_renderHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bankAppWidget.bankAppWidget_C.renderMoneyAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   AmountText                     (Parm, OutParm)

void UbankAppWidget_C::renderMoneyAmount(struct FText* AmountText)
{
	static auto fn = UObject::FindObject<UFunction>("Function bankAppWidget.bankAppWidget_C.renderMoneyAmount");

	UbankAppWidget_C_renderMoneyAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmountText != nullptr)
		*AmountText = params.AmountText;
}


// Function bankAppWidget.bankAppWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UbankAppWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bankAppWidget.bankAppWidget_C.Construct");

	UbankAppWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bankAppWidget.bankAppWidget_C.BndEvt__btnSummaryTab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UbankAppWidget_C::BndEvt__btnSummaryTab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bankAppWidget.bankAppWidget_C.BndEvt__btnSummaryTab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UbankAppWidget_C_BndEvt__btnSummaryTab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bankAppWidget.bankAppWidget_C.BndEvt__btnLoansTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UbankAppWidget_C::BndEvt__btnLoansTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bankAppWidget.bankAppWidget_C.BndEvt__btnLoansTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UbankAppWidget_C_BndEvt__btnLoansTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bankAppWidget.bankAppWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UbankAppWidget_C::BndEvt__btnClose_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bankAppWidget.bankAppWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UbankAppWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bankAppWidget.bankAppWidget_C.ExecuteUbergraph_bankAppWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbankAppWidget_C::ExecuteUbergraph_bankAppWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bankAppWidget.bankAppWidget_C.ExecuteUbergraph_bankAppWidget");

	UbankAppWidget_C_ExecuteUbergraph_bankAppWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
