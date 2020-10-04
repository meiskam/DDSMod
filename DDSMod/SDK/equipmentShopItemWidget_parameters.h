#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.Get_mainHolder_ToolTipWidget_1
struct UequipmentShopItemWidget_C_Get_mainHolder_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.setup
struct UequipmentShopItemWidget_C_setup_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEquipmentShopInterfaceWidget_C*             parentRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               checkedOut;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaitBoost;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UequipmentShopItemWidget_C_BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.ExecuteUbergraph_equipmentShopItemWidget
struct UequipmentShopItemWidget_C_ExecuteUbergraph_equipmentShopItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
