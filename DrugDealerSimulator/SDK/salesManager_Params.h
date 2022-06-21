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
	 * Function salesManager.salesManager_C.ReleaseAllClients
	 */
	struct AsalesManager_C_ReleaseAllClients_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.CalcArrestBail
	 */
	struct AsalesManager_C_CalcArrestBail_Params
	{
	public:
		int32_t                                                    ArrestedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutBailAmount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.CheckArrestReleases
	 */
	struct AsalesManager_C_CheckArrestReleases_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.TryDepositCashToSafe
	 */
	struct AsalesManager_C_TryDepositCashToSafe_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AreaID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.AddDealerExp
	 */
	struct AsalesManager_C_AddDealerExp_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleQuantity;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      expAmount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.GetClientMeta
	 */
	struct AsalesManager_C_GetClientMeta_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ClientFound;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FClientMeta                                         OutMeta;                                                 // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.ReleaseClient
	 */
	struct AsalesManager_C_ReleaseClient_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.GetClientArrestChance
	 */
	struct AsalesManager_C_GetClientArrestChance_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutChance;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.IsClientArrested
	 */
	struct AsalesManager_C_IsClientArrested_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsArrested;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.ArrestClient
	 */
	struct AsalesManager_C_ArrestClient_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.ReconstructClientList
	 */
	struct AsalesManager_C_ReconstructClientList_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.ExpandRama
	 */
	struct AsalesManager_C_ExpandRama_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.UpdateFlags
	 */
	struct AsalesManager_C_UpdateFlags_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.AddDrugWishlist
	 */
	struct AsalesManager_C_AddDrugWishlist_Params
	{
	public:
		int32_t                                                    DrugIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.countAddictedClients
	 */
	struct AsalesManager_C_countAddictedClients_Params
	{
	public:
		int32_t                                                    ClientCount;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.countMaxDealers
	 */
	struct AsalesManager_C_countMaxDealers_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanHaveMore;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.adaptDifficulty
	 */
	struct AsalesManager_C_adaptDifficulty_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.generateClientMessage
	 */
	struct AsalesManager_C_generateClientMessage_Params
	{
	public:
		bool                                                       dealer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CashMeet;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DrugNam;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       priceHigh;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                Message;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function salesManager.salesManager_C.recalcClientCount
	 */
	struct AsalesManager_C_recalcClientCount_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.tryDisplayClientState
	 */
	struct AsalesManager_C_tryDisplayClientState_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.displayClientAddictedPopup
	 */
	struct AsalesManager_C_displayClientAddictedPopup_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.generateClientName
	 */
	struct AsalesManager_C_generateClientName_Params
	{
	public:
		bool                                                       Male;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                ClientName;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function salesManager.salesManager_C.updateSkillMultipliers
	 */
	struct AsalesManager_C_updateSkillMultipliers_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.spawnAreaSampleClient
	 */
	struct AsalesManager_C_spawnAreaSampleClient_Params
	{
	public:
		class FString                                              ClientArea;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.updateAreaTimeMultiplier
	 */
	struct AsalesManager_C_updateAreaTimeMultiplier_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.loopCheckPrices
	 */
	struct AsalesManager_C_loopCheckPrices_Params
	{
	public:
		bool                                                       someAffordable;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.getOrderedDrugName
	 */
	struct AsalesManager_C_getOrderedDrugName_Params
	{
	public:
		int32_t                                                    DrugIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Output;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function salesManager.salesManager_C.checkClientInterested
	 */
	struct AsalesManager_C_checkClientInterested_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DrugDemandedID;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Interested;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       priceHigh;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Wish;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.badSaleResponse
	 */
	struct AsalesManager_C_badSaleResponse_Params
	{
	public:
		bool                                                       ClientLost;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.sendDealerOffer
	 */
	struct AsalesManager_C_sendDealerOffer_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.dealerOfferChance
	 */
	struct AsalesManager_C_dealerOfferChance_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.odMessageResponse
	 */
	struct AsalesManager_C_odMessageResponse_Params
	{
	public:
		bool                                                       dealer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.showODPopup
	 */
	struct AsalesManager_C_showODPopup_Params
	{
	public:
		bool                                                       dealer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.addStatsOD
	 */
	struct AsalesManager_C_addStatsOD_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.selectDrugID
	 */
	struct AsalesManager_C_selectDrugID_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DrugID;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.timeShift
	 */
	struct AsalesManager_C_timeShift_Params
	{
	public:
		float                                                      TimeShiftHours;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeShiftMinutes;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.affectBadReputation
	 */
	struct AsalesManager_C_affectBadReputation_Params
	{
	public:
		float                                                      ReputationLoss;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.calcIntervalMultiplier
	 */
	struct AsalesManager_C_calcIntervalMultiplier_Params
	{
	public:
		float                                                      baseInterval;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutInterval;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.selectClientArea
	 */
	struct AsalesManager_C_selectClientArea_Params
	{
	public:
		class FString                                              SelectedAreaID;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.getOrderedDrugIndex
	 */
	struct AsalesManager_C_getOrderedDrugIndex_Params
	{
	public:
		int32_t                                                    RandomIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.refreshAvailableDrugs
	 */
	struct AsalesManager_C_refreshAvailableDrugs_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DrugsAreAvailable;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.countClientStatistics
	 */
	struct AsalesManager_C_countClientStatistics_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.calcOrderQuantity
	 */
	struct AsalesManager_C_calcOrderQuantity_Params
	{
	public:
		int32_t                                                    inClientID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       nightTime;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       priceHigh;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DrugID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutQuantity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Critical;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.clientSendNewOrder
	 */
	struct AsalesManager_C_clientSendNewOrder_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       nightTime;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.clientOrderCountdown
	 */
	struct AsalesManager_C_clientOrderCountdown_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.generateNewClient
	 */
	struct AsalesManager_C_generateNewClient_Params
	{
	public:
		bool                                                       Force;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function salesManager.salesManager_C.UserConstructionScript
	 */
	struct AsalesManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.ReceiveBeginPlay
	 */
	struct AsalesManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.ReceiveTick
	 */
	struct AsalesManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.tryInitialise
	 */
	struct AsalesManager_C_tryInitialise_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.checkClientState
	 */
	struct AsalesManager_C_checkClientState_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.trySpawnSampleGuy
	 */
	struct AsalesManager_C_trySpawnSampleGuy_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AsalesManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.ForceArrestAllClients
	 */
	struct AsalesManager_C_ForceArrestAllClients_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.AddArrestClients
	 */
	struct AsalesManager_C_AddArrestClients_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.AddArrestScreen
	 */
	struct AsalesManager_C_AddArrestScreen_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.DealerLeveledUp
	 */
	struct AsalesManager_C_DealerLeveledUp_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.AllDealersAddExp
	 */
	struct AsalesManager_C_AllDealersAddExp_Params
	{
	public:
		float                                                      expAmount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function salesManager.salesManager_C.DealerGotArrested
	 */
	struct AsalesManager_C_DealerGotArrested_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.DisplayArrestPopup
	 */
	struct AsalesManager_C_DisplayArrestPopup_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.ForceReleaseAllClients
	 */
	struct AsalesManager_C_ForceReleaseAllClients_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.DisableBallenaBlock
	 */
	struct AsalesManager_C_DisableBallenaBlock_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.KillSalesManager
	 */
	struct AsalesManager_C_KillSalesManager_Params
	{	};

	/**
	 * Function salesManager.salesManager_C.ExecuteUbergraph_salesManager
	 */
	struct AsalesManager_C_ExecuteUbergraph_salesManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
