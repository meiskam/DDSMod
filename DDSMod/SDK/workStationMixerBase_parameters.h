#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function workStationMixerBase.workStationMixerBase_C.calcByStrengthening
struct AworkStationMixerBase_C_calcByStrengthening_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              differenceMultiplier;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strengthening;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function workStationMixerBase.workStationMixerBase_C.calcPrecision
struct AworkStationMixerBase_C_calcPrecision_Params
{
	float                                              paramIn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              paramOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function workStationMixerBase.workStationMixerBase_C.processMix
struct AworkStationMixerBase_C_processMix_Params
{
	struct FdrugData                                   mixProduct;                                               // (Parm, OutParm)
	float                                              mixProductAmount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function workStationMixerBase.workStationMixerBase_C.showAddPopup
struct AworkStationMixerBase_C_showAddPopup_Params
{
	class AinteractiveBaseObject_C*                    substanceRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationMixerBase.workStationMixerBase_C.UserConstructionScript
struct AworkStationMixerBase_C_UserConstructionScript_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.applyMix
struct AworkStationMixerBase_C_applyMix_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.workFinished
struct AworkStationMixerBase_C_workFinished_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.addSubstance
struct AworkStationMixerBase_C_addSubstance_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.displayMixDetails
struct AworkStationMixerBase_C_displayMixDetails_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.ReceiveBeginPlay
struct AworkStationMixerBase_C_ReceiveBeginPlay_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.displayApllyMix
struct AworkStationMixerBase_C_displayApllyMix_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.tryAddSubstance
struct AworkStationMixerBase_C_tryAddSubstance_Params
{
};

// Function workStationMixerBase.workStationMixerBase_C.ExecuteUbergraph_workStationMixerBase
struct AworkStationMixerBase_C_ExecuteUbergraph_workStationMixerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
