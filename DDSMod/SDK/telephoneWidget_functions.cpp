
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function telephoneWidget.telephoneWidget_C.renderNotifications
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UtelephoneWidget_C::renderNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.renderNotifications");

	UtelephoneWidget_C_renderNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.renderMessages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AtelephoneBP_C*          phoneRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           renderUserMsg                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            userId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtelephoneWidget_C::renderMessages(class AtelephoneBP_C* phoneRef, bool renderUserMsg, int userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.renderMessages");

	UtelephoneWidget_C_renderMessages_Params params;
	params.phoneRef = phoneRef;
	params.renderUserMsg = renderUserMsg;
	params.userId = userId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.renderCallList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AtelephoneBP_C*          phoneRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtelephoneWidget_C::renderCallList(class AtelephoneBP_C* phoneRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.renderCallList");

	UtelephoneWidget_C_renderCallList_Params params;
	params.phoneRef = phoneRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtelephoneWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.Tick");

	UtelephoneWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.slideNext
// (BlueprintCallable, BlueprintEvent)

void UtelephoneWidget_C::slideNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.slideNext");

	UtelephoneWidget_C_slideNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.slidePrevious
// (BlueprintCallable, BlueprintEvent)

void UtelephoneWidget_C::slidePrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.slidePrevious");

	UtelephoneWidget_C_slidePrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.setSlide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            slideNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtelephoneWidget_C::setSlide(int slideNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.setSlide");

	UtelephoneWidget_C_setSlide_Params params;
	params.slideNum = slideNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UtelephoneWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.Construct");

	UtelephoneWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.hideCallWidget
// (BlueprintCallable, BlueprintEvent)

void UtelephoneWidget_C::hideCallWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.hideCallWidget");

	UtelephoneWidget_C_hideCallWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.showCallWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FcontactPersonStruct    userData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UtelephoneWidget_C::showCallWidget(const struct FcontactPersonStruct& userData)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.showCallWidget");

	UtelephoneWidget_C_showCallWidget_Params params;
	params.userData = userData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.callAccepted
// (BlueprintCallable, BlueprintEvent)

void UtelephoneWidget_C::callAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.callAccepted");

	UtelephoneWidget_C_callAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.callTick
// (BlueprintCallable, BlueprintEvent)

void UtelephoneWidget_C::callTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.callTick");

	UtelephoneWidget_C_callTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.updateTime
// (BlueprintCallable, BlueprintEvent)

void UtelephoneWidget_C::updateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.updateTime");

	UtelephoneWidget_C_updateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneWidget.telephoneWidget_C.ExecuteUbergraph_telephoneWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtelephoneWidget_C::ExecuteUbergraph_telephoneWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.ExecuteUbergraph_telephoneWidget");

	UtelephoneWidget_C_ExecuteUbergraph_telephoneWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
