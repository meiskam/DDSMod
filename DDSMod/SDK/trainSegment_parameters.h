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

// Function trainSegment.trainSegment_C.turnOffset
struct AtrainSegment_C_turnOffset_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function trainSegment.trainSegment_C.UserConstructionScript
struct AtrainSegment_C_UserConstructionScript_Params
{
};

// Function trainSegment.trainSegment_C.ReceiveBeginPlay
struct AtrainSegment_C_ReceiveBeginPlay_Params
{
};

// Function trainSegment.trainSegment_C.ReceiveTick
struct AtrainSegment_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function trainSegment.trainSegment_C.AnihilateTrain
struct AtrainSegment_C_AnihilateTrain_Params
{
};

// Function trainSegment.trainSegment_C.playHorn
struct AtrainSegment_C_playHorn_Params
{
};

// Function trainSegment.trainSegment_C.trainShake
struct AtrainSegment_C_trainShake_Params
{
};

// Function trainSegment.trainSegment_C.ExecuteUbergraph_trainSegment
struct AtrainSegment_C_ExecuteUbergraph_trainSegment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
