
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

// Function questWidget.questWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Short                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UquestWidget_C::setup(const struct FText& Title, const struct FText& Short, const struct FText& Description, int QuestID, bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function questWidget.questWidget_C.setup");

	UquestWidget_C_setup_Params params;
	params.Title = Title;
	params.Short = Short;
	params.Description = Description;
	params.QuestID = QuestID;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questWidget.questWidget_C.BndEvt__btnMore_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UquestWidget_C::BndEvt__btnMore_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function questWidget.questWidget_C.BndEvt__btnMore_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UquestWidget_C_BndEvt__btnMore_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questWidget.questWidget_C.BndEvt__btnActivateQuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UquestWidget_C::BndEvt__btnActivateQuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function questWidget.questWidget_C.BndEvt__btnActivateQuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UquestWidget_C_BndEvt__btnActivateQuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questWidget.questWidget_C.ExecuteUbergraph_questWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UquestWidget_C::ExecuteUbergraph_questWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function questWidget.questWidget_C.ExecuteUbergraph_questWidget");

	UquestWidget_C_ExecuteUbergraph_questWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
