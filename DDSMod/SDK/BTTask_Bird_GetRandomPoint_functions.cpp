
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

// Function BTTask_Bird_GetRandomPoint.BTTask_Bird_GetRandomPoint_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_GetRandomPoint_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_GetRandomPoint.BTTask_Bird_GetRandomPoint_C.ReceiveExecute");

	UBTTask_Bird_GetRandomPoint_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_GetRandomPoint.BTTask_Bird_GetRandomPoint_C.ExecuteUbergraph_BTTask_Bird_GetRandomPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_GetRandomPoint_C::ExecuteUbergraph_BTTask_Bird_GetRandomPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_GetRandomPoint.BTTask_Bird_GetRandomPoint_C.ExecuteUbergraph_BTTask_Bird_GetRandomPoint");

	UBTTask_Bird_GetRandomPoint_C_ExecuteUbergraph_BTTask_Bird_GetRandomPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
