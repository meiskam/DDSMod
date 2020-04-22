
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

// Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecorativeFurniture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript");

	AdecorativeFurniture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
