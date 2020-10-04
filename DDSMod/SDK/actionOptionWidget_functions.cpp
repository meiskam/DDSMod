
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

// Function actionOptionWidget.actionOptionWidget_C.setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InitActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UactionOptionWidget_C::setup(bool InitActive, const struct FText& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.setup");

	UactionOptionWidget_C_setup_Params params;
	params.InitActive = InitActive;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function actionOptionWidget.actionOptionWidget_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           activated                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UactionOptionWidget_C::SetActive(bool activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.SetActive");

	UactionOptionWidget_C_SetActive_Params params;
	params.activated = activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
