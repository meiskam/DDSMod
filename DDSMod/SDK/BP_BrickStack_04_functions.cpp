
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

// Function BP_BrickStack_04.BP_BrickStack_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BrickStack_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrickStack_04.BP_BrickStack_04_C.UserConstructionScript");

	ABP_BrickStack_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
