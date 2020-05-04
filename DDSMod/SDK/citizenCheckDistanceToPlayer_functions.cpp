
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

// Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcitizenCheckDistanceToPlayer_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ReceiveTick");

	UcitizenCheckDistanceToPlayer_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ExecuteUbergraph_citizenCheckDistanceToPlayer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcitizenCheckDistanceToPlayer_C::ExecuteUbergraph_citizenCheckDistanceToPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ExecuteUbergraph_citizenCheckDistanceToPlayer");

	UcitizenCheckDistanceToPlayer_C_ExecuteUbergraph_citizenCheckDistanceToPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
