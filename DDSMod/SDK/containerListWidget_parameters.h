#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function containerListWidget.containerListWidget_C.showQunatityDialogue
struct UcontainerListWidget_C_showQunatityDialogue_Params
{
	int                                                InMaxQuantity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UinventoryItemWidget_C*                      Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.processDropOperation
struct UcontainerListWidget_C_processDropOperation_Params
{
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.checkSource
struct UcontainerListWidget_C_checkSource_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanDrop;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.renderTradeItems
struct UcontainerListWidget_C_renderTradeItems_Params
{
};

// Function containerListWidget.containerListWidget_C.manageItemContents
struct UcontainerListWidget_C_manageItemContents_Params
{
	struct FinventoryItemStruct                        itemData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.OnDrop
struct UcontainerListWidget_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.clearContainer
struct UcontainerListWidget_C_clearContainer_Params
{
};

// Function containerListWidget.containerListWidget_C.addContainerItem
struct UcontainerListWidget_C_addContainerItem_Params
{
	class UinventoryItemWidget_C*                      itemWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.Construct
struct UcontainerListWidget_C_Construct_Params
{
};

// Function containerListWidget.containerListWidget_C.Tick
struct UcontainerListWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.OnDragEnter
struct UcontainerListWidget_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.OnDragLeave
struct UcontainerListWidget_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UcontainerListWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerListWidget.containerListWidget_C.BndEvt__btnQuanOK_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UcontainerListWidget_C_BndEvt__btnQuanOK_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function containerListWidget.containerListWidget_C.BndEvt__btnQuanCancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UcontainerListWidget_C_BndEvt__btnQuanCancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function containerListWidget.containerListWidget_C.ExecuteUbergraph_containerListWidget
struct UcontainerListWidget_C_ExecuteUbergraph_containerListWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
