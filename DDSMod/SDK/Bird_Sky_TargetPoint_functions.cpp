
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

// Function Bird_Sky_TargetPoint.Bird_Sky_TargetPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABird_Sky_TargetPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_Sky_TargetPoint.Bird_Sky_TargetPoint_C.UserConstructionScript");

	ABird_Sky_TargetPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
