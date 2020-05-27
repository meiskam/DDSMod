
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ArandomSampleDialogueInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.UserConstructionScript");

	ArandomSampleDialogueInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ArandomSampleDialogueInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ReceiveBeginPlay");

	ArandomSampleDialogueInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ConfigDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           male                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArandomSampleDialogueInstance_C::ConfigDialogue(bool male)
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ConfigDialogue");

	ArandomSampleDialogueInstance_C_ConfigDialogue_Params params;
	params.male = male;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ExecuteUbergraph_randomSampleDialogueInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArandomSampleDialogueInstance_C::ExecuteUbergraph_randomSampleDialogueInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ExecuteUbergraph_randomSampleDialogueInstance");

	ArandomSampleDialogueInstance_C_ExecuteUbergraph_randomSampleDialogueInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
