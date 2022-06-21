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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass questManager.questManager_C
	 * Size -> 0x0D90 (FullSize[0x10B8] - InheritedSize[0x0328])
	 */
	class AquestManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     narrator;                                                // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        taskNames;                                               // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        tempDrugNames;                                           // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        taskDecriptions;                                         // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      taskStringActions;                                       // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               taskCompleted;                                           // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               taskFailed;                                              // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               taskIsSale;                                              // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               taskDisplayed;                                           // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               taskSpecial;                                             // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              taskExpRewards;                                          // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       narrationPlaying;                                        // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3EQE[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                defCameraPostProcess;                                    // 0x0400(0x04E0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPostProcessSettings                                greyCameraPostProcess;                                   // 0x08E0(0x04E0) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               firstEncounters;                                         // 0x0DC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       tipActive;                                               // 0x0DD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_APM0[0x7];                                   // 0x0DD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      narrationsPlayed;                                        // 0x0DD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        taskDisplayQueueTitle;                                   // 0x0DE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        taskDisplayQueueDesc;                                    // 0x0DF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<EtaskStatuses>                                      taskDisplayQueueStatus;                                  // 0x0E08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      taskDisplayDelay;                                        // 0x0E18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    firstDeadDropTaskID;                                     // 0x0E1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UgameTipPopup_C*                                     curGameTip;                                              // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       workStationManualOnceOpen;                               // 0x0E28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TW45[0x3];                                   // 0x0E29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    numSales;                                                // 0x0E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       firstSalesDone;                                          // 0x0E30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       firstShadyComm;                                          // 0x0E31(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FRL1[0x2];                                   // 0x0E32(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    firstShadyCommTaskID;                                    // 0x0E34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        introCreditsTitles;                                      // 0x0E38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        introCretitsPersons;                                     // 0x0E48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        introCreditsCompany;                                     // 0x0E58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    introCreditsCurNum;                                      // 0x0E68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       firstDeadDrop;                                           // 0x0E6C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       metEddie;                                                // 0x0E6D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       firstWorkStationMade;                                    // 0x0E6E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WZPE[0x1];                                   // 0x0E6F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    firstDopeOrderTaskID;                                    // 0x0E70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    firstShoppingTaskID;                                     // 0x0E74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       firstOrderDone;                                          // 0x0E78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PDXW[0x3];                                   // 0x0E79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    firstOwnOrderTaskID;                                     // 0x0E7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       firstOwnOrderWasReceived;                                // 0x0E80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GVJ4[0x7];                                   // 0x0E81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AworkspaceTutorialManager_C*                         workStationTutorial;                                     // 0x0E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       workStationTutorialEnded;                                // 0x0E90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       playerKnowsRefundCartel;                                 // 0x0E91(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I650[0x6];                                   // 0x0E92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                waitingTipTitle;                                         // 0x0E98(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                waitingTipDesc;                                          // 0x0EB0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    bankTaskID;                                              // 0x0EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       atmWasActivated;                                         // 0x0ECC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bankWasIntroduced;                                       // 0x0ECD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6H5K[0x2];                                   // 0x0ECE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               levelUpUnlocks;                                          // 0x0ED0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       firstLoaded;                                             // 0x0EE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KBY2[0x7];                                   // 0x0EE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               eddieCalls;                                              // 0x0EE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       apartmentModeIntroduced;                                 // 0x0EF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       apartmentModeFirstLaunched;                              // 0x0EF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_00OK[0x2];                                   // 0x0EFA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    apartmentModeTaskID;                                     // 0x0EFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    rentingTaskID;                                           // 0x0F00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       apartmentViewerLaunched;                                 // 0x0F04(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       appRentDisplayed;                                        // 0x0F05(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GYFT[0x2];                                   // 0x0F06(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    drugStoreTaskID;                                         // 0x0F08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       policeIntroduced;                                        // 0x0F0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TSSO[0x3];                                   // 0x0F0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    confirmedOrderCount;                                     // 0x0F10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    keyFinderTaskID;                                         // 0x0F14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    rentHideoutTaskID;                                       // 0x0F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       firstApartmentRented;                                    // 0x0F1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E1XZ[0x3];                                   // 0x0F1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    furnitureModeTaskID;                                     // 0x0F20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longGainClientsTaskID;                                   // 0x0F24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longFirstDealerTaskID;                                   // 0x0F28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longNewDrugsTaskID;                                      // 0x0F2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        questListName;                                           // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        questListShort;                                          // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        questListDescription;                                    // 0x0F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              questListExpReward;                                      // 0x0F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            questListCashReward;                                     // 0x0F70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               questListActive;                                         // 0x0F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               questListCompleted;                                      // 0x0F90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      questActivateScript;                                     // 0x0FA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    memQuestID;                                              // 0x0FB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5J9O[0x4];                                   // 0x0FB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            taskCompletesQuest;                                      // 0x0FB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    cartelRefundQuestID;                                     // 0x0FC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    markTerritoryTaskID;                                     // 0x0FCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       gainTerritory;                                           // 0x0FD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8BS8[0x3];                                   // 0x0FD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    findSampleClientsTaskID;                                 // 0x0FD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    sprayPutCount;                                           // 0x0FD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       putSprays;                                               // 0x0FDC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       disableNarration;                                        // 0x0FDD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       secondMapZoneUnlocked;                                   // 0x0FDE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NXNL[0x1];                                   // 0x0FDF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    jayShopTaskID;                                           // 0x0FE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    sectorBTaskID;                                           // 0x0FE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      eddieCallCountdown;                                      // 0x0FE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       spraySymbolDialogueDisplayed;                            // 0x0FEC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94S7[0x3];                                   // 0x0FED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    chosenSpraySymbol;                                       // 0x0FF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       eddieCalledGangsters;                                    // 0x0FF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0REO[0x3];                                   // 0x0FF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    meetGangTaskID;                                          // 0x0FF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    sectorBTaskID2;                                          // 0x0FFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longGangsTaskID;                                         // 0x1000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longGainGangRepTaskID;                                   // 0x1004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longDominationTaskID;                                    // 0x1008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ballenaProtection;                                       // 0x100C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       unlockDowntownTask;                                      // 0x100D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YBFH[0x2];                                   // 0x100E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    furtherNorthTaskID;                                      // 0x1010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ballenaFirstQuan;                                        // 0x1014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ballenaFirstSize;                                        // 0x1018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ballenaFirstPrice;                                       // 0x101C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    keijiFirstQuan;                                          // 0x1020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    keijiFirstSize;                                          // 0x1024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    keijiFirstPrice;                                         // 0x1028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_620K[0x4];                                   // 0x102C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        quickHintQueueTexts;                                     // 0x1030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<EquickHintType>                                     quickHintQueueCategories;                                // 0x1040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       policeHoursHintDisplayed;                                // 0x1050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       firstOrderSpawnTip;                                      // 0x1051(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TUJ7[0x2];                                   // 0x1052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    unlockOldMarket;                                         // 0x1054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longAreas01TaskID;                                       // 0x1058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longAreas02TaskID;                                       // 0x105C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    longAreas03TaskID;                                       // 0x1060(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       officialVersion;                                         // 0x1064(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YM66[0x3];                                   // 0x1065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    seedGuyContactID;                                        // 0x1068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9Y2Q[0x4];                                   // 0x106C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ApassageTraderDialogue_C*>                    passageTraderDialoguesDelet;                             // 0x1070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       SectorCUnlocked;                                         // 0x1080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PNKM[0x3];                                   // 0x1081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SectorTaskHideoutID;                                     // 0x1084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SectorTaskFactoryID;                                     // 0x1088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SectorTaskLaundryID;                                     // 0x108C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      LaunderDoorsReported;                                    // 0x1090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        UserMessages;                                            // 0x10A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       NewLaunderPresented;                                     // 0x10B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W0B7[0x3];                                   // 0x10B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NewLaunderTaskID;                                        // 0x10B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReportLaunderDoor(class AlaunderDoor_C* Door);
		void RamaExpand();
		void fixTaskDuplicates();
		void countUnlockedHideouts(bool* AllRented);
		void checkSecondZoneUnlock(bool* checkPositive);
		void checkCanShowTip(bool* CanShowTip);
		void onLoadFixes();
		void questEnded(bool Success, int32_t QuestID);
		void activateQuest(int32_t QuestID);
		void addNewQuest(const class FText& QuestNam, const class FText& QuestShort, const class FText& QuestDescription, float QuestExp, int32_t QuestCash, const class FString& QuestScriptNam);
		void checkCanAddWidget(bool* ok);
		void playerAvailable(bool* IsAvailable);
		void checkTaskRelatedMarkers(int32_t TaskID);
		void checkDisplayNewTask();
		void playNarration(class USoundWave* Sound, const class FText& MonologueText, float* Length);
		void markTaskStatus(int32_t ID, EtaskStatuses Status);
		void createNewTask(const class FText& TaskName, const class FText& taskDecription, float taskExpReward, const class FString& FunctionOnComplete, bool creteTaskMarker, const struct FVector& taskMarkerLocation, const class FText& MarkerTitle, const class FText& MarkerDesc, bool isSale, int32_t QuestID, bool SpecialTask, int32_t* AssignedID);
		void setupDefaultReferences();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void initialiseQuestManager();
		void handOverMoney();
		void newNarrationEvent(const class FString& stringIdentifier);
		void unlockCryptoNarr();
		void tryAtm02();
		void newGameTip(const class FText& Title, const class FText& Desc);
		void gameTipEnd();
		void FirstPoliceEncounter();
		void FirstDogEncounter();
		void delayNarration(const class FString& String);
		void eddieFirstCall();
		void repeatEddieFirstCall();
		void firstMetEddie();
		void retrievedFirstPackage();
		void salesUpdate();
		void activatedShadyComm();
		void firstThreeOrders();
		void runIntroCredits();
		void oneIntroCredit();
		void firstWorkStation();
		void madeFirstOrder();
		void workStationTask();
		void firstOwnOrderReceived(int32_t TaskID);
		void tutWorkPlayerPutDrug();
		void tutWorkPlayerPutContainer();
		void tutWorkPlayerAddedSubstance();
		void tutWorkPlayerPackagedProduct();
		void cartelRefundTip();
		void introduceBank();
		void atmActivated();
		void checkLevelUnlocks();
		void eddieCallApartmentRent();
		void apartmentRentMessage();
		void repeatEddieRent();
		void retryEddieRent();
		void eddieCallPolice();
		void repeatEddiePolice();
		void retryEddiePolice();
		void eddieCallPoliceEnd();
		void eddieCallFurnitureShop();
		void repeatEddieFurniture();
		void retryEddieFurniture();
		void eddieFurnitureEnd();
		void apartmentModeFirstLaunch();
		void apartmentModeIntroduction();
		void apartmentViewerLaunch();
		void appRentHint();
		void playGameOverNarration();
		void eddieCallDrugstore();
		void repeatEddieDrugstore();
		void retryEddieDrugstore();
		void drugStoreTask();
		void eddieCallBank();
		void repeatEddieBank();
		void retryEddieBank();
		void eddieCallLaunder();
		void repeatEddieLaunder();
		void retryEddieLaunder();
		void eddieEndBank();
		void eddieEndLaunder();
		void ConfirmedOneOrder();
		void keyFinder();
		void rentedFirstApartment(const struct FVector& newApartmentLocation);
		void PlayerLeftApartment();
		void openEddieFurnitureGate();
		void longHireDealer();
		void tryWS_Task();
		void longAddict();
		void longUnlockedAreas();
		void taskGainTerritory();
		void putOneSpray();
		void gaveAwayFreeSample();
		void launderCash();
		void addCashToLaunder(int32_t Amount);
		void ReceiveTick(float DeltaSeconds);
		void eddieCallGangsters();
		void repeatEddieGangsters();
		void retryEddieGangsters();
		void spraySymbolSelection();
		void introductionBallena();
		void introductionKeiji();
		void unlockGangKeiji();
		void unlockGangBallena();
		void forceUnlockSecondZone();
		void longGetBig();
		void longGainGangRespect();
		void checkDomination();
		void longDomination();
		void taskUnlockDowntown();
		void fugitiveComment();
		void quickHint(const class FText& Text, EquickHintType Category);
		void tryDisplayQuickHint();
		void policeHoursHint();
		void firstOrderSpawned();
		void longMoreAreas01();
		void longMoreAreas02();
		void longMoreAreas03();
		void openWeedGate();
		void closeWeedGate();
		void displayWeedTutorial();
		void displayPlantHints(bool indoor);
		void eddieCallPsychedelics();
		void eddieRepeatPsychedelics();
		void retryEddiePsychedelics();
		void eddieCallPsychedelicsEnd();
		void eddieRepeatPsychedelicsEnd();
		void retryEddiePsychedelicsEnd();
		void eddieEndPsychedelics();
		void eddieEndPsychedelicsEnd();
		void eddieCallSectorC();
		void eddieRepeatSectorc();
		void retryEddieSecotrc();
		void eddieCallLaundry();
		void eddieRepeatLaundry();
		void retryEddieLaundry();
		void eddieEndSectorc();
		void eddieEndLaundry();
		void UnlockSectorC();
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void TrySectorC_Quests();
		void NewLaunderHidout();
		void ReopenNewLaunder();
		void ExecuteUbergraph_questManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
