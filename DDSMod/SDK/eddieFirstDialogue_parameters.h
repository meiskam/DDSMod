#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function eddieFirstDialogue.eddieFirstDialogue_C.playEddieDialogue
struct AeddieFirstDialogue_C_playEddieDialogue_Params
{
	class USoundWave*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DialogueText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.UserConstructionScript
struct AeddieFirstDialogue_C_UserConstructionScript_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__FinishedFunc
struct AeddieFirstDialogue_C_mouthAnimTL__FinishedFunc_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__UpdateFunc
struct AeddieFirstDialogue_C_mouthAnimTL__UpdateFunc_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__FinishedFunc
struct AeddieFirstDialogue_C_blinkingEyesTL__FinishedFunc_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__UpdateFunc
struct AeddieFirstDialogue_C_blinkingEyesTL__UpdateFunc_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveBeginPlay
struct AeddieFirstDialogue_C_ReceiveBeginPlay_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveTick
struct AeddieFirstDialogue_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AeddieFirstDialogue_C_BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.playInpatientQuote
struct AeddieFirstDialogue_C_playInpatientQuote_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.playerSatDown
struct AeddieFirstDialogue_C_playerSatDown_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.animateMouth
struct AeddieFirstDialogue_C_animateMouth_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.stopAnimateMouth
struct AeddieFirstDialogue_C_stopAnimateMouth_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.eyeBlink
struct AeddieFirstDialogue_C_eyeBlink_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.breakDialogue
struct AeddieFirstDialogue_C_breakDialogue_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.playerTookJoint
struct AeddieFirstDialogue_C_playerTookJoint_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.playerRefusedJoint
struct AeddieFirstDialogue_C_playerRefusedJoint_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.continuePartyQuestion
struct AeddieFirstDialogue_C_continuePartyQuestion_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.whyLaptop
struct AeddieFirstDialogue_C_whyLaptop_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.deaddropQuestion
struct AeddieFirstDialogue_C_deaddropQuestion_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.endDialogue
struct AeddieFirstDialogue_C_endDialogue_Params
{
};

// Function eddieFirstDialogue.eddieFirstDialogue_C.ExecuteUbergraph_eddieFirstDialogue
struct AeddieFirstDialogue_C_ExecuteUbergraph_eddieFirstDialogue_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
