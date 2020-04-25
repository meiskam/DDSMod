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

// Function baseNPC.baseNPC_C.calcSaleExp
struct AbaseNPC_C_calcSaleExp_Params
{
	float                                              expOut;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.calcExpoEvent
struct AbaseNPC_C_calcExpoEvent_Params
{
	float                                              ExpoVal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.saleReputationUpdate
struct AbaseNPC_C_saleReputationUpdate_Params
{
	float                                              productQuality;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.animUpdates
struct AbaseNPC_C_animUpdates_Params
{
};

// Function baseNPC.baseNPC_C.calcSaleRisk
struct AbaseNPC_C_calcSaleRisk_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.calcSaleExposure
struct AbaseNPC_C_calcSaleExposure_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.setClientLooks
struct AbaseNPC_C_setClientLooks_Params
{
	bool                                               isMale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.lookAtPlayer
struct AbaseNPC_C_lookAtPlayer_Params
{
	bool                                               Look;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.randomiseAnimationDynamics
struct AbaseNPC_C_randomiseAnimationDynamics_Params
{
};

// Function baseNPC.baseNPC_C.taskDone
struct AbaseNPC_C_taskDone_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.assignPublicTask
struct AbaseNPC_C_assignPublicTask_Params
{
};

// Function baseNPC.baseNPC_C.chooseGoHomeLocation
struct AbaseNPC_C_chooseGoHomeLocation_Params
{
};

// Function baseNPC.baseNPC_C.checkRotating
struct AbaseNPC_C_checkRotating_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.UpdateMorphTargets
struct AbaseNPC_C_UpdateMorphTargets_Params
{
};

// Function baseNPC.baseNPC_C.GetMorphTargetValue
struct AbaseNPC_C_GetMorphTargetValue_Params
{
	bool                                               CanMorph;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.SetMasterPoseComponentForParts
struct AbaseNPC_C_SetMasterPoseComponentForParts_Params
{
};

// Function baseNPC.baseNPC_C.IsDefaultMeshInheritungItsAnimationAsset
struct AbaseNPC_C_IsDefaultMeshInheritungItsAnimationAsset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.processReceivedDrugs
struct AbaseNPC_C_processReceivedDrugs_Params
{
};

// Function baseNPC.baseNPC_C.setupNewDrugSale
struct AbaseNPC_C_setupNewDrugSale_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                DrugQuantity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       characterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              expectedPrice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OrderId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TaskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isDealer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectationLevel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.UserConstructionScript
struct AbaseNPC_C_UserConstructionScript_Params
{
};

// Function baseNPC.baseNPC_C.ReceiveBeginPlay
struct AbaseNPC_C_ReceiveBeginPlay_Params
{
};

// Function baseNPC.baseNPC_C.ReceiveTick
struct AbaseNPC_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function baseNPC.baseNPC_C.dialogueMode
struct AbaseNPC_C_dialogueMode_Params
{
};

// Function baseNPC.baseNPC_C.endDialogueMode
struct AbaseNPC_C_endDialogueMode_Params
{
};

// Function baseNPC.baseNPC_C.activateTrade
struct AbaseNPC_C_activateTrade_Params
{
};

// Function baseNPC.baseNPC_C.endTrade
struct AbaseNPC_C_endTrade_Params
{
};

// Function baseNPC.baseNPC_C.drugSaleSuccesfull
struct AbaseNPC_C_drugSaleSuccesfull_Params
{
};

// Function baseNPC.baseNPC_C.clientResignedWaiting
struct AbaseNPC_C_clientResignedWaiting_Params
{
};

// Function baseNPC.baseNPC_C.CashDeliverySuccessfull
struct AbaseNPC_C_CashDeliverySuccessfull_Params
{
};

// Function baseNPC.baseNPC_C.gotHome
struct AbaseNPC_C_gotHome_Params
{
};

// Function baseNPC.baseNPC_C.continueGoHome
struct AbaseNPC_C_continueGoHome_Params
{
};

// Function baseNPC.baseNPC_C.eventEnterDialogue
struct AbaseNPC_C_eventEnterDialogue_Params
{
};

// Function baseNPC.baseNPC_C.failGoHome
struct AbaseNPC_C_failGoHome_Params
{
};

// Function baseNPC.baseNPC_C.testAroundPlayer
struct AbaseNPC_C_testAroundPlayer_Params
{
};

// Function baseNPC.baseNPC_C.togglePoseCalc
struct AbaseNPC_C_togglePoseCalc_Params
{
};

// Function baseNPC.baseNPC_C.ExecuteUbergraph_baseNPC
struct AbaseNPC_C_ExecuteUbergraph_baseNPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
