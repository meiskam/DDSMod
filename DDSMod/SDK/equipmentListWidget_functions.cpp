
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function equipmentListWidget.equipmentListWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    EqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentListWidget_C::setup(const struct FappartmentEquipment& EqData, int Quantity, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.setup");

	UequipmentListWidget_C_setup_Params params;
	params.EqData = EqData;
	params.Quantity = Quantity;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentListWidget_C::ExecuteUbergraph_equipmentListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget");

	UequipmentListWidget_C_ExecuteUbergraph_equipmentListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
