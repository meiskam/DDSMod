
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function nightMusicPlayer.nightMusicPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AnightMusicPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.UserConstructionScript");

	AnightMusicPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nightMusicPlayer.nightMusicPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AnightMusicPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.ReceiveBeginPlay");

	AnightMusicPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nightMusicPlayer.nightMusicPlayer_C.checkDayTime
// (BlueprintCallable, BlueprintEvent)

void AnightMusicPlayer_C::checkDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.checkDayTime");

	AnightMusicPlayer_C_checkDayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nightMusicPlayer.nightMusicPlayer_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AnightMusicPlayer_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.Activate");

	AnightMusicPlayer_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nightMusicPlayer.nightMusicPlayer_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void AnightMusicPlayer_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.Deactivate");

	AnightMusicPlayer_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nightMusicPlayer.nightMusicPlayer_C.ExecuteUbergraph_nightMusicPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AnightMusicPlayer_C::ExecuteUbergraph_nightMusicPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function nightMusicPlayer.nightMusicPlayer_C.ExecuteUbergraph_nightMusicPlayer");

	AnightMusicPlayer_C_ExecuteUbergraph_nightMusicPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
