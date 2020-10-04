
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function lookAtTrigger.lookAtTrigger_C.lookAtHit
// (Public, BlueprintCallable, BlueprintEvent)

void AlookAtTrigger_C::lookAtHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.lookAtHit");

	AlookAtTrigger_C_lookAtHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lookAtTrigger.lookAtTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlookAtTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.UserConstructionScript");

	AlookAtTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lookAtTrigger.lookAtTrigger_C.playerLookedAt
// (BlueprintCallable, BlueprintEvent)

void AlookAtTrigger_C::playerLookedAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.playerLookedAt");

	AlookAtTrigger_C_playerLookedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lookAtTrigger.lookAtTrigger_C.ExecuteUbergraph_lookAtTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlookAtTrigger_C::ExecuteUbergraph_lookAtTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lookAtTrigger.lookAtTrigger_C.ExecuteUbergraph_lookAtTrigger");

	AlookAtTrigger_C_ExecuteUbergraph_lookAtTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
