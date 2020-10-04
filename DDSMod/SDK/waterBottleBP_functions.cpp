
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

// Function waterBottleBP.waterBottleBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AwaterBottleBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function waterBottleBP.waterBottleBP_C.UserConstructionScript");

	AwaterBottleBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function waterBottleBP.waterBottleBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AwaterBottleBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function waterBottleBP.waterBottleBP_C.ReceiveBeginPlay");

	AwaterBottleBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function waterBottleBP.waterBottleBP_C.ExecuteUbergraph_waterBottleBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AwaterBottleBP_C::ExecuteUbergraph_waterBottleBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function waterBottleBP.waterBottleBP_C.ExecuteUbergraph_waterBottleBP");

	AwaterBottleBP_C_ExecuteUbergraph_waterBottleBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
