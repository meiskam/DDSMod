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

// Function checkOutListItemWidget.checkOutListItemWidget_C.setup
struct UcheckOutListItemWidget_C_setup_Params
{
	struct FappartmentEquipment                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEquipmentShopInterfaceWidget_C*             parentRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UcheckOutListItemWidget_C_BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UcheckOutListItemWidget_C_BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UcheckOutListItemWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function checkOutListItemWidget.checkOutListItemWidget_C.ExecuteUbergraph_checkOutListItemWidget
struct UcheckOutListItemWidget_C_ExecuteUbergraph_checkOutListItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
