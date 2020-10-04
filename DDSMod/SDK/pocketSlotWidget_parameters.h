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

// Function pocketSlotWidget.pocketSlotWidget_C.checkDataSame
struct UpocketSlotWidget_C_checkDataSame_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CanDrop;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.showQuantityDialogue
struct UpocketSlotWidget_C_showQuantityDialogue_Params
{
	int                                                Quan;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UinventoryItemWidget_C*                      Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.processDropOperation
struct UpocketSlotWidget_C_processDropOperation_Params
{
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.checkSource
struct UpocketSlotWidget_C_checkSource_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanDrop;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.Get_itemIcon_ToolTipWidget_1
struct UpocketSlotWidget_C_Get_itemIcon_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.OnDragDetected
struct UpocketSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.OnMouseButtonDown
struct UpocketSlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function pocketSlotWidget.pocketSlotWidget_C.clearSlot
struct UpocketSlotWidget_C_clearSlot_Params
{
};

// Function pocketSlotWidget.pocketSlotWidget_C.OnDrop
struct UpocketSlotWidget_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.setSlot
struct UpocketSlotWidget_C_setSlot_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fromVendor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.OnDragLeave
struct UpocketSlotWidget_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.OnDragEnter
struct UpocketSlotWidget_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pocketSlotWidget.pocketSlotWidget_C.Construct
struct UpocketSlotWidget_C_Construct_Params
{
};

// Function pocketSlotWidget.pocketSlotWidget_C.ExecuteUbergraph_pocketSlotWidget
struct UpocketSlotWidget_C_ExecuteUbergraph_pocketSlotWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
