
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

// Function atmUI.atmUI_C.renderMoneyAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextAmount                     (Parm, OutParm)

void UatmUI_C::renderMoneyAmount(struct FText* TextAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.renderMoneyAmount");

	UatmUI_C_renderMoneyAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextAmount != nullptr)
		*TextAmount = params.TextAmount;
}


// Function atmUI.atmUI_C.BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.withdrawMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UatmUI_C::withdrawMoney(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.withdrawMoney");

	UatmUI_C_withdrawMoney_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UatmUI_C::BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UatmUI_C_BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UatmUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.Construct");

	UatmUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.depositeMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UatmUI_C::depositeMoney(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.depositeMoney");

	UatmUI_C_depositeMoney_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UatmUI_C::BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UatmUI_C_BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmUI.atmUI_C.ExecuteUbergraph_atmUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UatmUI_C::ExecuteUbergraph_atmUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.ExecuteUbergraph_atmUI");

	UatmUI_C_ExecuteUbergraph_atmUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
