
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

// Function bankHintCloudWidget.bankHintCloudWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UbankHintCloudWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bankHintCloudWidget.bankHintCloudWidget_C.Construct");

	UbankHintCloudWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bankHintCloudWidget.bankHintCloudWidget_C.ExecuteUbergraph_bankHintCloudWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbankHintCloudWidget_C::ExecuteUbergraph_bankHintCloudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bankHintCloudWidget.bankHintCloudWidget_C.ExecuteUbergraph_bankHintCloudWidget");

	UbankHintCloudWidget_C_ExecuteUbergraph_bankHintCloudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
