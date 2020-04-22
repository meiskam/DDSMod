
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

// Function holyMaryLookTrigger.holyMaryLookTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AholyMaryLookTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function holyMaryLookTrigger.holyMaryLookTrigger_C.UserConstructionScript");

	AholyMaryLookTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function holyMaryLookTrigger.holyMaryLookTrigger_C.playerLookedAt
// (BlueprintCallable, BlueprintEvent)

void AholyMaryLookTrigger_C::playerLookedAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function holyMaryLookTrigger.holyMaryLookTrigger_C.playerLookedAt");

	AholyMaryLookTrigger_C_playerLookedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function holyMaryLookTrigger.holyMaryLookTrigger_C.ExecuteUbergraph_holyMaryLookTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AholyMaryLookTrigger_C::ExecuteUbergraph_holyMaryLookTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function holyMaryLookTrigger.holyMaryLookTrigger_C.ExecuteUbergraph_holyMaryLookTrigger");

	AholyMaryLookTrigger_C_ExecuteUbergraph_holyMaryLookTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
