#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function atmUI.atmUI_C.renderMoneyAmount
struct UatmUI_C_renderMoneyAmount_Params
{
	struct FText                                       TextAmount;                                               // (Parm, OutParm)
};

// Function atmUI.atmUI_C.BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.withdrawMoney
struct UatmUI_C_withdrawMoney_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmUI.atmUI_C.BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UatmUI_C_BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmUI.atmUI_C.BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.Construct
struct UatmUI_C_Construct_Params
{
};

// Function atmUI.atmUI_C.depositeMoney
struct UatmUI_C_depositeMoney_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmUI.atmUI_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UatmUI_C_BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function atmUI.atmUI_C.ExecuteUbergraph_atmUI
struct UatmUI_C_ExecuteUbergraph_atmUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
