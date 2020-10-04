
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

// Function miniTaskListItem.miniTaskListItem_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   taskName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           taskDone                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            taskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           taskFailed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           taskSpecial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           taskAwaitingDelivery           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UminiTaskListItem_C::setup(const struct FText& taskName, bool taskDone, int taskID, bool taskFailed, bool taskSpecial, bool taskAwaitingDelivery)
{
	static auto fn = UObject::FindObject<UFunction>("Function miniTaskListItem.miniTaskListItem_C.setup");

	UminiTaskListItem_C_setup_Params params;
	params.taskName = taskName;
	params.taskDone = taskDone;
	params.taskID = taskID;
	params.taskFailed = taskFailed;
	params.taskSpecial = taskSpecial;
	params.taskAwaitingDelivery = taskAwaitingDelivery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function miniTaskListItem.miniTaskListItem_C.ExecuteUbergraph_miniTaskListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UminiTaskListItem_C::ExecuteUbergraph_miniTaskListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function miniTaskListItem.miniTaskListItem_C.ExecuteUbergraph_miniTaskListItem");

	UminiTaskListItem_C_ExecuteUbergraph_miniTaskListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
