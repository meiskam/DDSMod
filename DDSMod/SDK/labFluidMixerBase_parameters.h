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

// Function labFluidMixerBase.labFluidMixerBase_C.setEndMixForm
struct AlabFluidMixerBase_C_setEndMixForm_Params
{
	TEnumAsByte<EdrugForm>                             EndForm;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Humidity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function labFluidMixerBase.labFluidMixerBase_C.checkMixContents
struct AlabFluidMixerBase_C_checkMixContents_Params
{
	bool                                               LiquidFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function labFluidMixerBase.labFluidMixerBase_C.UserConstructionScript
struct AlabFluidMixerBase_C_UserConstructionScript_Params
{
};

// Function labFluidMixerBase.labFluidMixerBase_C.addSubstance
struct AlabFluidMixerBase_C_addSubstance_Params
{
};

// Function labFluidMixerBase.labFluidMixerBase_C.applyMix
struct AlabFluidMixerBase_C_applyMix_Params
{
};

// Function labFluidMixerBase.labFluidMixerBase_C.workFinished
struct AlabFluidMixerBase_C_workFinished_Params
{
};

// Function labFluidMixerBase.labFluidMixerBase_C.tryAddSubstance
struct AlabFluidMixerBase_C_tryAddSubstance_Params
{
};

// Function labFluidMixerBase.labFluidMixerBase_C.ExecuteUbergraph_labFluidMixerBase
struct AlabFluidMixerBase_C_ExecuteUbergraph_labFluidMixerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
