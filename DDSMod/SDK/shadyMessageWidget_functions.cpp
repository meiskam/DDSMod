
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

// Function shadyMessageWidget.shadyMessageWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 msgString                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              userAvatar                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyMessageWidget_C::setup(const struct FText& UserName, const struct FString& msgString, class UTexture2D* userAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyMessageWidget.shadyMessageWidget_C.setup");

	UshadyMessageWidget_C_setup_Params params;
	params.UserName = UserName;
	params.msgString = msgString;
	params.userAvatar = userAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyMessageWidget.shadyMessageWidget_C.ExecuteUbergraph_shadyMessageWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyMessageWidget_C::ExecuteUbergraph_shadyMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyMessageWidget.shadyMessageWidget_C.ExecuteUbergraph_shadyMessageWidget");

	UshadyMessageWidget_C_ExecuteUbergraph_shadyMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
