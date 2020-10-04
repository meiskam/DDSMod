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

// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.getPackageIcon
struct AtempInfiniteDrugSource_C_getPackageIcon_Params
{
	int                                                Quan;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EdrugForm>                             Form;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.UserConstructionScript
struct AtempInfiniteDrugSource_C_UserConstructionScript_Params
{
};

// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ReceiveBeginPlay
struct AtempInfiniteDrugSource_C_ReceiveBeginPlay_Params
{
};

// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.resupplySource
struct AtempInfiniteDrugSource_C_resupplySource_Params
{
};

// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ExecuteUbergraph_tempInfiniteDrugSource
struct AtempInfiniteDrugSource_C_ExecuteUbergraph_tempInfiniteDrugSource_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
