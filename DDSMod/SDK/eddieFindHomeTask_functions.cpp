
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

// Function eddieFindHomeTask.eddieFindHomeTask_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UeddieFindHomeTask_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFindHomeTask.eddieFindHomeTask_C.ReceiveExecute");

	UeddieFindHomeTask_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFindHomeTask.eddieFindHomeTask_C.ExecuteUbergraph_eddieFindHomeTask
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UeddieFindHomeTask_C::ExecuteUbergraph_eddieFindHomeTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFindHomeTask.eddieFindHomeTask_C.ExecuteUbergraph_eddieFindHomeTask");

	UeddieFindHomeTask_C_ExecuteUbergraph_eddieFindHomeTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
