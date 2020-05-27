
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.Randomization
// (Public, BlueprintCallable, BlueprintEvent)

void AAdaptiveMusic_BP_C::Randomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.Randomization");

	AAdaptiveMusic_BP_C_Randomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAdaptiveMusic_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.UserConstructionScript");

	AAdaptiveMusic_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__FinishedFunc
// (BlueprintEvent)

void AAdaptiveMusic_BP_C::HideoutTransitionTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__FinishedFunc");

	AAdaptiveMusic_BP_C_HideoutTransitionTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__UpdateFunc
// (BlueprintEvent)

void AAdaptiveMusic_BP_C::HideoutTransitionTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__UpdateFunc");

	AAdaptiveMusic_BP_C_HideoutTransitionTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.endChaseMusic
// (BlueprintCallable, BlueprintEvent)

void AAdaptiveMusic_BP_C::endChaseMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.endChaseMusic");

	AAdaptiveMusic_BP_C_endChaseMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ReceiveTick");

	AAdaptiveMusic_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.InitiateMe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::InitiateMe(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.InitiateMe");

	AAdaptiveMusic_BP_C_InitiateMe_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.StartChaseMusic
// (BlueprintCallable, BlueprintEvent)

void AAdaptiveMusic_BP_C::StartChaseMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.StartChaseMusic");

	AAdaptiveMusic_BP_C_StartChaseMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature");

	AAdaptiveMusic_BP_C_BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayChaseMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::PlayChaseMusic(float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayChaseMusic");

	AAdaptiveMusic_BP_C_PlayChaseMusic_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayIntroMusic
// (BlueprintCallable, BlueprintEvent)

void AAdaptiveMusic_BP_C::PlayIntroMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayIntroMusic");

	AAdaptiveMusic_BP_C_PlayIntroMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayHideoutMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::PlayHideoutMusic(float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayHideoutMusic");

	AAdaptiveMusic_BP_C_PlayHideoutMusic_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature");

	AAdaptiveMusic_BP_C_BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature");

	AAdaptiveMusic_BP_C_BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__dds-menu-intro-fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::BndEvt__dds_menu_intro_fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__dds-menu-intro-fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature");

	AAdaptiveMusic_BP_C_BndEvt__dds_menu_intro_fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ExecuteUbergraph_AdaptiveMusic_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveMusic_BP_C::ExecuteUbergraph_AdaptiveMusic_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ExecuteUbergraph_AdaptiveMusic_BP");

	AAdaptiveMusic_BP_C_ExecuteUbergraph_AdaptiveMusic_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
