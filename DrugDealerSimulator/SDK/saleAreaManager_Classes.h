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
	 * BlueprintGeneratedClass saleAreaManager.saleAreaManager_C
	 * Size -> 0x01B8 (FullSize[0x04E0] - InheritedSize[0x0328])
	 */
	class AsaleAreaManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      saleAreaStrings;                                         // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        saleAreaDisplayName;                                     // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaExposure;                                        // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaExposureAdd;                                     // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaClampExposure;                                   // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               saleAreaUnlocked;                                        // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               saleAreaAvailable;                                       // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            saleAreaUnlockLevel;                                     // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            saleAreaNumSpraySymbols;                                 // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaApartmentBoost;                                  // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      saleAreaUnlockArea;                                      // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaUnlockExposureMin;                               // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            saleAreaClientsMax;                                      // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            SaleAreaDealersMax;                                      // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaRespMultiplier;                                  // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      exposureMaxLevel;                                        // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      exposureDropPerSecond;                                   // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      exposureClampPerSymbol;                                  // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      exposureDropMultiplier;                                  // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       areaManagingActive;                                      // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SCK0[0x3];                                   // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    areasUnlocked;                                           // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              respRaiseDisplayList;                                    // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      respRaiseDisplayStrings;                                 // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaRespectBoost;                                    // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaRespectDropBoost;                                // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaExpBoost;                                        // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            saleAreaClientMaxBoost;                                  // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaOrderBoost;                                      // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              saleAreaClientAverage;                                   // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               saleAreaDisplayedAvailable;                              // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void VerifyNewAreas();
		void onLoadScripts();
		void adaptDifficulty();
		void checkSectorBAreas(bool* _3Unlocked);
		void checkAreaRespect(bool* LowRespect);
		void displayExposure();
		void returnAvailableAreas(TArray<class FString>* AreaList, int32_t* NumAreas, int32_t* AreaClientsMax);
		void addAreaExposure(const class FString& stringnam, float Amount);
		void dropExposure(float Delta);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void updateExpoStatus();
		void newAreaUnlocked();
		void checkAreaStatuses();
		void checkAreaAvailability();
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void ExecuteUbergraph_saleAreaManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
