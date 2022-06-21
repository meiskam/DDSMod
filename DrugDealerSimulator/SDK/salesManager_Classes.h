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
	 * BlueprintGeneratedClass salesManager.salesManager_C
	 * Size -> 0x0568 (FullSize[0x0890] - InheritedSize[0x0328])
	 */
	class AsalesManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AcontactsManager_C*                                  contactsManager;                                         // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AstatisticsManager_C*                                statisticsManager;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AmainComputer_C*                                     mainComputerRef;                                         // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       initialised;                                             // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DMAZ[0x3];                                   // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxClientsPerLevel;                                      // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    curClientCount;                                          // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6HUR[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            clientsAvailable;                                        // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        clientsNicknames;                                        // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientsMale;                                             // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientsLost;                                             // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientsOD;                                               // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientAwaitingResponse;                                  // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientsSuspended;                                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientIsDealer;                                          // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientDealerDeclined;                                    // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientDealerTookDope;                                    // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            clientDealerCashToPay;                                   // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsReputationMin;                                    // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsReputationMax;                                    // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsExpectedQuality;                                  // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsAverageOrderInterval;                             // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsOrderCountdown;                                   // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsSatisfactionGeneral;                              // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsSatisfactionLastOrder;                            // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientsRiskFactor;                                       // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      clientsAssignedArea;                                     // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            clientsSaleCount;                                        // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            clientsDrugAddictedTo;                                   // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FdrugData>                                   clientsDrugAddictedData;                                 // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientsAddictionDisplayed;                               // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        clientsLastOrderDrugName;                                // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        clientsLastOrderRecievedDrugName;                        // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            clientsNewestOrderID;                                    // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    curClientsSuspended;                                     // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      newClientCountdown;                                      // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      newClientIntervalMin;                                    // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      newClientIntervalMax;                                    // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        clientRandomNicks;                                       // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UTexture2D*>                                  clientAvatars;                                           // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector2D                                           OrderIntervalRandRange;                                  // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            orderListClientID;                                       // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FdrugData>                                   orderListDrugOrdered;                                    // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            orderListDrugQuantity;                                   // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              orderListDrugExpectedPrice;                              // 0x0590(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            orderListTaskID;                                         // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               orderListAccepted;                                       // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               orderListClosed;                                         // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              orderListDeliveryTime;                                   // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    timesClientResigned;                                     // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    dealerMinOrderCount;                                     // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      dealerMinSatisfaction;                                   // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      dealerOfferProbability;                                  // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       salesActive;                                             // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BJX7[0x7];                                   // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FdrugData>                                   curDrugsAvailable;                                       // 0x05F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            curDrugsAvailableSourceID;                               // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              curDrugsAvailableWeight;                                 // 0x0618(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      orderInvervalMinimum;                                    // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      orderIntervalMaximum;                                    // 0x062C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      badReputationMultiplier;                                 // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      badReputationDropTempo;                                  // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      badRepBadSale;                                           // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      badRepLostClient;                                        // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      badRepOverdose;                                          // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JW5V[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      clientAreas;                                             // 0x0648(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            clientAreaQuantities;                                    // 0x0658(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FclientLooksData>                            clientsLookData;                                         // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              clientAreaTimeMultiplier;                                // 0x0678(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    clientSuspendResignCount;                                // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_54A1[0x4];                                   // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            clientsResignTimes;                                      // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      priceMultiplierDef;                                      // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SDNM[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AsaleAreaManager_C*                                  saleAreaManager;                                         // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    maxClientsPerArea;                                       // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    lastAreaSampleSpawnID;                                   // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillPirceMultiplier;                                    // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillSaleSpeedMultiplier;                                // 0x06BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       sampleGuysEnabled;                                       // 0x06C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UD07[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      clientNamesMale;                                         // 0x06C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      clientNamesFemale;                                       // 0x06D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      clientSurnames;                                          // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    lastAvatarID;                                            // 0x06F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    lastNameGenerated;                                       // 0x06FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        clientStateQueueName;                                    // 0x0700(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        clientStateQueueDrug;                                    // 0x0710(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               clientStateQueueOD;                                      // 0x0720(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FdrugData                                           debugLastDrugData;                                       // 0x0730(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       nightSaleToggle;                                         // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       firstDealerSentOffer;                                    // 0x07E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FN4O[0x2];                                   // 0x07E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      earlyGameSaleBoost;                                      // 0x07E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ballenaProtected;                                        // 0x07E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K9ND[0x3];                                   // 0x07E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      difficultySaleMultiplier;                                // 0x07EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EdifficultyLevels                                          difficulty;                                              // 0x07F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       addictedTaskDone;                                        // 0x07F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NRR3[0x6];                                   // 0x07F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          AreaDatabase;                                            // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            ClientWishlist;                                          // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      SampleMaxBoost;                                          // 0x0810(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SampleBoostPerGram;                                      // 0x0814(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              ClientDealerExp;                                         // 0x0818(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ArrestedClients;                                         // 0x0828(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ArrestedDayOver;                                         // 0x0838(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               ArrestedHasBail;                                         // 0x0848(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AdayTimeControler_C*                                 daytimeManager;                                          // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeekendOrderIntervalMultiplier;                          // 0x0860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H7T4[0x4];                                   // 0x0864(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        ArrestedDisplayPool;                                     // 0x0868(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               ArrestedDisplayReleased;                                 // 0x0878(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      DealerOrderMultiplier;                                   // 0x0888(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DealerCashMultiplier;                                    // 0x088C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReleaseAllClients();
		void CalcArrestBail(int32_t ArrestedIndex, int32_t* OutBailAmount);
		void CheckArrestReleases();
		void TryDepositCashToSafe(int32_t Amount, const class FString& AreaID, bool* Success);
		void AddDealerExp(int32_t ClientId, int32_t SaleQuantity, float expAmount);
		void GetClientMeta(int32_t ClientId, bool* ClientFound, struct FClientMeta* OutMeta);
		void ReleaseClient(int32_t ClientId);
		void GetClientArrestChance(int32_t ClientId, float* OutChance);
		void IsClientArrested(int32_t ClientId, bool* IsArrested);
		void ArrestClient(int32_t ClientId);
		void ReconstructClientList();
		void ExpandRama();
		void UpdateFlags();
		void AddDrugWishlist(int32_t DrugIndex);
		void countAddictedClients(int32_t* ClientCount);
		void countMaxDealers(int32_t ClientId, bool* CanHaveMore);
		void adaptDifficulty();
		void generateClientMessage(bool dealer, bool CashMeet, int32_t Quantity, const class FText& DrugNam, bool priceHigh, class FText* Message);
		void recalcClientCount();
		void tryDisplayClientState();
		void displayClientAddictedPopup(int32_t ClientId);
		void generateClientName(bool Male, class FText* ClientName);
		void updateSkillMultipliers();
		void spawnAreaSampleClient(const class FString& ClientArea);
		void updateAreaTimeMultiplier();
		void loopCheckPrices(bool* someAffordable);
		void getOrderedDrugName(int32_t DrugIndex, class FText* Output);
		void checkClientInterested(int32_t ClientId, int32_t DrugDemandedID, bool* Interested, bool* priceHigh, bool* Wish);
		void badSaleResponse(bool ClientLost, int32_t ClientId);
		void sendDealerOffer(int32_t ClientId);
		bool dealerOfferChance(int32_t ClientId);
		void odMessageResponse(bool dealer, int32_t ClientId);
		void showODPopup(bool dealer, int32_t ClientId);
		void addStatsOD();
		void selectDrugID(int32_t ClientId, int32_t* DrugID);
		void timeShift(float TimeShiftHours, float TimeShiftMinutes);
		void affectBadReputation(float ReputationLoss);
		void calcIntervalMultiplier(float baseInterval, float* OutInterval);
		void selectClientArea(class FString* SelectedAreaID);
		void getOrderedDrugIndex(int32_t RandomIndex, int32_t* OutIndex);
		void refreshAvailableDrugs(int32_t ClientId, bool* DrugsAreAvailable);
		void countClientStatistics();
		void calcOrderQuantity(int32_t inClientID, bool nightTime, bool priceHigh, int32_t DrugID, int32_t* OutQuantity, bool* Critical);
		void clientSendNewOrder(int32_t ClientId, bool nightTime);
		void clientOrderCountdown(float Delta);
		void generateNewClient(bool Force);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void tryInitialise();
		void checkClientState();
		void trySpawnSampleGuy();
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void ForceArrestAllClients();
		void AddArrestClients(int32_t Count);
		void AddArrestScreen();
		void DealerLeveledUp(int32_t NewLevel);
		void AllDealersAddExp(float expAmount);
		void DealerGotArrested();
		void DisplayArrestPopup();
		void ForceReleaseAllClients();
		void DisableBallenaBlock();
		void KillSalesManager();
		void ExecuteUbergraph_salesManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
