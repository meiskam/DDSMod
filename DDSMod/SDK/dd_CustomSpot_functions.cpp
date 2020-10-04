
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

// Function dd_CustomSpot.dd_CustomSpot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Add_CustomSpot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_CustomSpot.dd_CustomSpot_C.UserConstructionScript");

	Add_CustomSpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dd_CustomSpot.dd_CustomSpot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Add_CustomSpot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_CustomSpot.dd_CustomSpot_C.ReceiveBeginPlay");

	Add_CustomSpot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dd_CustomSpot.dd_CustomSpot_C.ExecuteUbergraph_dd_CustomSpot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Add_CustomSpot_C::ExecuteUbergraph_dd_CustomSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_CustomSpot.dd_CustomSpot_C.ExecuteUbergraph_dd_CustomSpot");

	Add_CustomSpot_C_ExecuteUbergraph_dd_CustomSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
