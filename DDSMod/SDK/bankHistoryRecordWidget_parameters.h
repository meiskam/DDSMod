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

// Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.setup
struct UbankHistoryRecordWidget_C_setup_Params
{
	struct FText                                       Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.ExecuteUbergraph_bankHistoryRecordWidget
struct UbankHistoryRecordWidget_C_ExecuteUbergraph_bankHistoryRecordWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
