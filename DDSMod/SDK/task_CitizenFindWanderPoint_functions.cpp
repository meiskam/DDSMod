
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

// Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utask_CitizenFindWanderPoint_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ReceiveExecute");

	Utask_CitizenFindWanderPoint_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ExecuteUbergraph_task_CitizenFindWanderPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utask_CitizenFindWanderPoint_C::ExecuteUbergraph_task_CitizenFindWanderPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C.ExecuteUbergraph_task_CitizenFindWanderPoint");

	Utask_CitizenFindWanderPoint_C_ExecuteUbergraph_task_CitizenFindWanderPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
