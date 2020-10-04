#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass baseNPC.baseNPC_C
// 0x037C (0x0ABC - 0x0740)
class AbaseNPC_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_LeftHand;                                              // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_RightHand;                                             // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Head;                                                  // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Hair;                                                  // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Eyeglasses;                                            // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Glove;                                                    // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Chest;                                                 // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Hat;                                                   // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AdialogueInstance_C*                         curDialogue;                                              // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FText                                       characterName;                                            // 0x0798(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       characterSurname;                                         // 0x07B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       characterFullName;                                        // 0x07C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    initialRotationLook;                                      // 0x07E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               needsDrugs;                                               // 0x07EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	TArray<struct FdrugData>                           drugsDemanded;                                            // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        drugsDemandedQuantity;                                    // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      drugsExpectedPrices;                                      // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FinventoryItemStruct>                npcInventory;                                             // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        npcInventoryQuantities;                                   // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        npcInventoryPrices;                                       // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               shopOwner;                                                // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class AshopInstance_C*                             shopReference;                                            // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AequipmentShop_C*                            eqShopReference;                                          // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                curTaskID;                                                // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OrderID;                                                  // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAgent;                                                  // 0x0870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDealer;                                                 // 0x0871(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0872(0x0006) MISSED OFFSET
	TArray<struct FdrugData>                           drugsUsed;                                                // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      drugsUsedPriceMax;                                        // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      drugsUsedAddicion;                                        // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        drugsUsedOrderMin;                                        // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        drugsUsedOrderMax;                                        // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AworldMapMarker_C*                           saleMarker;                                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FdrugData                                   drugReceived;                                             // 0x08D0(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                drugReceivedQuantity;                                     // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	struct FdrugData                                   drugExpected;                                             // 0x0988(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              deliveryTimeCounter;                                      // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              deliveryTimeResign;                                       // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              clientRiskFactor;                                         // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              clientExpectationLevel;                                   // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HatEquipped;                                              // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GlovesEquipped;                                           // 0x0A49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Refresh;                                                  // 0x0A4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0A4B(0x0001) MISSED OFFSET
	float                                              curRotationRate;                                          // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    lastZRot;                                                 // 0x0A50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               goingHome;                                                // 0x0A5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A5D(0x0003) MISSED OFFSET
	struct FVector                                     lastChosenHomePoint;                                      // 0x0A60(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reachHomeLimit;                                           // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               saleSuccessfull;                                          // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStreetPerson;                                           // 0x0A71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StandStill;                                               // 0x0A72(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inDialogue;                                               // 0x0A73(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HeadRotMem;                                               // 0x0A74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FclientLooksData                            clientLooks;                                              // 0x0A80(0x0014) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasLooksSet;                                              // 0x0A94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               cashDelivery;                                             // 0x0A95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0A96(0x0002) MISSED OFFSET
	float                                              baseReputationDeliveryTime;                               // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstArea;                                                // 0x0A9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMale;                                                   // 0x0A9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               tutorialClient;                                           // 0x0A9E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               notFar;                                                   // 0x0A9F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AsalesManager_C*                             salesManager;                                             // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              deliveryResignAdd;                                        // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waitTimeWeatherMultiplier;                                // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rainWaitInfluenceMax;                                     // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stormWaitInfluenceMax;                                    // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waitMultiplierMax;                                        // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass baseNPC.baseNPC_C");
		return ptr;
	}


	void calcSaleExp(float* expOut);
	void calcExpoEvent(float* ExpoVal);
	void saleReputationUpdate(float productQuality);
	void animUpdates();
	float calcSaleRisk();
	float calcSaleExposure();
	void setClientLooks(bool isMale);
	void lookAtPlayer(bool Look, float Delta);
	void randomiseAnimationDynamics();
	void taskDone(bool Success);
	void assignPublicTask();
	void chooseGoHomeLocation();
	void checkRotating(float DeltaTime);
	void UpdateMorphTargets();
	float GetMorphTargetValue(bool CanMorph);
	void SetMasterPoseComponentForParts();
	bool IsDefaultMeshInheritungItsAnimationAsset();
	void processReceivedDrugs();
	void setupNewDrugSale(const struct FdrugData& drugData, int DrugQuantity, const struct FText& characterName, float expectedPrice, int OrderID, int taskID, bool isMale, bool isDealer, float ExpectationLevel);
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
	void testAroundPlayer();
	void togglePoseCalc();
	void waitTimeMultiplierCheck();
	void ExecuteUbergraph_baseNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
