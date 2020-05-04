
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

// Function gameTipPopup.gameTipPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UgameTipPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function gameTipPopup.gameTipPopup_C.Construct");

	UgameTipPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gameTipPopup.gameTipPopup_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UgameTipPopup_C::setup(const struct FText& Title, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameTipPopup.gameTipPopup_C.setup");

	UgameTipPopup_C_setup_Params params;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gameTipPopup.gameTipPopup_C.killWidget
// (BlueprintCallable, BlueprintEvent)

void UgameTipPopup_C::killWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function gameTipPopup.gameTipPopup_C.killWidget");

	UgameTipPopup_C_killWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gameTipPopup.gameTipPopup_C.ExecuteUbergraph_gameTipPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UgameTipPopup_C::ExecuteUbergraph_gameTipPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameTipPopup.gameTipPopup_C.ExecuteUbergraph_gameTipPopup");

	UgameTipPopup_C_ExecuteUbergraph_gameTipPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
