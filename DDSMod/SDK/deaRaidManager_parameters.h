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

// Function deaRaidManager.deaRaidManager_C.countRaidSecondsTotal
struct AdeaRaidManager_C_countRaidSecondsTotal_Params
{
	int                                                secondsCounted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function deaRaidManager.deaRaidManager_C.UserConstructionScript
struct AdeaRaidManager_C_UserConstructionScript_Params
{
};

// Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__FinishedFunc
struct AdeaRaidManager_C_raidMusicFadeOut__FinishedFunc_Params
{
};

// Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__UpdateFunc
struct AdeaRaidManager_C_raidMusicFadeOut__UpdateFunc_Params
{
};

// Function deaRaidManager.deaRaidManager_C.ReceiveBeginPlay
struct AdeaRaidManager_C_ReceiveBeginPlay_Params
{
};

// Function deaRaidManager.deaRaidManager_C.ReceiveTick
struct AdeaRaidManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function deaRaidManager.deaRaidManager_C.StartKurwaRaid
struct AdeaRaidManager_C_StartKurwaRaid_Params
{
};

// Function deaRaidManager.deaRaidManager_C.raidCountdown
struct AdeaRaidManager_C_raidCountdown_Params
{
};

// Function deaRaidManager.deaRaidManager_C.overrideEndCountdown
struct AdeaRaidManager_C_overrideEndCountdown_Params
{
};

// Function deaRaidManager.deaRaidManager_C.fadeOutRaidMusic
struct AdeaRaidManager_C_fadeOutRaidMusic_Params
{
};

// Function deaRaidManager.deaRaidManager_C.checkPlayerRanAway
struct AdeaRaidManager_C_checkPlayerRanAway_Params
{
};

// Function deaRaidManager.deaRaidManager_C.ExecuteUbergraph_deaRaidManager
struct AdeaRaidManager_C_ExecuteUbergraph_deaRaidManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
