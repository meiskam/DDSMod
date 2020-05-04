
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function containerListWidget.containerListWidget_C.showQunatityDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InMaxQuantity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UinventoryItemWidget_C*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UcontainerListWidget_C::showQunatityDialogue(int InMaxQuantity, class UinventoryItemWidget_C* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.showQunatityDialogue");

	UcontainerListWidget_C_showQunatityDialogue_Params params;
	params.InMaxQuantity = InMaxQuantity;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.processDropOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::processDropOperation(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.processDropOperation");

	UcontainerListWidget_C_processDropOperation_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.checkSource
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanDrop                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::checkSource(class UObject* Object, const struct FString& Tag, bool* CanDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.checkSource");

	UcontainerListWidget_C_checkSource_Params params;
	params.Object = Object;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDrop != nullptr)
		*CanDrop = params.CanDrop;
}


// Function containerListWidget.containerListWidget_C.renderTradeItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UcontainerListWidget_C::renderTradeItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.renderTradeItems");

	UcontainerListWidget_C_renderTradeItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.manageItemContents
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    itemData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::manageItemContents(const struct FinventoryItemStruct& itemData, const struct FString& Tag, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.manageItemContents");

	UcontainerListWidget_C_manageItemContents_Params params;
	params.itemData = itemData;
	params.Tag = Tag;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UcontainerListWidget_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.OnDrop");

	UcontainerListWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function containerListWidget.containerListWidget_C.clearContainer
// (Public, BlueprintCallable, BlueprintEvent)

void UcontainerListWidget_C::clearContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.clearContainer");

	UcontainerListWidget_C_clearContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.addContainerItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UinventoryItemWidget_C*  itemWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UcontainerListWidget_C::addContainerItem(class UinventoryItemWidget_C* itemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.addContainerItem");

	UcontainerListWidget_C_addContainerItem_Params params;
	params.itemWidget = itemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UcontainerListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.Construct");

	UcontainerListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.Tick");

	UcontainerListWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.OnDragEnter");

	UcontainerListWidget_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.OnDragLeave");

	UcontainerListWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::BndEvt__quantitySlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UcontainerListWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.BndEvt__btnQuanOK_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UcontainerListWidget_C::BndEvt__btnQuanOK_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.BndEvt__btnQuanOK_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UcontainerListWidget_C_BndEvt__btnQuanOK_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.BndEvt__btnQuanCancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UcontainerListWidget_C::BndEvt__btnQuanCancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.BndEvt__btnQuanCancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UcontainerListWidget_C_BndEvt__btnQuanCancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerListWidget.containerListWidget_C.ExecuteUbergraph_containerListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcontainerListWidget_C::ExecuteUbergraph_containerListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerListWidget.containerListWidget_C.ExecuteUbergraph_containerListWidget");

	UcontainerListWidget_C_ExecuteUbergraph_containerListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
