
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function clubBodyguardSpot01.clubBodyguardSpot01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AclubBodyguardSpot01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function clubBodyguardSpot01.clubBodyguardSpot01_C.UserConstructionScript");

	AclubBodyguardSpot01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
