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

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.getMaxQuantity
struct UitemDropQuantityWidget_C_getMaxQuantity_Params
{
	struct FString                                     TargetString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                sourceQuan;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MaxQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.PreConstruct
struct UitemDropQuantityWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.Construct
struct UitemDropQuantityWidget_C_Construct_Params
{
};

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UitemDropQuantityWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.setup
struct UitemDropQuantityWidget_C_setup_Params
{
	struct FString                                     TargetString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                QuanMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UinventoryItemWidget_C*                      Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
struct UitemDropQuantityWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UitemDropQuantityWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.ExecuteUbergraph_itemDropQuantityWidget
struct UitemDropQuantityWidget_C_ExecuteUbergraph_itemDropQuantityWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
