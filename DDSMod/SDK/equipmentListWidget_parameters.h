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

// Function equipmentListWidget.equipmentListWidget_C.setup
struct UequipmentListWidget_C_setup_Params
{
	struct FappartmentEquipment                        eqData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget
struct UequipmentListWidget_C_ExecuteUbergraph_equipmentListWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
