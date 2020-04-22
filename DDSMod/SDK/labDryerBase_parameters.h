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

// Function labDryerBase.labDryerBase_C.calcProperties
struct AlabDryerBase_C_calcProperties_Params
{
	float                                              inParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function labDryerBase.labDryerBase_C.makeFinalDrugForm
struct AlabDryerBase_C_makeFinalDrugForm_Params
{
	TEnumAsByte<EdrugForm>                             In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EdrugForm>                             OutDried;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function labDryerBase.labDryerBase_C.UserConstructionScript
struct AlabDryerBase_C_UserConstructionScript_Params
{
};

// Function labDryerBase.labDryerBase_C.addSubstance
struct AlabDryerBase_C_addSubstance_Params
{
};

// Function labDryerBase.labDryerBase_C.tryAddSubstance
struct AlabDryerBase_C_tryAddSubstance_Params
{
};

// Function labDryerBase.labDryerBase_C.workFinished
struct AlabDryerBase_C_workFinished_Params
{
};

// Function labDryerBase.labDryerBase_C.startDrying
struct AlabDryerBase_C_startDrying_Params
{
};

// Function labDryerBase.labDryerBase_C.ExecuteUbergraph_labDryerBase
struct AlabDryerBase_C_ExecuteUbergraph_labDryerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
