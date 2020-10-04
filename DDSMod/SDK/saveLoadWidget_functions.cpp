
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

// Function saveLoadWidget.saveLoadWidget_C.beforeLoadCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UsaveLoadWidget_C::beforeLoadCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.beforeLoadCleanup");

	UsaveLoadWidget_C_beforeLoadCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveLoadWidget.saveLoadWidget_C.getStringDateTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DateTime                       (Parm, OutParm, ZeroConstructor)

void UsaveLoadWidget_C::getStringDateTime(struct FString* DateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.getStringDateTime");

	UsaveLoadWidget_C_getStringDateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;
}


// Function saveLoadWidget.saveLoadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsaveLoadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.Construct");

	UsaveLoadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveLoadWidget.saveLoadWidget_C.SlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaveLoadWidget_C::SlotClicked(int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.SlotClicked");

	UsaveLoadWidget_C_SlotClicked_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveLoadWidget.saveLoadWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           mainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AsaveStation_C*          saveStationRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaveLoadWidget_C::setup(bool SaveGame, bool mainMenu, class AsaveStation_C* saveStationRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.setup");

	UsaveLoadWidget_C_setup_Params params;
	params.SaveGame = SaveGame;
	params.mainMenu = mainMenu;
	params.saveStationRef = saveStationRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsaveLoadWidget_C::BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UsaveLoadWidget_C_BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsaveLoadWidget_C::BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UsaveLoadWidget_C_BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsaveLoadWidget_C::BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UsaveLoadWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveLoadWidget.saveLoadWidget_C.ExecuteUbergraph_saveLoadWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaveLoadWidget_C::ExecuteUbergraph_saveLoadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveLoadWidget.saveLoadWidget_C.ExecuteUbergraph_saveLoadWidget");

	UsaveLoadWidget_C_ExecuteUbergraph_saveLoadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
