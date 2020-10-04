
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

// Function deaVanBP.deaVanBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdeaVanBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaVanBP.deaVanBP_C.UserConstructionScript");

	AdeaVanBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
