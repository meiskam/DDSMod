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
	 * BlueprintGeneratedClass baseNPC.baseNPC_C
	 * Size -> 0x0394 (FullSize[0x0AD4] - InheritedSize[0x0740])
	 */
	class AbaseNPC_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Influence;                                               // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_LeftHand;                                             // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_RightHand;                                            // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Head;                                                 // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Hair;                                                 // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Eyeglasses;                                           // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Glove;                                                   // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Chest;                                                // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Hat;                                                  // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AdialogueInstance_C*                                 curDialogue;                                             // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                characterName;                                           // 0x07A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                characterSurname;                                        // 0x07B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                characterFullName;                                       // 0x07D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRotator                                            initialRotationLook;                                     // 0x07E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       needsDrugs;                                              // 0x07F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XMIP[0x3];                                   // 0x07F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FdrugData>                                   drugsDemanded;                                           // 0x07F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        drugsDemandedID;                                         // 0x0808(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            drugsDemandedQuantity;                                   // 0x0818(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              drugsExpectedPrices;                                     // 0x0828(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FinventoryItemStruct>                        npcInventory;                                            // 0x0838(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<int32_t>                                            npcInventoryQuantities;                                  // 0x0848(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            npcInventoryPrices;                                      // 0x0858(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       shopOwner;                                               // 0x0868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CHVW[0x7];                                   // 0x0869(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AshopInstance_C*                                     shopReference;                                           // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AequipmentShop_C*                                    eqShopReference;                                         // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    curTaskID;                                               // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderId;                                                 // 0x0884(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isAgent;                                                 // 0x0888(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isDealer;                                                // 0x0889(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BVT2[0x6];                                   // 0x088A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FdrugData>                                   drugsUsed;                                               // 0x0890(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              drugsUsedPriceMax;                                       // 0x08A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              drugsUsedAddicion;                                       // 0x08B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            drugsUsedOrderMin;                                       // 0x08C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            drugsUsedOrderMax;                                       // 0x08D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AworldMapMarker_C*                                   saleMarker;                                              // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FdrugData                                           drugReceived;                                            // 0x08E8(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    drugReceivedQuantity;                                    // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_48PK[0x4];                                   // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FdrugData                                           drugExpected;                                            // 0x09A0(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      deliveryTimeCounter;                                     // 0x0A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      deliveryTimeResign;                                      // 0x0A54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      clientRiskFactor;                                        // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      clientExpectationLevel;                                  // 0x0A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HatEquipped;                                             // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GlovesEquipped;                                          // 0x0A61(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Refresh;                                                 // 0x0A62(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4VMB[0x1];                                   // 0x0A63(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      curRotationRate;                                         // 0x0A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            lastZRot;                                                // 0x0A68(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       goingHome;                                               // 0x0A74(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SHR3[0x3];                                   // 0x0A75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             lastChosenHomePoint;                                     // 0x0A78(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      reachHomeLimit;                                          // 0x0A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       saleSuccessfull;                                         // 0x0A88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isStreetPerson;                                          // 0x0A89(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StandStill;                                              // 0x0A8A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       inDialogue;                                              // 0x0A8B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            HeadRotMem;                                              // 0x0A8C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FclientLooksData                                    clientLooks;                                             // 0x0A98(0x0014) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hasLooksSet;                                             // 0x0AAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       cashDelivery;                                            // 0x0AAD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BXPY[0x2];                                   // 0x0AAE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      baseReputationDeliveryTime;                              // 0x0AB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       firstArea;                                               // 0x0AB4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isMale;                                                  // 0x0AB5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       tutorialClient;                                          // 0x0AB6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       notFar;                                                  // 0x0AB7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AsalesManager_C*                                     salesManager;                                            // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      deliveryResignAdd;                                       // 0x0AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      waitTimeWeatherMultiplier;                               // 0x0AC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      rainWaitInfluenceMax;                                    // 0x0AC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      stormWaitInfluenceMax;                                   // 0x0ACC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      waitMultiplierMax;                                       // 0x0AD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ExpandRama();
		void calcSaleExp(float* expOut);
		void calcExpoEvent(float* ExpoVal);
		void saleReputationUpdate(float productQuality);
		void animUpdates();
		float calcSaleRisk();
		float calcSaleExposure();
		void setClientLooks(bool isMale);
		void lookAtPlayer(bool Look, float Delta);
		void randomiseAnimationDynamics();
		void TaskDone(bool Success);
		void assignPublicTask();
		void chooseGoHomeLocation();
		void checkRotating(float DeltaTime);
		void UpdateMorphTargets();
		float GetMorphTargetValue(bool CanMorph);
		void SetMasterPoseComponentForParts();
		bool IsDefaultMeshInheritungItsAnimationAsset();
		void processReceivedDrugs();
		void setupNewDrugSale(const struct FdrugData& drugData, int32_t DrugQuantity, const class FText& characterName, float expectedPrice, int32_t OrderId, int32_t TaskID, bool isMale, bool isDealer, float ExpectationLevel);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void dialogueMode();
		void endDialogueMode();
		void activateTrade();
		void endTrade();
		void drugSaleSuccesfull();
		void clientResignedWaiting();
		void CashDeliverySuccessfull();
		void gotHome();
		void continueGoHome();
		void eventEnterDialogue();
		void failGoHome();
		void togglePoseCalc();
		void waitTimeMultiplierCheck();
		void RetryDialAssign();
		void LongRadiusChanged(bool InRadius);
		void ShortRadiusChanged(bool InRadius);
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void RamaLoadedEvent();
		void ExecuteUbergraph_baseNPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
