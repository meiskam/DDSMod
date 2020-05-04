
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

// Function repairsSoundsPlayer.repairsSoundsPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ArepairsSoundsPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.UserConstructionScript");

	ArepairsSoundsPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function repairsSoundsPlayer.repairsSoundsPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ArepairsSoundsPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.ReceiveBeginPlay");

	ArepairsSoundsPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function repairsSoundsPlayer.repairsSoundsPlayer_C.PlaySound
// (BlueprintCallable, BlueprintEvent)

void ArepairsSoundsPlayer_C::PlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.PlaySound");

	ArepairsSoundsPlayer_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function repairsSoundsPlayer.repairsSoundsPlayer_C.ExecuteUbergraph_repairsSoundsPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArepairsSoundsPlayer_C::ExecuteUbergraph_repairsSoundsPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function repairsSoundsPlayer.repairsSoundsPlayer_C.ExecuteUbergraph_repairsSoundsPlayer");

	ArepairsSoundsPlayer_C_ExecuteUbergraph_repairsSoundsPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
