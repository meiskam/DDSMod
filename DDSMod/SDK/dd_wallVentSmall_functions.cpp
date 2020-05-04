
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

// Function dd_wallVentSmall.dd_wallVentSmall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Add_wallVentSmall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_wallVentSmall.dd_wallVentSmall_C.UserConstructionScript");

	Add_wallVentSmall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dd_wallVentSmall.dd_wallVentSmall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Add_wallVentSmall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_wallVentSmall.dd_wallVentSmall_C.ReceiveBeginPlay");

	Add_wallVentSmall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dd_wallVentSmall.dd_wallVentSmall_C.ExecuteUbergraph_dd_wallVentSmall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Add_wallVentSmall_C::ExecuteUbergraph_dd_wallVentSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dd_wallVentSmall.dd_wallVentSmall_C.ExecuteUbergraph_dd_wallVentSmall");

	Add_wallVentSmall_C_ExecuteUbergraph_dd_wallVentSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
