#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function musicAreaPlaylist.musicAreaPlaylist_C.getMusicVolume
struct AmusicAreaPlaylist_C_getMusicVolume_Params
{
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.areaMusicEnabled
struct AmusicAreaPlaylist_C_areaMusicEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.UserConstructionScript
struct AmusicAreaPlaylist_C_UserConstructionScript_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__FinishedFunc
struct AmusicAreaPlaylist_C_musicVolumeFade__FinishedFunc_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__UpdateFunc
struct AmusicAreaPlaylist_C_musicVolumeFade__UpdateFunc_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.ReceiveBeginPlay
struct AmusicAreaPlaylist_C_ReceiveBeginPlay_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.ActivateMusicInArea
struct AmusicAreaPlaylist_C_ActivateMusicInArea_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.endMusic
struct AmusicAreaPlaylist_C_endMusic_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.firstAreaInitiate
struct AmusicAreaPlaylist_C_firstAreaInitiate_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.bypassPlayMusic
struct AmusicAreaPlaylist_C_bypassPlayMusic_Params
{
};

// Function musicAreaPlaylist.musicAreaPlaylist_C.ExecuteUbergraph_musicAreaPlaylist
struct AmusicAreaPlaylist_C_ExecuteUbergraph_musicAreaPlaylist_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
