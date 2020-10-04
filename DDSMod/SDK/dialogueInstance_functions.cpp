
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function dialogueInstance.dialogueInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdialogueInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueInstance.dialogueInstance_C.UserConstructionScript");

	AdialogueInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueInstance.dialogueInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdialogueInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueInstance.dialogueInstance_C.ReceiveBeginPlay");

	AdialogueInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueInstance.dialogueInstance_C.eventActivateDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AbaseNPC_C*              talkerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdialogueInstance_C::eventActivateDialogue(class AbaseNPC_C* talkerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueInstance.dialogueInstance_C.eventActivateDialogue");

	AdialogueInstance_C_eventActivateDialogue_Params params;
	params.talkerRef = talkerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueInstance.dialogueInstance_C.playDialogueAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              AudioFile                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdialogueInstance_C::playDialogueAudio(class USoundWave* AudioFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueInstance.dialogueInstance_C.playDialogueAudio");

	AdialogueInstance_C_playDialogueAudio_Params params;
	params.AudioFile = AudioFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueInstance.dialogueInstance_C.openTrading
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           regularShop                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdialogueInstance_C::openTrading(bool regularShop)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueInstance.dialogueInstance_C.openTrading");

	AdialogueInstance_C_openTrading_Params params;
	params.regularShop = regularShop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueInstance.dialogueInstance_C.ExecuteUbergraph_dialogueInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdialogueInstance_C::ExecuteUbergraph_dialogueInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueInstance.dialogueInstance_C.ExecuteUbergraph_dialogueInstance");

	AdialogueInstance_C_ExecuteUbergraph_dialogueInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
