
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PM_GetSearchPoint.PM_GetSearchPoint_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_GetSearchPoint_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_GetSearchPoint.PM_GetSearchPoint_C.ReceiveExecute");

	UPM_GetSearchPoint_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_GetSearchPoint.PM_GetSearchPoint_C.ExecuteUbergraph_PM_GetSearchPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_GetSearchPoint_C::ExecuteUbergraph_PM_GetSearchPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_GetSearchPoint.PM_GetSearchPoint_C.ExecuteUbergraph_PM_GetSearchPoint");

	UPM_GetSearchPoint_C_ExecuteUbergraph_PM_GetSearchPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
