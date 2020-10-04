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

// Function orderDropOverlay.orderDropOverlay_C.Get_btnEvenCrypto_ToolTipWidget_1
struct UorderDropOverlay_C_Get_btnEvenCrypto_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.calcCryptoBoost
struct UorderDropOverlay_C_calcCryptoBoost_Params
{
	bool                                               AllowRaise;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.checkOrderButtons
struct UorderDropOverlay_C_checkOrderButtons_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.removeFromOrder
struct UorderDropOverlay_C_removeFromOrder_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function orderDropOverlay.orderDropOverlay_C.recalcTotalOrder
struct UorderDropOverlay_C_recalcTotalOrder_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.displayAddMessage
struct UorderDropOverlay_C_displayAddMessage_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.sortGrid
struct UorderDropOverlay_C_sortGrid_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.OnDragDetected
struct UorderDropOverlay_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.OnDrop
struct UorderDropOverlay_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.Construct
struct UorderDropOverlay_C_Construct_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.OnDragCancelled
struct UorderDropOverlay_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.OnDragEnter
struct UorderDropOverlay_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.OnDragLeave
struct UorderDropOverlay_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UorderDropOverlay_C_BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UorderDropOverlay_C_BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UorderDropOverlay_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UorderDropOverlay_C_BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UorderDropOverlay_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UorderDropOverlay_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UorderDropOverlay_C_BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function orderDropOverlay.orderDropOverlay_C.ExecuteUbergraph_orderDropOverlay
struct UorderDropOverlay_C_ExecuteUbergraph_orderDropOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
