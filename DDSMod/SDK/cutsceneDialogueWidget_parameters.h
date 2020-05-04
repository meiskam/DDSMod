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

// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.setup
struct UcutsceneDialogueWidget_C_setup_Params
{
	class AActor*                                      Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OptionA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       OptionB;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     functionOptionA;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     FunctionOptionB;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateA
struct UcutsceneDialogueWidget_C_ActivateA_Params
{
};

// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateB
struct UcutsceneDialogueWidget_C_ActivateB_Params
{
};

// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.killWidget
struct UcutsceneDialogueWidget_C_killWidget_Params
{
};

// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ExecuteUbergraph_cutsceneDialogueWidget
struct UcutsceneDialogueWidget_C_ExecuteUbergraph_cutsceneDialogueWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
