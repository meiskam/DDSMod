
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

// Function sprayPaintBP.sprayPaintBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsprayPaintBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPaintBP.sprayPaintBP_C.UserConstructionScript");

	AsprayPaintBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPaintBP.sprayPaintBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsprayPaintBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPaintBP.sprayPaintBP_C.ReceiveBeginPlay");

	AsprayPaintBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayPaintBP.sprayPaintBP_C.ExecuteUbergraph_sprayPaintBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsprayPaintBP_C::ExecuteUbergraph_sprayPaintBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayPaintBP.sprayPaintBP_C.ExecuteUbergraph_sprayPaintBP");

	AsprayPaintBP_C_ExecuteUbergraph_sprayPaintBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
