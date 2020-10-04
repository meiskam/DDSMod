
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

// Function phoneMessagePersonWidget.phoneMessagePersonWidget_C.setupMe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PersonName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasNew                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            messageCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   lastMessage                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UphoneMessagePersonWidget_C::setupMe(const struct FText& PersonName, bool hasNew, int messageCount, const struct FText& lastMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function phoneMessagePersonWidget.phoneMessagePersonWidget_C.setupMe");

	UphoneMessagePersonWidget_C_setupMe_Params params;
	params.PersonName = PersonName;
	params.hasNew = hasNew;
	params.messageCount = messageCount;
	params.lastMessage = lastMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
