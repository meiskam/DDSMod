
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

// Function orderDropOverlay.orderDropOverlay_C.Get_btnEvenCrypto_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UorderDropOverlay_C::Get_btnEvenCrypto_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.Get_btnEvenCrypto_ToolTipWidget_1");

	UorderDropOverlay_C_Get_btnEvenCrypto_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function orderDropOverlay.orderDropOverlay_C.calcCryptoBoost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowRaise                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UorderDropOverlay_C::calcCryptoBoost(bool AllowRaise)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.calcCryptoBoost");

	UorderDropOverlay_C_calcCryptoBoost_Params params;
	params.AllowRaise = AllowRaise;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.checkOrderButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UorderDropOverlay_C::checkOrderButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.checkOrderButtons");

	UorderDropOverlay_C_checkOrderButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.removeFromOrder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UorderDropOverlay_C::removeFromOrder(const struct FdrugData& drugData)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.removeFromOrder");

	UorderDropOverlay_C_removeFromOrder_Params params;
	params.drugData = drugData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.recalcTotalOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UorderDropOverlay_C::recalcTotalOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.recalcTotalOrder");

	UorderDropOverlay_C_recalcTotalOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.displayAddMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UorderDropOverlay_C::displayAddMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.displayAddMessage");

	UorderDropOverlay_C_displayAddMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.sortGrid
// (Public, BlueprintCallable, BlueprintEvent)

void UorderDropOverlay_C::sortGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.sortGrid");

	UorderDropOverlay_C_sortGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UorderDropOverlay_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragDetected");

	UorderDropOverlay_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function orderDropOverlay.orderDropOverlay_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UorderDropOverlay_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDrop");

	UorderDropOverlay_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function orderDropOverlay.orderDropOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UorderDropOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.Construct");

	UorderDropOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UorderDropOverlay_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragCancelled");

	UorderDropOverlay_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UorderDropOverlay_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragEnter");

	UorderDropOverlay_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UorderDropOverlay_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragLeave");

	UorderDropOverlay_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UorderDropOverlay_C::BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UorderDropOverlay_C_BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UorderDropOverlay_C::BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UorderDropOverlay_C_BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UorderDropOverlay_C::BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UorderDropOverlay_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UorderDropOverlay_C::BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UorderDropOverlay_C_BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UorderDropOverlay_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UorderDropOverlay_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UorderDropOverlay_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UorderDropOverlay_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UorderDropOverlay_C::BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UorderDropOverlay_C_BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderDropOverlay.orderDropOverlay_C.ExecuteUbergraph_orderDropOverlay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UorderDropOverlay_C::ExecuteUbergraph_orderDropOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.ExecuteUbergraph_orderDropOverlay");

	UorderDropOverlay_C_ExecuteUbergraph_orderDropOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
