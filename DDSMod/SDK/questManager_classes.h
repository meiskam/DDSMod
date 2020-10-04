#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass questManager.questManager_C
// 0x0D58 (0x1080 - 0x0328)
class AquestManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             narrator;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AplayerCharacterBP_C*                        playerRef;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               taskNames;                                                // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               tempDrugNames;                                            // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               taskDecriptions;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             taskStringActions;                                        // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       taskCompleted;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       taskFailed;                                               // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       taskIsSale;                                               // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       taskDisplayed;                                            // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       taskSpecial;                                              // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      taskExpRewards;                                           // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               narrationPlaying;                                         // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FPostProcessSettings                        defCameraPostProcess;                                     // 0x0400(0x04E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                        greyCameraPostProcess;                                    // 0x08E0(0x04E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                       firstEncounters;                                          // 0x0DC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               tipActive;                                                // 0x0DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0DD1(0x0007) MISSED OFFSET
	TArray<struct FString>                             narrationsPlayed;                                         // 0x0DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               taskDisplayQueueTitle;                                    // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               taskDisplayQueueDesc;                                     // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EtaskStatuses>>                 taskDisplayQueueStatus;                                   // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              taskDisplayDelay;                                         // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                firstDeadDropTaskID;                                      // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UgameTipPopup_C*                             curGameTip;                                               // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               workStationManualOnceOpen;                                // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E29(0x0003) MISSED OFFSET
	int                                                numSales;                                                 // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstSalesDone;                                           // 0x0E30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstShadyComm;                                           // 0x0E31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0E32(0x0002) MISSED OFFSET
	int                                                firstShadyCommTaskID;                                     // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               introCreditsTitles;                                       // 0x0E38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               introCretitsPersons;                                      // 0x0E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               introCreditsCompany;                                      // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                introCreditsCurNum;                                       // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstDeadDrop;                                            // 0x0E6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               metEddie;                                                 // 0x0E6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstWorkStationMade;                                     // 0x0E6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0E6F(0x0001) MISSED OFFSET
	int                                                firstDopeOrderTaskID;                                     // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                firstShoppingTaskID;                                      // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstOrderDone;                                           // 0x0E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0E79(0x0003) MISSED OFFSET
	int                                                firstOwnOrderTaskID;                                      // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstOwnOrderWasReceived;                                 // 0x0E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0E81(0x0007) MISSED OFFSET
	class AworkspaceTutorialManager_C*                 workStationTutorial;                                      // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               workStationTutorialEnded;                                 // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               playerKnowsRefundCartel;                                  // 0x0E91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0E92(0x0006) MISSED OFFSET
	struct FText                                       waitingTipTitle;                                          // 0x0E98(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       waitingTipDesc;                                           // 0x0EB0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                bankTaskID;                                               // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               atmWasActivated;                                          // 0x0ECC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bankWasIntroduced;                                        // 0x0ECD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0ECE(0x0002) MISSED OFFSET
	TArray<bool>                                       levelUpUnlocks;                                           // 0x0ED0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               firstLoaded;                                              // 0x0EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0EE1(0x0007) MISSED OFFSET
	TArray<bool>                                       eddieCalls;                                               // 0x0EE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               apartmentModeIntroduced;                                  // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               apartmentModeFirstLaunched;                               // 0x0EF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0EFA(0x0002) MISSED OFFSET
	int                                                apartmentModeTaskID;                                      // 0x0EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                rentingTaskID;                                            // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               apartmentViewerLaunched;                                  // 0x0F04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               appRentDisplayed;                                         // 0x0F05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0F06(0x0002) MISSED OFFSET
	int                                                drugStoreTaskID;                                          // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               policeIntroduced;                                         // 0x0F0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0F0D(0x0003) MISSED OFFSET
	int                                                confirmedOrderCount;                                      // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                keyFinderTaskID;                                          // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                rentHideoutTaskID;                                        // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstApartmentRented;                                     // 0x0F1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0F1D(0x0003) MISSED OFFSET
	int                                                furnitureModeTaskID;                                      // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longGainClientsTaskID;                                    // 0x0F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longFirstDealerTaskID;                                    // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longNewDrugsTaskID;                                       // 0x0F2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               questListName;                                            // 0x0F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               questListShort;                                           // 0x0F40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               questListDescription;                                     // 0x0F50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      questListExpReward;                                       // 0x0F60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        questListCashReward;                                      // 0x0F70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       questListActive;                                          // 0x0F80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       questListCompleted;                                       // 0x0F90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             questActivateScript;                                      // 0x0FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                memQuestID;                                               // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0FB4(0x0004) MISSED OFFSET
	TArray<int>                                        taskCompletesQuest;                                       // 0x0FB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                cartelRefundQuestID;                                      // 0x0FC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                markTerritoryTaskID;                                      // 0x0FCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               gainTerritory;                                            // 0x0FD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0FD1(0x0003) MISSED OFFSET
	int                                                findSampleClientsTaskID;                                  // 0x0FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                sprayPutCount;                                            // 0x0FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               putSprays;                                                // 0x0FDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               disableNarration;                                         // 0x0FDD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               secondMapZoneUnlocked;                                    // 0x0FDE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x0FDF(0x0001) MISSED OFFSET
	int                                                jayShopTaskID;                                            // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                sectorBTaskID;                                            // 0x0FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              eddieCallCountdown;                                       // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               spraySymbolDialogueDisplayed;                             // 0x0FEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0FED(0x0003) MISSED OFFSET
	int                                                chosenSpraySymbol;                                        // 0x0FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               eddieCalledGangsters;                                     // 0x0FF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0FF5(0x0003) MISSED OFFSET
	int                                                meetGangTaskID;                                           // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                sectorBTaskID2;                                           // 0x0FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longGangsTaskID;                                          // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longGainGangRepTaskID;                                    // 0x1004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longDominationTaskID;                                     // 0x1008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ballenaProtection;                                        // 0x100C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               unlockDowntownTask;                                       // 0x100D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x100E(0x0002) MISSED OFFSET
	int                                                furtherNorthTaskID;                                       // 0x1010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ballenaFirstQuan;                                         // 0x1014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ballenaFirstSize;                                         // 0x1018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ballenaFirstPrice;                                        // 0x101C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                keijiFirstQuan;                                           // 0x1020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                keijiFirstSize;                                           // 0x1024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                keijiFirstPrice;                                          // 0x1028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x102C(0x0004) MISSED OFFSET
	TArray<struct FText>                               quickHintQueueTexts;                                      // 0x1030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EquickHintType>>                quickHintQueueCategories;                                 // 0x1040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               policeHoursHintDisplayed;                                 // 0x1050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstOrderSpawnTip;                                       // 0x1051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x1052(0x0002) MISSED OFFSET
	int                                                unlockOldMarket;                                          // 0x1054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longAreas01TaskID;                                        // 0x1058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longAreas02TaskID;                                        // 0x105C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                longAreas03TaskID;                                        // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               officialVersion;                                          // 0x1064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1065(0x0003) MISSED OFFSET
	int                                                seedGuyContactID;                                         // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x106C(0x0004) MISSED OFFSET
	TArray<class ApassageTraderDialogue_C*>            passageTraderDialoguesDelet;                              // 0x1070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass questManager.questManager_C");
		return ptr;
	}


	void fixTaskDuplicates();
	void countUnlockedHideouts(bool* AllRented);
	void checkSecondZoneUnlock(bool* checkPositive);
	void checkCanShowTip(bool* CanShowTip);
	void onLoadFixes();
	void questEnded(bool Success, int QuestID);
	void activateQuest(int QuestID);
	void addNewQuest(const struct FText& QuestNam, const struct FText& QuestShort, const struct FText& QuestDescription, float QuestExp, int QuestCash, const struct FString& QuestScriptNam);
	void checkCanAddWidget(bool* ok);
	void playerAvailable(bool* isAvailable);
	void checkTaskRelatedMarkers(int TaskID);
	void checkDisplayNewTask();
	void playNarration(class USoundWave* Sound, const struct FText& MonologueText, float* Length);
	void markTaskStatus(int ID, TEnumAsByte<EtaskStatuses> Status);
	void createNewTask(const struct FText& taskName, const struct FText& taskDecription, float taskExpReward, const struct FString& FunctionOnComplete, bool creteTaskMarker, const struct FVector& taskMarkerLocation, const struct FText& MarkerTitle, const struct FText& MarkerDesc, bool isSale, int QuestID, bool SpecialTask, int* AssignedID);
	void setupDefaultReferences();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void initialiseQuestManager();
	void handOverMoney();
	void newNarrationEvent(const struct FString& stringIdentifier);
	void unlockCryptoNarr();
	void tryAtm02();
	void newGameTip(const struct FText& Title, const struct FText& Desc);
	void gameTipEnd();
	void FirstPoliceEncounter();
	void FirstDogEncounter();
	void delayNarration(const struct FString& String);
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
	void firstOwnOrderReceived(int TaskID);
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
	void addCashToLaunder(int Amount);
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
	void quickHint(const struct FText& Text, TEnumAsByte<EquickHintType> Category);
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
	void ExecuteUbergraph_questManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
