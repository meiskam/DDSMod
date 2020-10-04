
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

// Function workStationListWidget.workStationListWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FappartmentEquipment    EqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationListWidget_C::setup(const struct FinventoryItemStruct& InventoryData, int quantity, bool Equipment, const struct FappartmentEquipment& EqData, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.setup");

	UworkStationListWidget_C_setup_Params params;
	params.InventoryData = InventoryData;
	params.quantity = quantity;
	params.Equipment = Equipment;
	params.EqData = EqData;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationListWidget_C::ExecuteUbergraph_workStationListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget");

	UworkStationListWidget_C_ExecuteUbergraph_workStationListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
