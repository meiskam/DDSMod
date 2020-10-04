
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function getPointAroundMaster.getPointAroundMaster_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UgetPointAroundMaster_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function getPointAroundMaster.getPointAroundMaster_C.ReceiveExecute");

	UgetPointAroundMaster_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function getPointAroundMaster.getPointAroundMaster_C.ExecuteUbergraph_getPointAroundMaster
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UgetPointAroundMaster_C::ExecuteUbergraph_getPointAroundMaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function getPointAroundMaster.getPointAroundMaster_C.ExecuteUbergraph_getPointAroundMaster");

	UgetPointAroundMaster_C_ExecuteUbergraph_getPointAroundMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
