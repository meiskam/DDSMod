
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

// Function splineRoad400Sidewalks.splineRoad400Sidewalks_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AsplineRoad400Sidewalks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function splineRoad400Sidewalks.splineRoad400Sidewalks_C.UserConstructionScript");

	AsplineRoad400Sidewalks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
