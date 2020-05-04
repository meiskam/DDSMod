
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

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ArandomSaleDialogueInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.UserConstructionScript");

	ArandomSaleDialogueInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ArandomSaleDialogueInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ReceiveBeginPlay");

	ArandomSaleDialogueInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ConfigDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           male                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArandomSaleDialogueInstance_C::ConfigDialogue(bool male)
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ConfigDialogue");

	ArandomSaleDialogueInstance_C_ConfigDialogue_Params params;
	params.male = male;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ExecuteUbergraph_randomSaleDialogueInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArandomSaleDialogueInstance_C::ExecuteUbergraph_randomSaleDialogueInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ExecuteUbergraph_randomSaleDialogueInstance");

	ArandomSaleDialogueInstance_C_ExecuteUbergraph_randomSaleDialogueInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
