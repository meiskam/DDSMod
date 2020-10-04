
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

// Function nightClubLookTrigger.nightClubLookTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AnightClubLookTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function nightClubLookTrigger.nightClubLookTrigger_C.UserConstructionScript");

	AnightClubLookTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nightClubLookTrigger.nightClubLookTrigger_C.playerLookedAt
// (BlueprintCallable, BlueprintEvent)

void AnightClubLookTrigger_C::playerLookedAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function nightClubLookTrigger.nightClubLookTrigger_C.playerLookedAt");

	AnightClubLookTrigger_C_playerLookedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nightClubLookTrigger.nightClubLookTrigger_C.ExecuteUbergraph_nightClubLookTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AnightClubLookTrigger_C::ExecuteUbergraph_nightClubLookTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function nightClubLookTrigger.nightClubLookTrigger_C.ExecuteUbergraph_nightClubLookTrigger");

	AnightClubLookTrigger_C_ExecuteUbergraph_nightClubLookTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
