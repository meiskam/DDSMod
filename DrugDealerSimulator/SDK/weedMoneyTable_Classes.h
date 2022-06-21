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
	 * BlueprintGeneratedClass weedMoneyTable.weedMoneyTable_C
	 * Size -> 0x0028 (FullSize[0x0450] - InheritedSize[0x0428])
	 */
	class AweedMoneyTable_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AweedMoneySafe_C*                                    safeRef;                                                 // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ApsychedelicGangManager_C*                           gangManager;                                             // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       tableOccupied;                                           // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8G74[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void depositeSafeMoney(int32_t Quantity);
		void parseInventory(TArray<struct FinventoryItemStruct>* backpack, TArray<int32_t>* backpackQuan, TArray<struct FinventoryItemStruct>* Pockets, TArray<int32_t>* pocketQuan, int32_t* quantityFound);
		void UserConstructionScript();
		void tableActivated(class AplayerCharacterBP_C* Player);
		void ExecuteUbergraph_weedMoneyTable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
