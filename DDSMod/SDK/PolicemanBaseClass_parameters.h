#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PolicemanBaseClass.PolicemanBaseClass_C.adaptDifficulty
struct APolicemanBaseClass_C_adaptDifficulty_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.checkCanSpotPlayer
struct APolicemanBaseClass_C_checkCanSpotPlayer_Params
{
	bool                                               canSpot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.checkBallenaProtection
struct APolicemanBaseClass_C_checkBallenaProtection_Params
{
	bool                                               isProtected;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.checkPlayerRunning
struct APolicemanBaseClass_C_checkPlayerRunning_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.finishChasing
struct APolicemanBaseClass_C_finishChasing_Params
{
	bool                                               StayAlerted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.checkChasingPolicemen
struct APolicemanBaseClass_C_checkChasingPolicemen_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.calcControlMultiplier
struct APolicemanBaseClass_C_calcControlMultiplier_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.alertedCountdown
struct APolicemanBaseClass_C_alertedCountdown_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.calcPerceptionRaise
struct APolicemanBaseClass_C_calcPerceptionRaise_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.playVoiceSound
struct APolicemanBaseClass_C_playVoiceSound_Params
{
	class USoundCue*                                   Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardVector
struct APolicemanBaseClass_C_setBlackboardVector_Params
{
	struct FName                                       KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorVal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardString
struct APolicemanBaseClass_C_setBlackboardString_Params
{
	struct FName                                       KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringVal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardBool
struct APolicemanBaseClass_C_setBlackboardBool_Params
{
	struct FName                                       KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.lookAtPlayer
struct APolicemanBaseClass_C_lookAtPlayer_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               lookAtPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.UserConstructionScript
struct APolicemanBaseClass_C_UserConstructionScript_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveTick
struct APolicemanBaseClass_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature
struct APolicemanBaseClass_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.playSeekSound
struct APolicemanBaseClass_C_playSeekSound_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveBeginPlay
struct APolicemanBaseClass_C_ReceiveBeginPlay_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.InitialiseMe
struct APolicemanBaseClass_C_InitialiseMe_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.RecallPatrol
struct APolicemanBaseClass_C_RecallPatrol_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.HeardSound
struct APolicemanBaseClass_C_HeardSound_Params
{
	float                                              Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.sightTick
struct APolicemanBaseClass_C_sightTick_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.observationUpdate
struct APolicemanBaseClass_C_observationUpdate_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.EngageSuspect
struct APolicemanBaseClass_C_EngageSuspect_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.LostPlayer
struct APolicemanBaseClass_C_LostPlayer_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.SetChaseMode
struct APolicemanBaseClass_C_SetChaseMode_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.EndChase
struct APolicemanBaseClass_C_EndChase_Params
{
	bool                                               StayAlerted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               cancelAllChasers;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.ReangageChase
struct APolicemanBaseClass_C_ReangageChase_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.walkSpeedCheck
struct APolicemanBaseClass_C_walkSpeedCheck_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.removeMe
struct APolicemanBaseClass_C_removeMe_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.forceSuspect
struct APolicemanBaseClass_C_forceSuspect_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.despawnPatrol
struct APolicemanBaseClass_C_despawnPatrol_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.tryDespawn
struct APolicemanBaseClass_C_tryDespawn_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.resetHear
struct APolicemanBaseClass_C_resetHear_Params
{
};

// Function PolicemanBaseClass.PolicemanBaseClass_C.ExecuteUbergraph_PolicemanBaseClass
struct APolicemanBaseClass_C_ExecuteUbergraph_PolicemanBaseClass_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
