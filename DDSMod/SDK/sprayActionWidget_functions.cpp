
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function sprayActionWidget.sprayActionWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   areaNam                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UsprayActionWidget_C::setup(const struct FText& areaNam)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayActionWidget.sprayActionWidget_C.setup");

	UsprayActionWidget_C_setup_Params params;
	params.areaNam = areaNam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayActionWidget.sprayActionWidget_C.ExecuteUbergraph_sprayActionWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsprayActionWidget_C::ExecuteUbergraph_sprayActionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayActionWidget.sprayActionWidget_C.ExecuteUbergraph_sprayActionWidget");

	UsprayActionWidget_C_ExecuteUbergraph_sprayActionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
