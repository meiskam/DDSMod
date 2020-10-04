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

// Function UnlockedAreaData.UnlockedAreaData_C.Get_reqPanel_ToolTipWidget_1
struct UUnlockedAreaData_C_Get_reqPanel_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnlockedAreaData.UnlockedAreaData_C.Get_reqPanel_ToolTipText_1
struct UUnlockedAreaData_C_Get_reqPanel_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnlockedAreaData.UnlockedAreaData_C.Get_reqPanel_Visibility_1
struct UUnlockedAreaData_C_Get_reqPanel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnlockedAreaData.UnlockedAreaData_C.GetToolTipWidget_2
struct UUnlockedAreaData_C_GetToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnlockedAreaData.UnlockedAreaData_C.GetToolTipWidget_1
struct UUnlockedAreaData_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnlockedAreaData.UnlockedAreaData_C.Get_progUnlock_ToolTipWidget_1
struct UUnlockedAreaData_C_Get_progUnlock_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnlockedAreaData.UnlockedAreaData_C.Get_respectBarsPanel_ToolTipWidget_1
struct UUnlockedAreaData_C_Get_respectBarsPanel_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnlockedAreaData.UnlockedAreaData_C.Construct
struct UUnlockedAreaData_C_Construct_Params
{
};

// Function UnlockedAreaData.UnlockedAreaData_C.setup
struct UUnlockedAreaData_C_setup_Params
{
	struct FText                                       AreaNam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ExpVal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpClamp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpMax;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AreaUnlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AreaAvailable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     areaString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       reqArea;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              reqRespect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                reqLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReqAreaExp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnlockedAreaData.UnlockedAreaData_C.BndEvt__btnUnlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUnlockedAreaData_C_BndEvt__btnUnlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UnlockedAreaData.UnlockedAreaData_C.updateExposureBar
struct UUnlockedAreaData_C_updateExposureBar_Params
{
};

// Function UnlockedAreaData.UnlockedAreaData_C.ExecuteUbergraph_UnlockedAreaData
struct UUnlockedAreaData_C_ExecuteUbergraph_UnlockedAreaData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
