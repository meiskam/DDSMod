
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

// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdealerSaleDialogueInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.UserConstructionScript");

	AdealerSaleDialogueInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdealerSaleDialogueInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ReceiveBeginPlay");

	AdealerSaleDialogueInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ConfigDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           male                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdealerSaleDialogueInstance_C::ConfigDialogue(bool male)
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ConfigDialogue");

	AdealerSaleDialogueInstance_C_ConfigDialogue_Params params;
	params.male = male;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ExecuteUbergraph_dealerSaleDialogueInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdealerSaleDialogueInstance_C::ExecuteUbergraph_dealerSaleDialogueInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ExecuteUbergraph_dealerSaleDialogueInstance");

	AdealerSaleDialogueInstance_C_ExecuteUbergraph_dealerSaleDialogueInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
