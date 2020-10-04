
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function phoneMessageWidget.phoneMessageWidget_C.setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Sent                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UphoneMessageWidget_C::setup(const struct FText& Message, bool Sent)
{
	static auto fn = UObject::FindObject<UFunction>("Function phoneMessageWidget.phoneMessageWidget_C.setup");

	UphoneMessageWidget_C_setup_Params params;
	params.Message = Message;
	params.Sent = Sent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
