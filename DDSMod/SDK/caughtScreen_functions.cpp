
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

// Function caughtScreen.caughtScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UcaughtScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function caughtScreen.caughtScreen_C.Construct");

	UcaughtScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function caughtScreen.caughtScreen_C.ExecuteUbergraph_caughtScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcaughtScreen_C::ExecuteUbergraph_caughtScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function caughtScreen.caughtScreen_C.ExecuteUbergraph_caughtScreen");

	UcaughtScreen_C_ExecuteUbergraph_caughtScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
