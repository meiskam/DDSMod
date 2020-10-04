
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

// Function worldMapReferencePoint.worldMapReferencePoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworldMapReferencePoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapReferencePoint.worldMapReferencePoint_C.UserConstructionScript");

	AworldMapReferencePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
