#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function phoneCallWidget.phoneCallWidget_C.setup
struct UphoneCallWidget_C_setup_Params
{
	struct FText                                       CallerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                callerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               callDeclined;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CallTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function phoneCallWidget.phoneCallWidget_C.ExecuteUbergraph_phoneCallWidget
struct UphoneCallWidget_C_ExecuteUbergraph_phoneCallWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
