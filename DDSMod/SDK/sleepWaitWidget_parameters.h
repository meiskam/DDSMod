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

// Function sleepWaitWidget.sleepWaitWidget_C.Construct
struct UsleepWaitWidget_C_Construct_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.Tick
struct UsleepWaitWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sleepWaitWidget.sleepWaitWidget_C.changeHour
struct UsleepWaitWidget_C_changeHour_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sleepWaitWidget.sleepWaitWidget_C.changeMinute
struct UsleepWaitWidget_C_changeMinute_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UsleepWaitWidget_C_BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UsleepWaitWidget_C_BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UsleepWaitWidget_C_BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UsleepWaitWidget_C_BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UsleepWaitWidget_C_BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UsleepWaitWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.setup
struct UsleepWaitWidget_C_setup_Params
{
	bool                                               Sleep;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sleepWaitWidget.sleepWaitWidget_C.Destruct
struct UsleepWaitWidget_C_Destruct_Params
{
};

// Function sleepWaitWidget.sleepWaitWidget_C.ExecuteUbergraph_sleepWaitWidget
struct UsleepWaitWidget_C_ExecuteUbergraph_sleepWaitWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
