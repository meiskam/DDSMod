
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

// Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_PredictPlayerEscapePath_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ReceiveExecute");

	UPM_PredictPlayerEscapePath_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ExecuteUbergraph_PM_PredictPlayerEscapePath
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_PredictPlayerEscapePath_C::ExecuteUbergraph_PM_PredictPlayerEscapePath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ExecuteUbergraph_PM_PredictPlayerEscapePath");

	UPM_PredictPlayerEscapePath_C_ExecuteUbergraph_PM_PredictPlayerEscapePath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
