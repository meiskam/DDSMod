
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function dialogueWidget.dialogueWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UdialogueWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.OnKeyDown");

	UdialogueWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function dialogueWidget.dialogueWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UdialogueWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.OnMouseButtonDown");

	UdialogueWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function dialogueWidget.dialogueWidget_C.launchNewDialogue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewDialogueID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResponseShowDelay              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UdialogueWidget_C::launchNewDialogue(int NewDialogueID, float* ResponseShowDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.launchNewDialogue");

	UdialogueWidget_C_launchNewDialogue_Params params;
	params.NewDialogueID = NewDialogueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResponseShowDelay != nullptr)
		*ResponseShowDelay = params.ResponseShowDelay;
}


// Function dialogueWidget.dialogueWidget_C.executeFinishActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UdialogueWidget_C::executeFinishActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.executeFinishActions");

	UdialogueWidget_C_executeFinishActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.setupResponses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdialogueData           dialogueData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UdialogueWidget_C::setupResponses(const struct FdialogueData& dialogueData)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.setupResponses");

	UdialogueWidget_C_setupResponses_Params params;
	params.dialogueData = dialogueData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdialogueWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.Construct");

	UdialogueWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AdialogueInstance_C*     dialogueInstanceRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RiskFactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Speaker_Name                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UdialogueWidget_C::setup(class AdialogueInstance_C* dialogueInstanceRef, float RiskFactor, const struct FText& Speaker_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.setup");

	UdialogueWidget_C_setup_Params params;
	params.dialogueInstanceRef = dialogueInstanceRef;
	params.RiskFactor = RiskFactor;
	params.Speaker_Name = Speaker_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.responseAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdialogueResponseData   Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UdialogueWidget_C::responseAction(const struct FdialogueResponseData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.responseAction");

	UdialogueWidget_C_responseAction_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.finishDialogue
// (BlueprintCallable, BlueprintEvent)

void UdialogueWidget_C::finishDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.finishDialogue");

	UdialogueWidget_C_finishDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.returnFromTrade
// (BlueprintCallable, BlueprintEvent)

void UdialogueWidget_C::returnFromTrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.returnFromTrade");

	UdialogueWidget_C_returnFromTrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.forceResponses
// (BlueprintCallable, BlueprintEvent)

void UdialogueWidget_C::forceResponses()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.forceResponses");

	UdialogueWidget_C_forceResponses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueWidget.dialogueWidget_C.ExecuteUbergraph_dialogueWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdialogueWidget_C::ExecuteUbergraph_dialogueWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueWidget.dialogueWidget_C.ExecuteUbergraph_dialogueWidget");

	UdialogueWidget_C_ExecuteUbergraph_dialogueWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
