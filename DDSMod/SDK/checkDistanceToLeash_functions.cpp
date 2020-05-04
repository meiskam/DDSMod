
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

// Function checkDistanceToLeash.checkDistanceToLeash_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcheckDistanceToLeash_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function checkDistanceToLeash.checkDistanceToLeash_C.ReceiveTick");

	UcheckDistanceToLeash_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function checkDistanceToLeash.checkDistanceToLeash_C.ExecuteUbergraph_checkDistanceToLeash
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcheckDistanceToLeash_C::ExecuteUbergraph_checkDistanceToLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function checkDistanceToLeash.checkDistanceToLeash_C.ExecuteUbergraph_checkDistanceToLeash");

	UcheckDistanceToLeash_C_ExecuteUbergraph_checkDistanceToLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
