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
	 * Function questManager.questManager_C.ReportLaunderDoor
	 */
	struct AquestManager_C_ReportLaunderDoor_Params
	{
	public:
		class AlaunderDoor_C*                                      Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.RamaExpand
	 */
	struct AquestManager_C_RamaExpand_Params
	{	};

	/**
	 * Function questManager.questManager_C.fixTaskDuplicates
	 */
	struct AquestManager_C_fixTaskDuplicates_Params
	{	};

	/**
	 * Function questManager.questManager_C.countUnlockedHideouts
	 */
	struct AquestManager_C_countUnlockedHideouts_Params
	{
	public:
		bool                                                       AllRented;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function questManager.questManager_C.checkSecondZoneUnlock
	 */
	struct AquestManager_C_checkSecondZoneUnlock_Params
	{
	public:
		bool                                                       checkPositive;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function questManager.questManager_C.checkCanShowTip
	 */
	struct AquestManager_C_checkCanShowTip_Params
	{
	public:
		bool                                                       CanShowTip;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function questManager.questManager_C.onLoadFixes
	 */
	struct AquestManager_C_onLoadFixes_Params
	{	};

	/**
	 * Function questManager.questManager_C.questEnded
	 */
	struct AquestManager_C_questEnded_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.activateQuest
	 */
	struct AquestManager_C_activateQuest_Params
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.addNewQuest
	 */
	struct AquestManager_C_addNewQuest_Params
	{
	public:
		class FText                                                QuestNam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                QuestShort;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                QuestDescription;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      QuestExp;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    QuestCash;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              QuestScriptNam;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.checkCanAddWidget
	 */
	struct AquestManager_C_checkCanAddWidget_Params
	{
	public:
		bool                                                       ok;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function questManager.questManager_C.playerAvailable
	 */
	struct AquestManager_C_playerAvailable_Params
	{
	public:
		bool                                                       IsAvailable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function questManager.questManager_C.checkTaskRelatedMarkers
	 */
	struct AquestManager_C_checkTaskRelatedMarkers_Params
	{
	public:
		int32_t                                                    TaskID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.checkDisplayNewTask
	 */
	struct AquestManager_C_checkDisplayNewTask_Params
	{	};

	/**
	 * Function questManager.questManager_C.playNarration
	 */
	struct AquestManager_C_playNarration_Params
	{
	public:
		class USoundWave*                                          Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                MonologueText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.markTaskStatus
	 */
	struct AquestManager_C_markTaskStatus_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EtaskStatuses                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.createNewTask
	 */
	struct AquestManager_C_createNewTask_Params
	{
	public:
		class FText                                                TaskName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                taskDecription;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      taskExpReward;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FunctionOnComplete;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       creteTaskMarker;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             taskMarkerLocation;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                MarkerTitle;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                MarkerDesc;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       isSale;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SpecialTask;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AssignedID;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.setupDefaultReferences
	 */
	struct AquestManager_C_setupDefaultReferences_Params
	{	};

	/**
	 * Function questManager.questManager_C.UserConstructionScript
	 */
	struct AquestManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function questManager.questManager_C.ReceiveBeginPlay
	 */
	struct AquestManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function questManager.questManager_C.initialiseQuestManager
	 */
	struct AquestManager_C_initialiseQuestManager_Params
	{	};

	/**
	 * Function questManager.questManager_C.handOverMoney
	 */
	struct AquestManager_C_handOverMoney_Params
	{	};

	/**
	 * Function questManager.questManager_C.newNarrationEvent
	 */
	struct AquestManager_C_newNarrationEvent_Params
	{
	public:
		class FString                                              stringIdentifier;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.unlockCryptoNarr
	 */
	struct AquestManager_C_unlockCryptoNarr_Params
	{	};

	/**
	 * Function questManager.questManager_C.tryAtm02
	 */
	struct AquestManager_C_tryAtm02_Params
	{	};

	/**
	 * Function questManager.questManager_C.newGameTip
	 */
	struct AquestManager_C_newGameTip_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function questManager.questManager_C.gameTipEnd
	 */
	struct AquestManager_C_gameTipEnd_Params
	{	};

	/**
	 * Function questManager.questManager_C.FirstPoliceEncounter
	 */
	struct AquestManager_C_FirstPoliceEncounter_Params
	{	};

	/**
	 * Function questManager.questManager_C.FirstDogEncounter
	 */
	struct AquestManager_C_FirstDogEncounter_Params
	{	};

	/**
	 * Function questManager.questManager_C.delayNarration
	 */
	struct AquestManager_C_delayNarration_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.eddieFirstCall
	 */
	struct AquestManager_C_eddieFirstCall_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddieFirstCall
	 */
	struct AquestManager_C_repeatEddieFirstCall_Params
	{	};

	/**
	 * Function questManager.questManager_C.firstMetEddie
	 */
	struct AquestManager_C_firstMetEddie_Params
	{	};

	/**
	 * Function questManager.questManager_C.retrievedFirstPackage
	 */
	struct AquestManager_C_retrievedFirstPackage_Params
	{	};

	/**
	 * Function questManager.questManager_C.salesUpdate
	 */
	struct AquestManager_C_salesUpdate_Params
	{	};

	/**
	 * Function questManager.questManager_C.activatedShadyComm
	 */
	struct AquestManager_C_activatedShadyComm_Params
	{	};

	/**
	 * Function questManager.questManager_C.firstThreeOrders
	 */
	struct AquestManager_C_firstThreeOrders_Params
	{	};

	/**
	 * Function questManager.questManager_C.runIntroCredits
	 */
	struct AquestManager_C_runIntroCredits_Params
	{	};

	/**
	 * Function questManager.questManager_C.oneIntroCredit
	 */
	struct AquestManager_C_oneIntroCredit_Params
	{	};

	/**
	 * Function questManager.questManager_C.firstWorkStation
	 */
	struct AquestManager_C_firstWorkStation_Params
	{	};

	/**
	 * Function questManager.questManager_C.madeFirstOrder
	 */
	struct AquestManager_C_madeFirstOrder_Params
	{	};

	/**
	 * Function questManager.questManager_C.workStationTask
	 */
	struct AquestManager_C_workStationTask_Params
	{	};

	/**
	 * Function questManager.questManager_C.firstOwnOrderReceived
	 */
	struct AquestManager_C_firstOwnOrderReceived_Params
	{
	public:
		int32_t                                                    TaskID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.tutWorkPlayerPutDrug
	 */
	struct AquestManager_C_tutWorkPlayerPutDrug_Params
	{	};

	/**
	 * Function questManager.questManager_C.tutWorkPlayerPutContainer
	 */
	struct AquestManager_C_tutWorkPlayerPutContainer_Params
	{	};

	/**
	 * Function questManager.questManager_C.tutWorkPlayerAddedSubstance
	 */
	struct AquestManager_C_tutWorkPlayerAddedSubstance_Params
	{	};

	/**
	 * Function questManager.questManager_C.tutWorkPlayerPackagedProduct
	 */
	struct AquestManager_C_tutWorkPlayerPackagedProduct_Params
	{	};

	/**
	 * Function questManager.questManager_C.cartelRefundTip
	 */
	struct AquestManager_C_cartelRefundTip_Params
	{	};

	/**
	 * Function questManager.questManager_C.introduceBank
	 */
	struct AquestManager_C_introduceBank_Params
	{	};

	/**
	 * Function questManager.questManager_C.atmActivated
	 */
	struct AquestManager_C_atmActivated_Params
	{	};

	/**
	 * Function questManager.questManager_C.checkLevelUnlocks
	 */
	struct AquestManager_C_checkLevelUnlocks_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallApartmentRent
	 */
	struct AquestManager_C_eddieCallApartmentRent_Params
	{	};

	/**
	 * Function questManager.questManager_C.apartmentRentMessage
	 */
	struct AquestManager_C_apartmentRentMessage_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddieRent
	 */
	struct AquestManager_C_repeatEddieRent_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieRent
	 */
	struct AquestManager_C_retryEddieRent_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallPolice
	 */
	struct AquestManager_C_eddieCallPolice_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddiePolice
	 */
	struct AquestManager_C_repeatEddiePolice_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddiePolice
	 */
	struct AquestManager_C_retryEddiePolice_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallPoliceEnd
	 */
	struct AquestManager_C_eddieCallPoliceEnd_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallFurnitureShop
	 */
	struct AquestManager_C_eddieCallFurnitureShop_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddieFurniture
	 */
	struct AquestManager_C_repeatEddieFurniture_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieFurniture
	 */
	struct AquestManager_C_retryEddieFurniture_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieFurnitureEnd
	 */
	struct AquestManager_C_eddieFurnitureEnd_Params
	{	};

	/**
	 * Function questManager.questManager_C.apartmentModeFirstLaunch
	 */
	struct AquestManager_C_apartmentModeFirstLaunch_Params
	{	};

	/**
	 * Function questManager.questManager_C.apartmentModeIntroduction
	 */
	struct AquestManager_C_apartmentModeIntroduction_Params
	{	};

	/**
	 * Function questManager.questManager_C.apartmentViewerLaunch
	 */
	struct AquestManager_C_apartmentViewerLaunch_Params
	{	};

	/**
	 * Function questManager.questManager_C.appRentHint
	 */
	struct AquestManager_C_appRentHint_Params
	{	};

	/**
	 * Function questManager.questManager_C.playGameOverNarration
	 */
	struct AquestManager_C_playGameOverNarration_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallDrugstore
	 */
	struct AquestManager_C_eddieCallDrugstore_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddieDrugstore
	 */
	struct AquestManager_C_repeatEddieDrugstore_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieDrugstore
	 */
	struct AquestManager_C_retryEddieDrugstore_Params
	{	};

	/**
	 * Function questManager.questManager_C.drugStoreTask
	 */
	struct AquestManager_C_drugStoreTask_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallBank
	 */
	struct AquestManager_C_eddieCallBank_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddieBank
	 */
	struct AquestManager_C_repeatEddieBank_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieBank
	 */
	struct AquestManager_C_retryEddieBank_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallLaunder
	 */
	struct AquestManager_C_eddieCallLaunder_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddieLaunder
	 */
	struct AquestManager_C_repeatEddieLaunder_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieLaunder
	 */
	struct AquestManager_C_retryEddieLaunder_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieEndBank
	 */
	struct AquestManager_C_eddieEndBank_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieEndLaunder
	 */
	struct AquestManager_C_eddieEndLaunder_Params
	{	};

	/**
	 * Function questManager.questManager_C.ConfirmedOneOrder
	 */
	struct AquestManager_C_ConfirmedOneOrder_Params
	{	};

	/**
	 * Function questManager.questManager_C.keyFinder
	 */
	struct AquestManager_C_keyFinder_Params
	{	};

	/**
	 * Function questManager.questManager_C.rentedFirstApartment
	 */
	struct AquestManager_C_rentedFirstApartment_Params
	{
	public:
		struct FVector                                             newApartmentLocation;                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.PlayerLeftApartment
	 */
	struct AquestManager_C_PlayerLeftApartment_Params
	{	};

	/**
	 * Function questManager.questManager_C.openEddieFurnitureGate
	 */
	struct AquestManager_C_openEddieFurnitureGate_Params
	{	};

	/**
	 * Function questManager.questManager_C.longHireDealer
	 */
	struct AquestManager_C_longHireDealer_Params
	{	};

	/**
	 * Function questManager.questManager_C.tryWS_Task
	 */
	struct AquestManager_C_tryWS_Task_Params
	{	};

	/**
	 * Function questManager.questManager_C.longAddict
	 */
	struct AquestManager_C_longAddict_Params
	{	};

	/**
	 * Function questManager.questManager_C.longUnlockedAreas
	 */
	struct AquestManager_C_longUnlockedAreas_Params
	{	};

	/**
	 * Function questManager.questManager_C.taskGainTerritory
	 */
	struct AquestManager_C_taskGainTerritory_Params
	{	};

	/**
	 * Function questManager.questManager_C.putOneSpray
	 */
	struct AquestManager_C_putOneSpray_Params
	{	};

	/**
	 * Function questManager.questManager_C.gaveAwayFreeSample
	 */
	struct AquestManager_C_gaveAwayFreeSample_Params
	{	};

	/**
	 * Function questManager.questManager_C.launderCash
	 */
	struct AquestManager_C_launderCash_Params
	{	};

	/**
	 * Function questManager.questManager_C.addCashToLaunder
	 */
	struct AquestManager_C_addCashToLaunder_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.ReceiveTick
	 */
	struct AquestManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.eddieCallGangsters
	 */
	struct AquestManager_C_eddieCallGangsters_Params
	{	};

	/**
	 * Function questManager.questManager_C.repeatEddieGangsters
	 */
	struct AquestManager_C_repeatEddieGangsters_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieGangsters
	 */
	struct AquestManager_C_retryEddieGangsters_Params
	{	};

	/**
	 * Function questManager.questManager_C.spraySymbolSelection
	 */
	struct AquestManager_C_spraySymbolSelection_Params
	{	};

	/**
	 * Function questManager.questManager_C.introductionBallena
	 */
	struct AquestManager_C_introductionBallena_Params
	{	};

	/**
	 * Function questManager.questManager_C.introductionKeiji
	 */
	struct AquestManager_C_introductionKeiji_Params
	{	};

	/**
	 * Function questManager.questManager_C.unlockGangKeiji
	 */
	struct AquestManager_C_unlockGangKeiji_Params
	{	};

	/**
	 * Function questManager.questManager_C.unlockGangBallena
	 */
	struct AquestManager_C_unlockGangBallena_Params
	{	};

	/**
	 * Function questManager.questManager_C.forceUnlockSecondZone
	 */
	struct AquestManager_C_forceUnlockSecondZone_Params
	{	};

	/**
	 * Function questManager.questManager_C.longGetBig
	 */
	struct AquestManager_C_longGetBig_Params
	{	};

	/**
	 * Function questManager.questManager_C.longGainGangRespect
	 */
	struct AquestManager_C_longGainGangRespect_Params
	{	};

	/**
	 * Function questManager.questManager_C.checkDomination
	 */
	struct AquestManager_C_checkDomination_Params
	{	};

	/**
	 * Function questManager.questManager_C.longDomination
	 */
	struct AquestManager_C_longDomination_Params
	{	};

	/**
	 * Function questManager.questManager_C.taskUnlockDowntown
	 */
	struct AquestManager_C_taskUnlockDowntown_Params
	{	};

	/**
	 * Function questManager.questManager_C.fugitiveComment
	 */
	struct AquestManager_C_fugitiveComment_Params
	{	};

	/**
	 * Function questManager.questManager_C.quickHint
	 */
	struct AquestManager_C_quickHint_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EquickHintType                                             Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.tryDisplayQuickHint
	 */
	struct AquestManager_C_tryDisplayQuickHint_Params
	{	};

	/**
	 * Function questManager.questManager_C.policeHoursHint
	 */
	struct AquestManager_C_policeHoursHint_Params
	{	};

	/**
	 * Function questManager.questManager_C.firstOrderSpawned
	 */
	struct AquestManager_C_firstOrderSpawned_Params
	{	};

	/**
	 * Function questManager.questManager_C.longMoreAreas01
	 */
	struct AquestManager_C_longMoreAreas01_Params
	{	};

	/**
	 * Function questManager.questManager_C.longMoreAreas02
	 */
	struct AquestManager_C_longMoreAreas02_Params
	{	};

	/**
	 * Function questManager.questManager_C.longMoreAreas03
	 */
	struct AquestManager_C_longMoreAreas03_Params
	{	};

	/**
	 * Function questManager.questManager_C.openWeedGate
	 */
	struct AquestManager_C_openWeedGate_Params
	{	};

	/**
	 * Function questManager.questManager_C.closeWeedGate
	 */
	struct AquestManager_C_closeWeedGate_Params
	{	};

	/**
	 * Function questManager.questManager_C.displayWeedTutorial
	 */
	struct AquestManager_C_displayWeedTutorial_Params
	{	};

	/**
	 * Function questManager.questManager_C.displayPlantHints
	 */
	struct AquestManager_C_displayPlantHints_Params
	{
	public:
		bool                                                       indoor;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function questManager.questManager_C.eddieCallPsychedelics
	 */
	struct AquestManager_C_eddieCallPsychedelics_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieRepeatPsychedelics
	 */
	struct AquestManager_C_eddieRepeatPsychedelics_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddiePsychedelics
	 */
	struct AquestManager_C_retryEddiePsychedelics_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallPsychedelicsEnd
	 */
	struct AquestManager_C_eddieCallPsychedelicsEnd_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieRepeatPsychedelicsEnd
	 */
	struct AquestManager_C_eddieRepeatPsychedelicsEnd_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddiePsychedelicsEnd
	 */
	struct AquestManager_C_retryEddiePsychedelicsEnd_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieEndPsychedelics
	 */
	struct AquestManager_C_eddieEndPsychedelics_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieEndPsychedelicsEnd
	 */
	struct AquestManager_C_eddieEndPsychedelicsEnd_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallSectorC
	 */
	struct AquestManager_C_eddieCallSectorC_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieRepeatSectorc
	 */
	struct AquestManager_C_eddieRepeatSectorc_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieSecotrc
	 */
	struct AquestManager_C_retryEddieSecotrc_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieCallLaundry
	 */
	struct AquestManager_C_eddieCallLaundry_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieRepeatLaundry
	 */
	struct AquestManager_C_eddieRepeatLaundry_Params
	{	};

	/**
	 * Function questManager.questManager_C.retryEddieLaundry
	 */
	struct AquestManager_C_retryEddieLaundry_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieEndSectorc
	 */
	struct AquestManager_C_eddieEndSectorc_Params
	{	};

	/**
	 * Function questManager.questManager_C.eddieEndLaundry
	 */
	struct AquestManager_C_eddieEndLaundry_Params
	{	};

	/**
	 * Function questManager.questManager_C.UnlockSectorC
	 */
	struct AquestManager_C_UnlockSectorC_Params
	{	};

	/**
	 * Function questManager.questManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AquestManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function questManager.questManager_C.TrySectorC_Quests
	 */
	struct AquestManager_C_TrySectorC_Quests_Params
	{	};

	/**
	 * Function questManager.questManager_C.NewLaunderHidout
	 */
	struct AquestManager_C_NewLaunderHidout_Params
	{	};

	/**
	 * Function questManager.questManager_C.ReopenNewLaunder
	 */
	struct AquestManager_C_ReopenNewLaunder_Params
	{	};

	/**
	 * Function questManager.questManager_C.ExecuteUbergraph_questManager
	 */
	struct AquestManager_C_ExecuteUbergraph_questManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
