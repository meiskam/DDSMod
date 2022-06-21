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
	 * BlueprintGeneratedClass worldConsoleCommands.worldConsoleCommands_C
	 * Size -> 0x00A0 (FullSize[0x03C8] - InheritedSize[0x0328])
	 */
	class AworldConsoleCommands_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AsaleClientMaleBP_C*>                         maleClients;                                             // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AsaleClientFemaleBP_C*>                       femaleClients;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AsaleClientFemaleBP_C*>                       NewVar_1;                                                // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AsewageTeleportPoint_C*>                      sewageTeleports;                                         // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    TempSelector;                                            // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GameDifficultyDebug;                                     // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SectorCTeleport;                                         // 0x0380(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FYYL[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          DrugDatabase;                                            // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              NewVar_2;                                                // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            TestArray;                                               // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      ComponentClasses;                                        // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void CountClassNum();
		void UserConstructionScript();
		void giveMoney(int32_t Amount);
		void giveBankMoney(float Amount);
		void levelUp(int32_t NumLevel);
		void giveMeExp(float expAmount);
		void spawnDrugSource();
		void disableSubLevelStreaming();
		void removeDealers();
		void GetNewUpgrades();
		void SetSeenUpgrades();
		void SebaPlay();
		void enableTunnelEntering();
		void LTS_En();
		void LTS_CC(int32_t NewParam, int32_t NewParam2);
		void LTS_PrintUpgrades();
		void LTS_AddMoney(int32_t ConnIndex, float moneyAmount);
		void LTS_PrintConns();
		void LTS_GetUpgradesStates(int32_t ConnIndex);
		void LTS_BuyUpgrade(int32_t ConnIndex, int32_t UpgradeIndex);
		void LTS_DetailedUpgrades(int32_t ConnIndex);
		void LTS_DigList(int32_t EntranceIndex);
		void LTS_TeleportList(int32_t EntranceIndex);
		void LTS_NewEn();
		void LTS_SetDigFactor(float NewDigFactor);
		void LTS_StartDEA(int32_t EntranceIndex);
		void LTS_SetDebGD(int32_t NewGameDifficulty);
		void LTS_ClearEnt(int32_t EntranceIndex);
		void KillAllPolicemen();
		void TeleportSectorC();
		void TestDrugDemand();
		void AddLaunderMoney(float Amount);
		void AddLaunderedMoney(float Amount);
		void SetExpoLevel(float expoFactorLevel);
		void addInventoryItem(const class FName& ItemID, int32_t Quantity);
		void TestGetItem(const class FName& ItemID);
		void TestDealerExp(float Exp);
		void RegisterExpoEvent(const class FName& EventID);
		void RegisterExpoSale(int32_t AmountGrams);
		void CountKurwaEverything();
		void WyjebChuj();
		void ExecuteUbergraph_worldConsoleCommands(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
