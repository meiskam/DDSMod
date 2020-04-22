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

// Function reputationChartWidget.reputationChartWidget_C.Update
struct UreputationChartWidget_C_Update_Params
{
	class AmainComputer_C*                             mainComputerRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AsalesManager_C*                             salesManagerRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AstatisticsManager_C*                        statManagerRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function reputationChartWidget.reputationChartWidget_C.ExecuteUbergraph_reputationChartWidget
struct UreputationChartWidget_C_ExecuteUbergraph_reputationChartWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
