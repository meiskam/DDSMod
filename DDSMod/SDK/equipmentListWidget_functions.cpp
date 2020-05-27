
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

// Function equipmentListWidget.equipmentListWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    eqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentListWidget_C::setup(const struct FappartmentEquipment& eqData, int Quantity, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.setup");

	UequipmentListWidget_C_setup_Params params;
	params.eqData = eqData;
	params.Quantity = Quantity;
	params.selected = selected;

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
