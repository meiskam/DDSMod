
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

// Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdeadDropSeeItLookTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.UserConstructionScript");

	AdeadDropSeeItLookTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.playerLookedAt
// (BlueprintCallable, BlueprintEvent)

void AdeadDropSeeItLookTrigger_C::playerLookedAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.playerLookedAt");

	AdeadDropSeeItLookTrigger_C_playerLookedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.ExecuteUbergraph_deadDropSeeItLookTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdeadDropSeeItLookTrigger_C::ExecuteUbergraph_deadDropSeeItLookTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropSeeItLookTrigger.deadDropSeeItLookTrigger_C.ExecuteUbergraph_deadDropSeeItLookTrigger");

	AdeadDropSeeItLookTrigger_C_ExecuteUbergraph_deadDropSeeItLookTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
