
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

// Function pauseMenu.pauseMenu_C.showConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ConfirmActionIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpauseMenu_C::showConfirm(const struct FText& Header, const struct FText& Desc, int ConfirmActionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.showConfirm");

	UpauseMenu_C_showConfirm_Params params;
	params.Header = Header;
	params.Desc = Desc;
	params.ConfirmActionIndex = ConfirmActionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.terminateMe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canUnpause                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UpauseMenu_C::terminateMe(bool* canUnpause)
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.terminateMe");

	UpauseMenu_C_terminateMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canUnpause != nullptr)
		*canUnpause = params.canUnpause;
}


// Function pauseMenu.pauseMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpauseMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.Construct");

	UpauseMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpauseMenu_C::BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UpauseMenu_C_BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpauseMenu_C::BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UpauseMenu_C_BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpauseMenu_C::BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UpauseMenu_C_BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpauseMenu_C::BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UpauseMenu_C_BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpauseMenu_C::BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UpauseMenu_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpauseMenu_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UpauseMenu_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpauseMenu_C::BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UpauseMenu_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pauseMenu.pauseMenu_C.ExecuteUbergraph_pauseMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpauseMenu_C::ExecuteUbergraph_pauseMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function pauseMenu.pauseMenu_C.ExecuteUbergraph_pauseMenu");

	UpauseMenu_C_ExecuteUbergraph_pauseMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
