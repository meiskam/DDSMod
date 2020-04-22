
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

// Function findGoHomePoint.findGoHomePoint_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UfindGoHomePoint_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function findGoHomePoint.findGoHomePoint_C.ReceiveExecute");

	UfindGoHomePoint_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function findGoHomePoint.findGoHomePoint_C.ExecuteUbergraph_findGoHomePoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UfindGoHomePoint_C::ExecuteUbergraph_findGoHomePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function findGoHomePoint.findGoHomePoint_C.ExecuteUbergraph_findGoHomePoint");

	UfindGoHomePoint_C_ExecuteUbergraph_findGoHomePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
