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

// Function mainMenuPawn.mainMenuPawn_C.UserConstructionScript
struct AmainMenuPawn_C_UserConstructionScript_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.zoomIn__FinishedFunc
struct AmainMenuPawn_C_zoomIn__FinishedFunc_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.zoomIn__UpdateFunc
struct AmainMenuPawn_C_zoomIn__UpdateFunc_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__FinishedFunc
struct AmainMenuPawn_C_CamZoomLoop__FinishedFunc_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__UpdateFunc
struct AmainMenuPawn_C_CamZoomLoop__UpdateFunc_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.museicFade__FinishedFunc
struct AmainMenuPawn_C_museicFade__FinishedFunc_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.museicFade__UpdateFunc
struct AmainMenuPawn_C_museicFade__UpdateFunc_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.ReceiveBeginPlay
struct AmainMenuPawn_C_ReceiveBeginPlay_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.fadeOutMusic
struct AmainMenuPawn_C_fadeOutMusic_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.startMusic
struct AmainMenuPawn_C_startMusic_Params
{
};

// Function mainMenuPawn.mainMenuPawn_C.updateCamSlide
struct AmainMenuPawn_C_updateCamSlide_Params
{
	float                                              CamX;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CamY;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainMenuPawn.mainMenuPawn_C.BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
struct AmainMenuPawn_C_BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainMenuPawn.mainMenuPawn_C.ExecuteUbergraph_mainMenuPawn
struct AmainMenuPawn_C_ExecuteUbergraph_mainMenuPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
