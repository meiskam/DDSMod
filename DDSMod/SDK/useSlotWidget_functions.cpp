
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

// Function useSlotWidget.useSlotWidget_C.GetToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UuseSlotWidget_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.GetToolTipWidget_1");

	UuseSlotWidget_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function useSlotWidget.useSlotWidget_C.createUsedPackage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FinventoryItemStruct    NewData                        (Parm, OutParm)
// bool                           UsedAll                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UuseSlotWidget_C::createUsedPackage(struct FinventoryItemStruct* NewData, bool* UsedAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.createUsedPackage");

	UuseSlotWidget_C_createUsedPackage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewData != nullptr)
		*NewData = params.NewData;
	if (UsedAll != nullptr)
		*UsedAll = params.UsedAll;
}


// Function useSlotWidget.useSlotWidget_C.useSlotItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UuseSlotWidget_C::useSlotItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.useSlotItem");

	UuseSlotWidget_C_useSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function useSlotWidget.useSlotWidget_C.clearSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UuseSlotWidget_C::clearSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.clearSlot");

	UuseSlotWidget_C_clearSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function useSlotWidget.useSlotWidget_C.checkItemAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           itemAvailable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UuseSlotWidget_C::checkItemAvailable(bool* itemAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.checkItemAvailable");

	UuseSlotWidget_C_checkItemAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemAvailable != nullptr)
		*itemAvailable = params.itemAvailable;
}


// Function useSlotWidget.useSlotWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UuseSlotWidget_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.OnDrop");

	UuseSlotWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function useSlotWidget.useSlotWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UuseSlotWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.PreConstruct");

	UuseSlotWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function useSlotWidget.useSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UuseSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.Construct");

	UuseSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function useSlotWidget.useSlotWidget_C.ExecuteUbergraph_useSlotWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UuseSlotWidget_C::ExecuteUbergraph_useSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function useSlotWidget.useSlotWidget_C.ExecuteUbergraph_useSlotWidget");

	UuseSlotWidget_C_ExecuteUbergraph_useSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
