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

// Function laBallena.laBallena_C.playDialogueLine
struct AlaBallena_C_playDialogueLine_Params
{
	class USoundWave*                                  InSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function laBallena.laBallena_C.UserConstructionScript
struct AlaBallena_C_UserConstructionScript_Params
{
};

// Function laBallena.laBallena_C.Timeline_0__FinishedFunc
struct AlaBallena_C_Timeline_0__FinishedFunc_Params
{
};

// Function laBallena.laBallena_C.Timeline_0__UpdateFunc
struct AlaBallena_C_Timeline_0__UpdateFunc_Params
{
};

// Function laBallena.laBallena_C.Timeline_1__FinishedFunc
struct AlaBallena_C_Timeline_1__FinishedFunc_Params
{
};

// Function laBallena.laBallena_C.Timeline_1__UpdateFunc
struct AlaBallena_C_Timeline_1__UpdateFunc_Params
{
};

// Function laBallena.laBallena_C.ReceiveBeginPlay
struct AlaBallena_C_ReceiveBeginPlay_Params
{
};

// Function laBallena.laBallena_C.PlayerSatDown
struct AlaBallena_C_PlayerSatDown_Params
{
};

// Function laBallena.laBallena_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AlaBallena_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function laBallena.laBallena_C.ReceiveTick
struct AlaBallena_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function laBallena.laBallena_C.animateMouth
struct AlaBallena_C_animateMouth_Params
{
};

// Function laBallena.laBallena_C.stopAnimateMouth
struct AlaBallena_C_stopAnimateMouth_Params
{
};

// Function laBallena.laBallena_C.eyeBlink
struct AlaBallena_C_eyeBlink_Params
{
};

// Function laBallena.laBallena_C.sureAm
struct AlaBallena_C_sureAm_Params
{
};

// Function laBallena.laBallena_C.whatYouWant
struct AlaBallena_C_whatYouWant_Params
{
};

// Function laBallena.laBallena_C.howMuch
struct AlaBallena_C_howMuch_Params
{
};

// Function laBallena.laBallena_C.imIn
struct AlaBallena_C_imIn_Params
{
};

// Function laBallena.laBallena_C.listening
struct AlaBallena_C_listening_Params
{
};

// Function laBallena.laBallena_C.notSure
struct AlaBallena_C_notSure_Params
{
};

// Function laBallena.laBallena_C.resetBallena
struct AlaBallena_C_resetBallena_Params
{
};

// Function laBallena.laBallena_C.ExecuteUbergraph_laBallena
struct AlaBallena_C_ExecuteUbergraph_laBallena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
