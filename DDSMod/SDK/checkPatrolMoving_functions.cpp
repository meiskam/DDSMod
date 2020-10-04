
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function checkPatrolMoving.checkPatrolMoving_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcheckPatrolMoving_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function checkPatrolMoving.checkPatrolMoving_C.ReceiveTick");

	UcheckPatrolMoving_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function checkPatrolMoving.checkPatrolMoving_C.ExecuteUbergraph_checkPatrolMoving
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcheckPatrolMoving_C::ExecuteUbergraph_checkPatrolMoving(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function checkPatrolMoving.checkPatrolMoving_C.ExecuteUbergraph_checkPatrolMoving");

	UcheckPatrolMoving_C_ExecuteUbergraph_checkPatrolMoving_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
