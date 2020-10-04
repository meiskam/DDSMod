
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function dd_trashBinConcrete.dd_trashBinConcrete_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Add_trashBinConcrete_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_trashBinConcrete.dd_trashBinConcrete_C.UserConstructionScript");

	Add_trashBinConcrete_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
