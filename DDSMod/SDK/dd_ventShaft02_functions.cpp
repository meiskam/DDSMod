
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

// Function dd_ventShaft02.dd_ventShaft02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Add_ventShaft02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_ventShaft02.dd_ventShaft02_C.UserConstructionScript");

	Add_ventShaft02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dd_ventShaft02.dd_ventShaft02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Add_ventShaft02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_ventShaft02.dd_ventShaft02_C.ReceiveBeginPlay");

	Add_ventShaft02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dd_ventShaft02.dd_ventShaft02_C.ExecuteUbergraph_dd_ventShaft02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Add_ventShaft02_C::ExecuteUbergraph_dd_ventShaft02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_ventShaft02.dd_ventShaft02_C.ExecuteUbergraph_dd_ventShaft02");

	Add_ventShaft02_C_ExecuteUbergraph_dd_ventShaft02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
