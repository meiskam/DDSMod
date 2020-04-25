#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function keijiBP.keijiBP_C.playDialogueLine
struct AkeijiBP_C_playDialogueLine_Params
{
	class USoundWave*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Dialogue_line;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function keijiBP.keijiBP_C.UserConstructionScript
struct AkeijiBP_C_UserConstructionScript_Params
{
};

// Function keijiBP.keijiBP_C.Timeline_0__FinishedFunc
struct AkeijiBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function keijiBP.keijiBP_C.Timeline_0__UpdateFunc
struct AkeijiBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function keijiBP.keijiBP_C.Timeline_1__FinishedFunc
struct AkeijiBP_C_Timeline_1__FinishedFunc_Params
{
};

// Function keijiBP.keijiBP_C.Timeline_1__UpdateFunc
struct AkeijiBP_C_Timeline_1__UpdateFunc_Params
{
};

// Function keijiBP.keijiBP_C.ReceiveBeginPlay
struct AkeijiBP_C_ReceiveBeginPlay_Params
{
};

// Function keijiBP.keijiBP_C.PlayerSatDown
struct AkeijiBP_C_PlayerSatDown_Params
{
};

// Function keijiBP.keijiBP_C.BndEvt__enterTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AkeijiBP_C_BndEvt__enterTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function keijiBP.keijiBP_C.eyeBlink
struct AkeijiBP_C_eyeBlink_Params
{
};

// Function keijiBP.keijiBP_C.keijiNervous
struct AkeijiBP_C_keijiNervous_Params
{
};

// Function keijiBP.keijiBP_C.breakDialogue
struct AkeijiBP_C_breakDialogue_Params
{
};

// Function keijiBP.keijiBP_C.thatTrue
struct AkeijiBP_C_thatTrue_Params
{
};

// Function keijiBP.keijiBP_C.whosAsking
struct AkeijiBP_C_whosAsking_Params
{
};

// Function keijiBP.keijiBP_C.hearYa
struct AkeijiBP_C_hearYa_Params
{
};

// Function keijiBP.keijiBP_C.ReceiveTick
struct AkeijiBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function keijiBP.keijiBP_C.animateMouth
struct AkeijiBP_C_animateMouth_Params
{
};

// Function keijiBP.keijiBP_C.stopAnimateMouth
struct AkeijiBP_C_stopAnimateMouth_Params
{
};

// Function keijiBP.keijiBP_C.sayCorrect
struct AkeijiBP_C_sayCorrect_Params
{
};

// Function keijiBP.keijiBP_C.askYakuza
struct AkeijiBP_C_askYakuza_Params
{
};

// Function keijiBP.keijiBP_C.hellYeah
struct AkeijiBP_C_hellYeah_Params
{
};

// Function keijiBP.keijiBP_C.needTime
struct AkeijiBP_C_needTime_Params
{
};

// Function keijiBP.keijiBP_C.resetKeiji
struct AkeijiBP_C_resetKeiji_Params
{
};

// Function keijiBP.keijiBP_C.ExecuteUbergraph_keijiBP
struct AkeijiBP_C_ExecuteUbergraph_keijiBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
