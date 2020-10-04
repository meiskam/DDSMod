
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function mainMenuPawn.mainMenuPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmainMenuPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.UserConstructionScript");

	AmainMenuPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.zoomIn__FinishedFunc
// (BlueprintEvent)

void AmainMenuPawn_C::zoomIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.zoomIn__FinishedFunc");

	AmainMenuPawn_C_zoomIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.zoomIn__UpdateFunc
// (BlueprintEvent)

void AmainMenuPawn_C::zoomIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.zoomIn__UpdateFunc");

	AmainMenuPawn_C_zoomIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__FinishedFunc
// (BlueprintEvent)

void AmainMenuPawn_C::CamZoomLoop__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__FinishedFunc");

	AmainMenuPawn_C_CamZoomLoop__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__UpdateFunc
// (BlueprintEvent)

void AmainMenuPawn_C::CamZoomLoop__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__UpdateFunc");

	AmainMenuPawn_C_CamZoomLoop__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.museicFade__FinishedFunc
// (BlueprintEvent)

void AmainMenuPawn_C::museicFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.museicFade__FinishedFunc");

	AmainMenuPawn_C_museicFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.museicFade__UpdateFunc
// (BlueprintEvent)

void AmainMenuPawn_C::museicFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.museicFade__UpdateFunc");

	AmainMenuPawn_C_museicFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmainMenuPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.ReceiveBeginPlay");

	AmainMenuPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.fadeOutMusic
// (BlueprintCallable, BlueprintEvent)

void AmainMenuPawn_C::fadeOutMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.fadeOutMusic");

	AmainMenuPawn_C_fadeOutMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.startMusic
// (BlueprintCallable, BlueprintEvent)

void AmainMenuPawn_C::startMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.startMusic");

	AmainMenuPawn_C_startMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.updateCamSlide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CamX                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CamY                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainMenuPawn_C::updateCamSlide(float CamX, float CamY)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.updateCamSlide");

	AmainMenuPawn_C_updateCamSlide_Params params;
	params.CamX = CamX;
	params.CamY = CamY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainMenuPawn_C::BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature");

	AmainMenuPawn_C_BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainMenuPawn.mainMenuPawn_C.ExecuteUbergraph_mainMenuPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmainMenuPawn_C::ExecuteUbergraph_mainMenuPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.ExecuteUbergraph_mainMenuPawn");

	AmainMenuPawn_C_ExecuteUbergraph_mainMenuPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
