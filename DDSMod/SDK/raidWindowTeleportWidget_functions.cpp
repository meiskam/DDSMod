
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

// Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UraidWindowTeleportWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.Construct");

	UraidWindowTeleportWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.ExecuteUbergraph_raidWindowTeleportWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UraidWindowTeleportWidget_C::ExecuteUbergraph_raidWindowTeleportWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function raidWindowTeleportWidget.raidWindowTeleportWidget_C.ExecuteUbergraph_raidWindowTeleportWidget");

	UraidWindowTeleportWidget_C_ExecuteUbergraph_raidWindowTeleportWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
