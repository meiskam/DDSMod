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

// Function skillLevelWidget.skillLevelWidget_C.GetToolTipWidget_1
struct UskillLevelWidget_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function skillLevelWidget.skillLevelWidget_C.updateActivity
struct UskillLevelWidget_C_updateActivity_Params
{
};

// Function skillLevelWidget.skillLevelWidget_C.Construct
struct UskillLevelWidget_C_Construct_Params
{
};

// Function skillLevelWidget.skillLevelWidget_C.Tick
struct UskillLevelWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function skillLevelWidget.skillLevelWidget_C.SetValues
struct UskillLevelWidget_C_SetValues_Params
{
	float                                              skillLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SkillMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function skillLevelWidget.skillLevelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UskillLevelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function skillLevelWidget.skillLevelWidget_C.ExecuteUbergraph_skillLevelWidget
struct UskillLevelWidget_C_ExecuteUbergraph_skillLevelWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
