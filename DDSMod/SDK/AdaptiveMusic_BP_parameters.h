#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.Randomization
struct AAdaptiveMusic_BP_C_Randomization_Params
{
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.UserConstructionScript
struct AAdaptiveMusic_BP_C_UserConstructionScript_Params
{
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__FinishedFunc
struct AAdaptiveMusic_BP_C_HideoutTransitionTimeline__FinishedFunc_Params
{
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__UpdateFunc
struct AAdaptiveMusic_BP_C_HideoutTransitionTimeline__UpdateFunc_Params
{
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.endChaseMusic
struct AAdaptiveMusic_BP_C_endChaseMusic_Params
{
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ReceiveTick
struct AAdaptiveMusic_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.InitiateMe
struct AAdaptiveMusic_BP_C_InitiateMe_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.StartChaseMusic
struct AAdaptiveMusic_BP_C_StartChaseMusic_Params
{
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature
struct AAdaptiveMusic_BP_C_BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayChaseMusic
struct AAdaptiveMusic_BP_C_PlayChaseMusic_Params
{
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayIntroMusic
struct AAdaptiveMusic_BP_C_PlayIntroMusic_Params
{
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayHideoutMusic
struct AAdaptiveMusic_BP_C_PlayHideoutMusic_Params
{
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
struct AAdaptiveMusic_BP_C_BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature
struct AAdaptiveMusic_BP_C_BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__dds-menu-intro-fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature
struct AAdaptiveMusic_BP_C_BndEvt__dds_menu_intro_fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ExecuteUbergraph_AdaptiveMusic_BP
struct AAdaptiveMusic_BP_C_ExecuteUbergraph_AdaptiveMusic_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
