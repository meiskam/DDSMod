
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PM_CaughtPlayer.PM_CaughtPlayer_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_CaughtPlayer_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CaughtPlayer.PM_CaughtPlayer_C.ReceiveExecute");

	UPM_CaughtPlayer_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_CaughtPlayer.PM_CaughtPlayer_C.ExecuteUbergraph_PM_CaughtPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_CaughtPlayer_C::ExecuteUbergraph_PM_CaughtPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_CaughtPlayer.PM_CaughtPlayer_C.ExecuteUbergraph_PM_CaughtPlayer");

	UPM_CaughtPlayer_C_ExecuteUbergraph_PM_CaughtPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
