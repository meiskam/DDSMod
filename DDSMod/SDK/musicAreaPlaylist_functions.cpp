
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

// Function musicAreaPlaylist.musicAreaPlaylist_C.getMusicVolume
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AmusicAreaPlaylist_C::getMusicVolume(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.getMusicVolume");

	AmusicAreaPlaylist_C_getMusicVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.areaMusicEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AmusicAreaPlaylist_C::areaMusicEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.areaMusicEnabled");

	AmusicAreaPlaylist_C_areaMusicEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmusicAreaPlaylist_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.UserConstructionScript");

	AmusicAreaPlaylist_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__FinishedFunc
// (BlueprintEvent)

void AmusicAreaPlaylist_C::musicVolumeFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__FinishedFunc");

	AmusicAreaPlaylist_C_musicVolumeFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__UpdateFunc
// (BlueprintEvent)

void AmusicAreaPlaylist_C::musicVolumeFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__UpdateFunc");

	AmusicAreaPlaylist_C_musicVolumeFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmusicAreaPlaylist_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.ReceiveBeginPlay");

	AmusicAreaPlaylist_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.ActivateMusicInArea
// (BlueprintCallable, BlueprintEvent)

void AmusicAreaPlaylist_C::ActivateMusicInArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.ActivateMusicInArea");

	AmusicAreaPlaylist_C_ActivateMusicInArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.endMusic
// (BlueprintCallable, BlueprintEvent)

void AmusicAreaPlaylist_C::endMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.endMusic");

	AmusicAreaPlaylist_C_endMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.firstAreaInitiate
// (BlueprintCallable, BlueprintEvent)

void AmusicAreaPlaylist_C::firstAreaInitiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.firstAreaInitiate");

	AmusicAreaPlaylist_C_firstAreaInitiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.bypassPlayMusic
// (BlueprintCallable, BlueprintEvent)

void AmusicAreaPlaylist_C::bypassPlayMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.bypassPlayMusic");

	AmusicAreaPlaylist_C_bypassPlayMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function musicAreaPlaylist.musicAreaPlaylist_C.ExecuteUbergraph_musicAreaPlaylist
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmusicAreaPlaylist_C::ExecuteUbergraph_musicAreaPlaylist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.ExecuteUbergraph_musicAreaPlaylist");

	AmusicAreaPlaylist_C_ExecuteUbergraph_musicAreaPlaylist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
