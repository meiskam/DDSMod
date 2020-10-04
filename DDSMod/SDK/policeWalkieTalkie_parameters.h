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

// Function policeWalkieTalkie.policeWalkieTalkie_C.checkDisplayWidget
struct ApoliceWalkieTalkie_C_checkDisplayWidget_Params
{
	class AplayerCharacterBP_C*                        PlayerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Display;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function policeWalkieTalkie.policeWalkieTalkie_C.UserConstructionScript
struct ApoliceWalkieTalkie_C_UserConstructionScript_Params
{
};

// Function policeWalkieTalkie.policeWalkieTalkie_C.ReceiveBeginPlay
struct ApoliceWalkieTalkie_C_ReceiveBeginPlay_Params
{
};

// Function policeWalkieTalkie.policeWalkieTalkie_C.playRadio
struct ApoliceWalkieTalkie_C_playRadio_Params
{
	class USoundBase*                                  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policeWalkieTalkie.policeWalkieTalkie_C.checkReasonToLive
struct ApoliceWalkieTalkie_C_checkReasonToLive_Params
{
};

// Function policeWalkieTalkie.policeWalkieTalkie_C.checkPlayerMoving
struct ApoliceWalkieTalkie_C_checkPlayerMoving_Params
{
};

// Function policeWalkieTalkie.policeWalkieTalkie_C.ExecuteUbergraph_policeWalkieTalkie
struct ApoliceWalkieTalkie_C_ExecuteUbergraph_policeWalkieTalkie_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
