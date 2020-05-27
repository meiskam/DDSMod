
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

// Function oneTaskWidget.oneTaskWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UoneTaskWidget_C::setup(const struct FText& Title, const struct FText& Description, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function oneTaskWidget.oneTaskWidget_C.setup");

	UoneTaskWidget_C_setup_Params params;
	params.Title = Title;
	params.Description = Description;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function oneTaskWidget.oneTaskWidget_C.ExecuteUbergraph_oneTaskWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UoneTaskWidget_C::ExecuteUbergraph_oneTaskWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function oneTaskWidget.oneTaskWidget_C.ExecuteUbergraph_oneTaskWidget");

	UoneTaskWidget_C_ExecuteUbergraph_oneTaskWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
