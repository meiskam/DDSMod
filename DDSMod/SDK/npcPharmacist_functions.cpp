
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

// Function npcPharmacist.npcPharmacist_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AnpcPharmacist_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function npcPharmacist.npcPharmacist_C.UserConstructionScript");

	AnpcPharmacist_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npcPharmacist.npcPharmacist_C.eventEnterDialogue
// (BlueprintCallable, BlueprintEvent)

void AnpcPharmacist_C::eventEnterDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function npcPharmacist.npcPharmacist_C.eventEnterDialogue");

	AnpcPharmacist_C_eventEnterDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npcPharmacist.npcPharmacist_C.ExecuteUbergraph_npcPharmacist
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AnpcPharmacist_C::ExecuteUbergraph_npcPharmacist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function npcPharmacist.npcPharmacist_C.ExecuteUbergraph_npcPharmacist");

	AnpcPharmacist_C_ExecuteUbergraph_npcPharmacist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
