
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

// Function gunshotsPlayer.gunshotsPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AgunshotsPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.UserConstructionScript");

	AgunshotsPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gunshotsPlayer.gunshotsPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AgunshotsPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.ReceiveBeginPlay");

	AgunshotsPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gunshotsPlayer.gunshotsPlayer_C.playGunshot
// (BlueprintCallable, BlueprintEvent)

void AgunshotsPlayer_C::playGunshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.playGunshot");

	AgunshotsPlayer_C_playGunshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gunshotsPlayer.gunshotsPlayer_C.ExecuteUbergraph_gunshotsPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgunshotsPlayer_C::ExecuteUbergraph_gunshotsPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gunshotsPlayer.gunshotsPlayer_C.ExecuteUbergraph_gunshotsPlayer");

	AgunshotsPlayer_C_ExecuteUbergraph_gunshotsPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
