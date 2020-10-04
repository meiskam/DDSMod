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

// Function DrugSalePoint.DrugSalePoint_C.peopleOverlaping
struct ADrugSalePoint_C_peopleOverlaping_Params
{
	bool                                               Clear;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugSalePoint.DrugSalePoint_C.UserConstructionScript
struct ADrugSalePoint_C_UserConstructionScript_Params
{
};

// Function DrugSalePoint.DrugSalePoint_C.ReceiveTick
struct ADrugSalePoint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugSalePoint.DrugSalePoint_C.ExecuteUbergraph_DrugSalePoint
struct ADrugSalePoint_C_ExecuteUbergraph_DrugSalePoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
