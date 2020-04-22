
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

// Function PM_RecallSelf.PM_RecallSelf_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_RecallSelf_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_RecallSelf.PM_RecallSelf_C.ReceiveExecute");

	UPM_RecallSelf_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_RecallSelf.PM_RecallSelf_C.ExecuteUbergraph_PM_RecallSelf
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_RecallSelf_C::ExecuteUbergraph_PM_RecallSelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_RecallSelf.PM_RecallSelf_C.ExecuteUbergraph_PM_RecallSelf");

	UPM_RecallSelf_C_ExecuteUbergraph_PM_RecallSelf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
