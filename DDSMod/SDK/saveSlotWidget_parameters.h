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

// Function saveSlotWidget.saveSlotWidget_C.OnMouseButtonDown
struct UsaveSlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function saveSlotWidget.saveSlotWidget_C.OnMouseButtonUp
struct UsaveSlotWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function saveSlotWidget.saveSlotWidget_C.setup
struct UsaveSlotWidget_C_setup_Params
{
	bool                                               Occupied;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotCustomName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     saveDateTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Slot_Num;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UsaveLoadWidget_C*                           Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function saveSlotWidget.saveSlotWidget_C.OnMouseEnter
struct UsaveSlotWidget_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function saveSlotWidget.saveSlotWidget_C.OnMouseLeave
struct UsaveSlotWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function saveSlotWidget.saveSlotWidget_C.ExecuteUbergraph_saveSlotWidget
struct UsaveSlotWidget_C_ExecuteUbergraph_saveSlotWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
