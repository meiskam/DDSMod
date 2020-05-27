
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

// Function phoneCallWidget.phoneCallWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CallerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            callerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           callDeclined                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CallTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UphoneCallWidget_C::setup(const struct FText& CallerName, int callerID, bool callDeclined, const struct FString& CallTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function phoneCallWidget.phoneCallWidget_C.setup");

	UphoneCallWidget_C_setup_Params params;
	params.CallerName = CallerName;
	params.callerID = callerID;
	params.callDeclined = callDeclined;
	params.CallTime = CallTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function phoneCallWidget.phoneCallWidget_C.ExecuteUbergraph_phoneCallWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UphoneCallWidget_C::ExecuteUbergraph_phoneCallWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function phoneCallWidget.phoneCallWidget_C.ExecuteUbergraph_phoneCallWidget");

	UphoneCallWidget_C_ExecuteUbergraph_phoneCallWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
