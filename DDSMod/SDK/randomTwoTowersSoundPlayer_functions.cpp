
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ArandomTwoTowersSoundPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.UserConstructionScript");

	ArandomTwoTowersSoundPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ArandomTwoTowersSoundPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ReceiveBeginPlay");

	ArandomTwoTowersSoundPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.playPartySound
// (BlueprintCallable, BlueprintEvent)

void ArandomTwoTowersSoundPlayer_C::playPartySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.playPartySound");

	ArandomTwoTowersSoundPlayer_C_playPartySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ExecuteUbergraph_randomTwoTowersSoundPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArandomTwoTowersSoundPlayer_C::ExecuteUbergraph_randomTwoTowersSoundPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function randomTwoTowersSoundPlayer.randomTwoTowersSoundPlayer_C.ExecuteUbergraph_randomTwoTowersSoundPlayer");

	ArandomTwoTowersSoundPlayer_C_ExecuteUbergraph_randomTwoTowersSoundPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
