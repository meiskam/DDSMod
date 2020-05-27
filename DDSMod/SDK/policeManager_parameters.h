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

// Function policeManager.policeManager_C.adaptDifficulty
struct ApoliceManager_C_adaptDifficulty_Params
{
};

// Function policeManager.policeManager_C.calcDrugQuanPenalty
struct ApoliceManager_C_calcDrugQuanPenalty_Params
{
	int                                                Fine;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function policeManager.policeManager_C.calcDrugGramsPlayer
struct ApoliceManager_C_calcDrugGramsPlayer_Params
{
};

// Function policeManager.policeManager_C.applyPenalties
struct ApoliceManager_C_applyPenalties_Params
{
};

// Function policeManager.policeManager_C.queuePenalty
struct ApoliceManager_C_queuePenalty_Params
{
	struct FText                                       Reson;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddDrugAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policeManager.policeManager_C.refreshPolicemenStatus
struct ApoliceManager_C_refreshPolicemenStatus_Params
{
};

// Function policeManager.policeManager_C.resetAllAreas
struct ApoliceManager_C_resetAllAreas_Params
{
};

// Function policeManager.policeManager_C.getMinPatrols
struct ApoliceManager_C_getMinPatrols_Params
{
	int                                                minPatrols;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function policeManager.policeManager_C.checkWorldStatus
struct ApoliceManager_C_checkWorldStatus_Params
{
};

// Function policeManager.policeManager_C.recallOnePatrol
struct ApoliceManager_C_recallOnePatrol_Params
{
};

// Function policeManager.policeManager_C.spawnNewPatrol
struct ApoliceManager_C_spawnNewPatrol_Params
{
	bool                                               Dog;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnAtSecondary;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policeManager.policeManager_C.assignPatrolArea
struct ApoliceManager_C_assignPatrolArea_Params
{
};

// Function policeManager.policeManager_C.refreshAreaStatus
struct ApoliceManager_C_refreshAreaStatus_Params
{
};

// Function policeManager.policeManager_C.UserConstructionScript
struct ApoliceManager_C_UserConstructionScript_Params
{
};

// Function policeManager.policeManager_C.ReceiveBeginPlay
struct ApoliceManager_C_ReceiveBeginPlay_Params
{
};

// Function policeManager.policeManager_C.requestPatrolArea
struct ApoliceManager_C_requestPatrolArea_Params
{
	class APolicemanBaseClass_C*                       Querier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policeManager.policeManager_C.checkRequestQuery
struct ApoliceManager_C_checkRequestQuery_Params
{
};

// Function policeManager.policeManager_C.playRadioComs
struct ApoliceManager_C_playRadioComs_Params
{
};

// Function policeManager.policeManager_C.trySpawnPatrol
struct ApoliceManager_C_trySpawnPatrol_Params
{
};

// Function policeManager.policeManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ApoliceManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function policeManager.policeManager_C.tryDisplayPenalty
struct ApoliceManager_C_tryDisplayPenalty_Params
{
};

// Function policeManager.policeManager_C.ExecuteUbergraph_policeManager
struct ApoliceManager_C_ExecuteUbergraph_policeManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
