
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

// Function policeDogCrowdCon.policeDogCrowdCon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApoliceDogCrowdCon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogCrowdCon.policeDogCrowdCon_C.UserConstructionScript");

	ApoliceDogCrowdCon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogCrowdCon.policeDogCrowdCon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApoliceDogCrowdCon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogCrowdCon.policeDogCrowdCon_C.ReceiveBeginPlay");

	ApoliceDogCrowdCon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogCrowdCon.policeDogCrowdCon_C.ExecuteUbergraph_policeDogCrowdCon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceDogCrowdCon_C::ExecuteUbergraph_policeDogCrowdCon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogCrowdCon.policeDogCrowdCon_C.ExecuteUbergraph_policeDogCrowdCon");

	ApoliceDogCrowdCon_C_ExecuteUbergraph_policeDogCrowdCon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
