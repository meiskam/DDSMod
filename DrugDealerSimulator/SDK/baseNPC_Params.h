#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function baseNPC.baseNPC_C.ExpandRama
	 */
	struct AbaseNPC_C_ExpandRama_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.calcSaleExp
	 */
	struct AbaseNPC_C_calcSaleExp_Params
	{
	public:
		float                                                      expOut;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.calcExpoEvent
	 */
	struct AbaseNPC_C_calcExpoEvent_Params
	{
	public:
		float                                                      ExpoVal;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.saleReputationUpdate
	 */
	struct AbaseNPC_C_saleReputationUpdate_Params
	{
	public:
		float                                                      productQuality;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.animUpdates
	 */
	struct AbaseNPC_C_animUpdates_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.calcSaleRisk
	 */
	struct AbaseNPC_C_calcSaleRisk_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.calcSaleExposure
	 */
	struct AbaseNPC_C_calcSaleExposure_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.setClientLooks
	 */
	struct AbaseNPC_C_setClientLooks_Params
	{
	public:
		bool                                                       isMale;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function baseNPC.baseNPC_C.lookAtPlayer
	 */
	struct AbaseNPC_C_lookAtPlayer_Params
	{
	public:
		bool                                                       Look;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.randomiseAnimationDynamics
	 */
	struct AbaseNPC_C_randomiseAnimationDynamics_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.TaskDone
	 */
	struct AbaseNPC_C_TaskDone_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function baseNPC.baseNPC_C.assignPublicTask
	 */
	struct AbaseNPC_C_assignPublicTask_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.chooseGoHomeLocation
	 */
	struct AbaseNPC_C_chooseGoHomeLocation_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.checkRotating
	 */
	struct AbaseNPC_C_checkRotating_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.UpdateMorphTargets
	 */
	struct AbaseNPC_C_UpdateMorphTargets_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.GetMorphTargetValue
	 */
	struct AbaseNPC_C_GetMorphTargetValue_Params
	{
	public:
		bool                                                       CanMorph;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.SetMasterPoseComponentForParts
	 */
	struct AbaseNPC_C_SetMasterPoseComponentForParts_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.IsDefaultMeshInheritungItsAnimationAsset
	 */
	struct AbaseNPC_C_IsDefaultMeshInheritungItsAnimationAsset_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function baseNPC.baseNPC_C.processReceivedDrugs
	 */
	struct AbaseNPC_C_processReceivedDrugs_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.setupNewDrugSale
	 */
	struct AbaseNPC_C_setupNewDrugSale_Params
	{
	public:
		struct FdrugData                                           drugData;                                                // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    DrugQuantity;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                characterName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      expectedPrice;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OrderId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TaskID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isMale;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isDealer;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ExpectationLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.UserConstructionScript
	 */
	struct AbaseNPC_C_UserConstructionScript_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.ReceiveBeginPlay
	 */
	struct AbaseNPC_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.ReceiveTick
	 */
	struct AbaseNPC_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.dialogueMode
	 */
	struct AbaseNPC_C_dialogueMode_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.endDialogueMode
	 */
	struct AbaseNPC_C_endDialogueMode_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.activateTrade
	 */
	struct AbaseNPC_C_activateTrade_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.endTrade
	 */
	struct AbaseNPC_C_endTrade_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.drugSaleSuccesfull
	 */
	struct AbaseNPC_C_drugSaleSuccesfull_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.clientResignedWaiting
	 */
	struct AbaseNPC_C_clientResignedWaiting_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.CashDeliverySuccessfull
	 */
	struct AbaseNPC_C_CashDeliverySuccessfull_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.gotHome
	 */
	struct AbaseNPC_C_gotHome_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.continueGoHome
	 */
	struct AbaseNPC_C_continueGoHome_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.eventEnterDialogue
	 */
	struct AbaseNPC_C_eventEnterDialogue_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.failGoHome
	 */
	struct AbaseNPC_C_failGoHome_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.togglePoseCalc
	 */
	struct AbaseNPC_C_togglePoseCalc_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.waitTimeMultiplierCheck
	 */
	struct AbaseNPC_C_waitTimeMultiplierCheck_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.RetryDialAssign
	 */
	struct AbaseNPC_C_RetryDialAssign_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.LongRadiusChanged
	 */
	struct AbaseNPC_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function baseNPC.baseNPC_C.ShortRadiusChanged
	 */
	struct AbaseNPC_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function baseNPC.baseNPC_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AbaseNPC_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function baseNPC.baseNPC_C.RamaLoadedEvent
	 */
	struct AbaseNPC_C_RamaLoadedEvent_Params
	{	};

	/**
	 * Function baseNPC.baseNPC_C.ExecuteUbergraph_baseNPC
	 */
	struct AbaseNPC_C_ExecuteUbergraph_baseNPC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
