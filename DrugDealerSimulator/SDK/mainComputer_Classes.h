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
	 * BlueprintGeneratedClass mainComputer.mainComputer_C
	 * Size -> 0x03A5 (FullSize[0x07CD] - InheritedSize[0x0428])
	 */
	class AmainComputer_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Laptop;                                                  // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave_1;                                              // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            contactList;                                             // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            contactNumMessages;                                      // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            contactNumMessagesRead;                                  // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               contactListFriend;                                       // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UshadyCommInterface_C*                               Interface;                                               // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        drugsAvailableIDs;                                       // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FdrugData>                                   drugsAvailable;                                          // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               drugsUnlocked;                                           // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               drugsSaleEnabled;                                        // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               drugsCantSell;                                           // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               drugsToUnlock;                                           // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            drugsUnlockLevel;                                        // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              drugPrices;                                              // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              drugSalePrices;                                          // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              drugExpectedPrices;                                      // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      playerOrderLimit;                                        // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      playerOrderLimitMax;                                     // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      playerCryptoCount;                                       // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      cryptoCurrencyPrice;                                     // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      playerBankMoney;                                         // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AVZ0[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        msgOrderRandomStarts;                                    // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              MsgString;                                               // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FText>                                        msgOrderRandomEndings;                                   // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      messagesList;                                            // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            messagesUsers;                                           // 0x0590(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               messagesMine;                                            // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            orderList;                                               // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               orderReady;                                              // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              responseMsgString;                                       // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FText>                                        msgOrderResponses;                                       // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        msgOrderDeclineResponses;                                // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        msgPriceChangeResponses;                                 // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              lastSmuggleLocationID;                                   // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FText>                                        msgOrderResponseSMS;                                     // 0x0620(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              playerCreditAmountTotal;                                 // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              playerCreditAmountLeft;                                  // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              playerCreditPayAmount;                                   // 0x0650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            playerCreditDayTaken;                                    // 0x0660(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            playerCreditDayPayment;                                  // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          yourAvatar;                                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       userLogged;                                              // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1QIL[0x7];                                   // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        msgConfirmOrderResponses;                                // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       computerActivated;                                       // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       firstLaunch;                                             // 0x06A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       eddieWaitingForPlayer;                                   // 0x06A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       orderingDrugsAvailable;                                  // 0x06A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bankAvailable;                                           // 0x06A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_711B[0x3];                                   // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      maxDebt;                                                 // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R5MG[0x4];                                   // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               bankOperationsIncome;                                    // 0x06B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              bankOperationsAmount;                                    // 0x06C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        bankOperationsTitle;                                     // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        bankOperationsSource;                                    // 0x06E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    nextBenefitPayday;                                       // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K1XI[0x4];                                   // 0x06F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                benefitPaymentTitle;                                     // 0x06F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                benefitPaymentSource;                                    // 0x0710(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bankFirstLaunch;                                         // 0x0728(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E5JK[0x3];                                   // 0x0729(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    lastDebtSMS;                                             // 0x072C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       launderingAvailable;                                     // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0S6U[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AstatisticsManager_C*                                statsManager;                                            // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      oneGramSizeScale;                                        // 0x0740(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      oneGramWeightScale;                                      // 0x0744(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       blockReopen;                                             // 0x0748(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GNJI[0x3];                                   // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      illegalIncomeTotal;                                      // 0x074C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      illegalIncomeMax;                                        // 0x0750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      illegalIncomeDPS;                                        // 0x0754(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        PsychedelicDrugIDs;                                      // 0x0758(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FdrugData>                                   psychedelicsOffer;                                       // 0x0768(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              psychedelicsPrice;                                       // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              psychedelicsSellPrice;                                   // 0x0788(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              psychedelicsExpectedPrice;                               // 0x0798(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UDataTable*                                          DrugDatabase;                                            // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoneyLaunderedTotal;                                     // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoneyToLaunder;                                          // 0x07B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MoneyLaunderLevel;                                       // 0x07B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastLaunderDay;                                          // 0x07BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          LaunderingDataTable;                                     // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerEddieDebt;                                         // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ViewingApartments;                                       // 0x07CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPlayerDebt(float* OutDebt);
		void GetPlayerOrderLimit(float* Limit);
		void SendLaunderPayment(float Amount, bool Force);
		void AddMoneyToLaunder(float Amount);
		void ExpandRama();
		void reconstructDrugOffer();
		void getDrugSizeWeight(int32_t packageGrams, float* packageSize, float* packageWeight);
		void changePrices();
		void generateInitialBankHistory();
		void newBankOperation(bool Income, float Amount, const class FText& Title, const class FText& SourceName, bool Notify, bool Legal);
		void checkNewDrugAvailability();
		void addUserMessage(int32_t UserID, const class FText& Text, bool PlayerMessage);
		void getOrderRefByID(int32_t ID, class AorderInstance_C** orderInstance);
		void constructMessageSentence(bool LastIndex, bool BeforeLastIndex, int32_t Quantity, const struct FdrugData& drugData, bool isSingle);
		void sendNewOrder(TArray<struct FdrugData>* drugData, TArray<class FName>* DrugIDs, TArray<int32_t>* drugQuantities);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void openComputer();
		void prepareOrderResponse();
		void ActivateComputer();
		void checkBenefitPayment();
		void checkIllegalIncome();
		void addPsychedelicsOffer();
		void BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void RetryIllegalReminder();
		void ExecuteUbergraph_mainComputer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
