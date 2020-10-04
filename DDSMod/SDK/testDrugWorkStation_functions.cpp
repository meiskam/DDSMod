
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

// Function testDrugWorkStation.testDrugWorkStation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtestDrugWorkStation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function testDrugWorkStation.testDrugWorkStation_C.UserConstructionScript");

	AtestDrugWorkStation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
