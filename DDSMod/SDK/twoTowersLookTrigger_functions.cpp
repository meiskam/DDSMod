
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

// Function twoTowersLookTrigger.twoTowersLookTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtwoTowersLookTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function twoTowersLookTrigger.twoTowersLookTrigger_C.UserConstructionScript");

	AtwoTowersLookTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function twoTowersLookTrigger.twoTowersLookTrigger_C.playerLookedAt
// (BlueprintCallable, BlueprintEvent)

void AtwoTowersLookTrigger_C::playerLookedAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function twoTowersLookTrigger.twoTowersLookTrigger_C.playerLookedAt");

	AtwoTowersLookTrigger_C_playerLookedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function twoTowersLookTrigger.twoTowersLookTrigger_C.ExecuteUbergraph_twoTowersLookTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtwoTowersLookTrigger_C::ExecuteUbergraph_twoTowersLookTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function twoTowersLookTrigger.twoTowersLookTrigger_C.ExecuteUbergraph_twoTowersLookTrigger");

	AtwoTowersLookTrigger_C_ExecuteUbergraph_twoTowersLookTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
