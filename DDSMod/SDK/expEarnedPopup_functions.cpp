
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

// Function expEarnedPopup.expEarnedPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UexpEarnedPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function expEarnedPopup.expEarnedPopup_C.Construct");

	UexpEarnedPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function expEarnedPopup.expEarnedPopup_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          expAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UexpEarnedPopup_C::setup(float expAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function expEarnedPopup.expEarnedPopup_C.setup");

	UexpEarnedPopup_C_setup_Params params;
	params.expAmount = expAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function expEarnedPopup.expEarnedPopup_C.ExecuteUbergraph_expEarnedPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UexpEarnedPopup_C::ExecuteUbergraph_expEarnedPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function expEarnedPopup.expEarnedPopup_C.ExecuteUbergraph_expEarnedPopup");

	UexpEarnedPopup_C_ExecuteUbergraph_expEarnedPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
