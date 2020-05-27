
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

// Function deaRaidManager.deaRaidManager_C.countRaidSecondsTotal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            secondsCounted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdeaRaidManager_C::countRaidSecondsTotal(int* secondsCounted)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.countRaidSecondsTotal");

	AdeaRaidManager_C_countRaidSecondsTotal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (secondsCounted != nullptr)
		*secondsCounted = params.secondsCounted;
}


// Function deaRaidManager.deaRaidManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdeaRaidManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.UserConstructionScript");

	AdeaRaidManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__FinishedFunc
// (BlueprintEvent)

void AdeaRaidManager_C::raidMusicFadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__FinishedFunc");

	AdeaRaidManager_C_raidMusicFadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__UpdateFunc
// (BlueprintEvent)

void AdeaRaidManager_C::raidMusicFadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__UpdateFunc");

	AdeaRaidManager_C_raidMusicFadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdeaRaidManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.ReceiveBeginPlay");

	AdeaRaidManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdeaRaidManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.ReceiveTick");

	AdeaRaidManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.StartKurwaRaid
// (BlueprintCallable, BlueprintEvent)

void AdeaRaidManager_C::StartKurwaRaid()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.StartKurwaRaid");

	AdeaRaidManager_C_StartKurwaRaid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.raidCountdown
// (BlueprintCallable, BlueprintEvent)

void AdeaRaidManager_C::raidCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.raidCountdown");

	AdeaRaidManager_C_raidCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.overrideEndCountdown
// (BlueprintCallable, BlueprintEvent)

void AdeaRaidManager_C::overrideEndCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.overrideEndCountdown");

	AdeaRaidManager_C_overrideEndCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.fadeOutRaidMusic
// (BlueprintCallable, BlueprintEvent)

void AdeaRaidManager_C::fadeOutRaidMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.fadeOutRaidMusic");

	AdeaRaidManager_C_fadeOutRaidMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.checkPlayerRanAway
// (BlueprintCallable, BlueprintEvent)

void AdeaRaidManager_C::checkPlayerRanAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.checkPlayerRanAway");

	AdeaRaidManager_C_checkPlayerRanAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaRaidManager.deaRaidManager_C.ExecuteUbergraph_deaRaidManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdeaRaidManager_C::ExecuteUbergraph_deaRaidManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.ExecuteUbergraph_deaRaidManager");

	AdeaRaidManager_C_ExecuteUbergraph_deaRaidManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
