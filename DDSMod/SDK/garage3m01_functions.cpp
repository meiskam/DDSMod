
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

// Function garage3m01.garage3m01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Agarage3m01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function garage3m01.garage3m01_C.UserConstructionScript");

	Agarage3m01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
