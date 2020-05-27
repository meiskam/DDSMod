
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

// Function npcDonaldMcKensey.npcDonaldMcKensey_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AnpcDonaldMcKensey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function npcDonaldMcKensey.npcDonaldMcKensey_C.UserConstructionScript");

	AnpcDonaldMcKensey_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npcDonaldMcKensey.npcDonaldMcKensey_C.eventEnterDialogue
// (BlueprintCallable, BlueprintEvent)

void AnpcDonaldMcKensey_C::eventEnterDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function npcDonaldMcKensey.npcDonaldMcKensey_C.eventEnterDialogue");

	AnpcDonaldMcKensey_C_eventEnterDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npcDonaldMcKensey.npcDonaldMcKensey_C.ExecuteUbergraph_npcDonaldMcKensey
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AnpcDonaldMcKensey_C::ExecuteUbergraph_npcDonaldMcKensey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function npcDonaldMcKensey.npcDonaldMcKensey_C.ExecuteUbergraph_npcDonaldMcKensey");

	AnpcDonaldMcKensey_C_ExecuteUbergraph_npcDonaldMcKensey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
