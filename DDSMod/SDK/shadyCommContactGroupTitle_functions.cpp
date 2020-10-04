
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

// Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UshadyCommContactGroupTitle_C::setup(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.setup");

	UshadyCommContactGroupTitle_C_setup_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.ExecuteUbergraph_shadyCommContactGroupTitle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommContactGroupTitle_C::ExecuteUbergraph_shadyCommContactGroupTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.ExecuteUbergraph_shadyCommContactGroupTitle");

	UshadyCommContactGroupTitle_C_ExecuteUbergraph_shadyCommContactGroupTitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
