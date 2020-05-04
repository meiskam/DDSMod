
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

// Function PM_PatrolPointCycle.PM_PatrolPointCycle_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_PatrolPointCycle_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPointCycle.PM_PatrolPointCycle_C.ReceiveExecute");

	UPM_PatrolPointCycle_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolPointCycle.PM_PatrolPointCycle_C.ExecuteUbergraph_PM_PatrolPointCycle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_PatrolPointCycle_C::ExecuteUbergraph_PM_PatrolPointCycle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPointCycle.PM_PatrolPointCycle_C.ExecuteUbergraph_PM_PatrolPointCycle");

	UPM_PatrolPointCycle_C_ExecuteUbergraph_PM_PatrolPointCycle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
