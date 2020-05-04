
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

// Function phoneNotificationWidget.phoneNotificationWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UphoneNotificationWidget_C::setup(class UTexture2D* icon, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function phoneNotificationWidget.phoneNotificationWidget_C.setup");

	UphoneNotificationWidget_C_setup_Params params;
	params.icon = icon;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function phoneNotificationWidget.phoneNotificationWidget_C.ExecuteUbergraph_phoneNotificationWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UphoneNotificationWidget_C::ExecuteUbergraph_phoneNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function phoneNotificationWidget.phoneNotificationWidget_C.ExecuteUbergraph_phoneNotificationWidget");

	UphoneNotificationWidget_C_ExecuteUbergraph_phoneNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
