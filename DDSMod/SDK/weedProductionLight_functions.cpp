
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

// Function weedProductionLight.weedProductionLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AweedProductionLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedProductionLight.weedProductionLight_C.UserConstructionScript");

	AweedProductionLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedProductionLight.weedProductionLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AweedProductionLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedProductionLight.weedProductionLight_C.ReceiveBeginPlay");

	AweedProductionLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedProductionLight.weedProductionLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedProductionLight_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedProductionLight.weedProductionLight_C.ReceiveTick");

	AweedProductionLight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedProductionLight.weedProductionLight_C.ExecuteUbergraph_weedProductionLight
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedProductionLight_C::ExecuteUbergraph_weedProductionLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedProductionLight.weedProductionLight_C.ExecuteUbergraph_weedProductionLight");

	AweedProductionLight_C_ExecuteUbergraph_weedProductionLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
