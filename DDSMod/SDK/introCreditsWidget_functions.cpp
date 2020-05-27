
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

// Function introCreditsWidget.introCreditsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UintroCreditsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function introCreditsWidget.introCreditsWidget_C.Construct");

	UintroCreditsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function introCreditsWidget.introCreditsWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Person                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Company                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UintroCreditsWidget_C::setup(const struct FText& Title, const struct FText& Person, const struct FText& Company)
{
	static auto fn = UObject::FindObject<UFunction>("Function introCreditsWidget.introCreditsWidget_C.setup");

	UintroCreditsWidget_C_setup_Params params;
	params.Title = Title;
	params.Person = Person;
	params.Company = Company;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function introCreditsWidget.introCreditsWidget_C.ExecuteUbergraph_introCreditsWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UintroCreditsWidget_C::ExecuteUbergraph_introCreditsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function introCreditsWidget.introCreditsWidget_C.ExecuteUbergraph_introCreditsWidget");

	UintroCreditsWidget_C_ExecuteUbergraph_introCreditsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
