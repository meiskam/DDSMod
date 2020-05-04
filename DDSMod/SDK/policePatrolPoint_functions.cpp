
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function policePatrolPoint.policePatrolPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApolicePatrolPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolPoint.policePatrolPoint_C.UserConstructionScript");

	ApolicePatrolPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
