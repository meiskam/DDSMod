
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Gas_Tank_Red.BP_Gas_Tank_Red_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gas_Tank_Red_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gas_Tank_Red.BP_Gas_Tank_Red_C.UserConstructionScript");

	ABP_Gas_Tank_Red_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
