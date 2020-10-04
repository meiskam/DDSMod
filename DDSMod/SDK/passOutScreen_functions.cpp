
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

// Function passOutScreen.passOutScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpassOutScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function passOutScreen.passOutScreen_C.Construct");

	UpassOutScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passOutScreen.passOutScreen_C.ExecuteUbergraph_passOutScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpassOutScreen_C::ExecuteUbergraph_passOutScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function passOutScreen.passOutScreen_C.ExecuteUbergraph_passOutScreen");

	UpassOutScreen_C_ExecuteUbergraph_passOutScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
