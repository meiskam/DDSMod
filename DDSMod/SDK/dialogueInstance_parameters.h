#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function dialogueInstance.dialogueInstance_C.UserConstructionScript
struct AdialogueInstance_C_UserConstructionScript_Params
{
};

// Function dialogueInstance.dialogueInstance_C.ReceiveBeginPlay
struct AdialogueInstance_C_ReceiveBeginPlay_Params
{
};

// Function dialogueInstance.dialogueInstance_C.eventActivateDialogue
struct AdialogueInstance_C_eventActivateDialogue_Params
{
	class AbaseNPC_C*                                  talkerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dialogueInstance.dialogueInstance_C.playDialogueAudio
struct AdialogueInstance_C_playDialogueAudio_Params
{
	class USoundWave*                                  AudioFile;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dialogueInstance.dialogueInstance_C.openTrading
struct AdialogueInstance_C_openTrading_Params
{
	bool                                               regularShop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dialogueInstance.dialogueInstance_C.ExecuteUbergraph_dialogueInstance
struct AdialogueInstance_C_ExecuteUbergraph_dialogueInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
