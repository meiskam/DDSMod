
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

// Function backpackSlotWidget.backpackSlotWidget_C.extractItemContents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            FromIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AitemInventoryHolder_C*  ItemHolderRef                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UbackpackSlotWidget_C::extractItemContents(const struct FString& Source, int FromIndex, class AitemInventoryHolder_C** ItemHolderRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.extractItemContents");

	UbackpackSlotWidget_C_extractItemContents_Params params;
	params.Source = Source;
	params.FromIndex = FromIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemHolderRef != nullptr)
		*ItemHolderRef = params.ItemHolderRef;
}


// Function backpackSlotWidget.backpackSlotWidget_C.setBackpack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           fromVendor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbackpackSlotWidget_C::setBackpack(class UDragDropOperation* Operation, const struct FinventoryItemStruct& Data, bool fromVendor)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.setBackpack");

	UbackpackSlotWidget_C_setBackpack_Params params;
	params.Operation = Operation;
	params.Data = Data;
	params.fromVendor = fromVendor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackSlotWidget.backpackSlotWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UbackpackSlotWidget_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDragDetected");

	UbackpackSlotWidget_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function backpackSlotWidget.backpackSlotWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UbackpackSlotWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnMouseButtonDown");

	UbackpackSlotWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function backpackSlotWidget.backpackSlotWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UbackpackSlotWidget_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDrop");

	UbackpackSlotWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function backpackSlotWidget.backpackSlotWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbackpackSlotWidget_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDragEnter");

	UbackpackSlotWidget_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackSlotWidget.backpackSlotWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbackpackSlotWidget_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDragLeave");

	UbackpackSlotWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackSlotWidget.backpackSlotWidget_C.clearBackpackSlot
// (BlueprintCallable, BlueprintEvent)

void UbackpackSlotWidget_C::clearBackpackSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.clearBackpackSlot");

	UbackpackSlotWidget_C_clearBackpackSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackSlotWidget.backpackSlotWidget_C.ExecuteUbergraph_backpackSlotWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbackpackSlotWidget_C::ExecuteUbergraph_backpackSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.ExecuteUbergraph_backpackSlotWidget");

	UbackpackSlotWidget_C_ExecuteUbergraph_backpackSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
