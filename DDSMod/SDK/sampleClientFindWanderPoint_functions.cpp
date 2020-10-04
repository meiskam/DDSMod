
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

// Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientFindWanderPoint_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ReceiveExecute");

	UsampleClientFindWanderPoint_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ExecuteUbergraph_sampleClientFindWanderPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientFindWanderPoint_C::ExecuteUbergraph_sampleClientFindWanderPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientFindWanderPoint.sampleClientFindWanderPoint_C.ExecuteUbergraph_sampleClientFindWanderPoint");

	UsampleClientFindWanderPoint_C_ExecuteUbergraph_sampleClientFindWanderPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
