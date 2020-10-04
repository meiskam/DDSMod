#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function useSlotWidget.useSlotWidget_C.GetToolTipWidget_1
struct UuseSlotWidget_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function useSlotWidget.useSlotWidget_C.createUsedPackage
struct UuseSlotWidget_C_createUsedPackage_Params
{
	struct FinventoryItemStruct                        NewData;                                                  // (Parm, OutParm)
	bool                                               UsedAll;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function useSlotWidget.useSlotWidget_C.useSlotItem
struct UuseSlotWidget_C_useSlotItem_Params
{
};

// Function useSlotWidget.useSlotWidget_C.clearSlot
struct UuseSlotWidget_C_clearSlot_Params
{
};

// Function useSlotWidget.useSlotWidget_C.checkItemAvailable
struct UuseSlotWidget_C_checkItemAvailable_Params
{
	bool                                               itemAvailable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function useSlotWidget.useSlotWidget_C.OnDrop
struct UuseSlotWidget_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function useSlotWidget.useSlotWidget_C.PreConstruct
struct UuseSlotWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function useSlotWidget.useSlotWidget_C.Construct
struct UuseSlotWidget_C_Construct_Params
{
};

// Function useSlotWidget.useSlotWidget_C.ExecuteUbergraph_useSlotWidget
struct UuseSlotWidget_C_ExecuteUbergraph_useSlotWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
