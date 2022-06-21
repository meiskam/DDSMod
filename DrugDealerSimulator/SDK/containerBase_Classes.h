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
	 * BlueprintGeneratedClass containerBase.containerBase_C
	 * Size -> 0x00C9 (FullSize[0x04F1] - InheritedSize[0x0428])
	 */
	class AcontainerBase_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInventoryComponent_C*                               InventoryComponent;                                      // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave_1;                                              // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FinventoryItemStruct>                        Items;                                                   // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<int32_t>                                            itemQuantity;                                            // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class AitemInventoryHolder_C*>                      itemContents;                                            // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<bool>                                               itemsSearchProgress;                                     // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USoundBase*                                          openSound;                                               // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          closeSound;                                              // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOpen;                                                  // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FXHD[0x3];                                   // 0x0491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      itemMaxSize;                                             // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      itemMaxWeight;                                           // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      curItemSize;                                             // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      curItemWeight;                                           // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    containerRefID;                                          // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       respawned;                                               // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SlowLooting;                                             // 0x04A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UNSS[0x6];                                   // 0x04AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     LootingSound;                                            // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EitemCategories>                                    AcceptedCategories;                                      // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       DisableDrop;                                             // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B86L[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EitemCategories>                                    DeclinedCategories;                                      // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FGuid                                               ContainerGuid;                                           // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCashSafe;                                              // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExpandRama();
		void ParseOldInventory();
		void CanAccessContainer(bool* CanAccess, class FText* DeclineReason);
		void AcceptsCategory(EitemCategories Category, bool* ok);
		void CheckFullyLooted(bool* NotLooted);
		void EndLootingSound();
		void GetOpenState(bool* IsOpen);
		void reconstructContentsReferences();
		void respawnFurniture();
		void setBackpackDefaults();
		void returnItemSizing(const struct FinventoryItemStruct& Data, float* Size, float* Weight);
		void resetContentSizes();
		void RemoveItem(int32_t ItemIndex, int32_t Quantity);
		void AddItem(const struct FinventoryItemStruct& itemData, int32_t itemQuantity, bool ForceLooted, int32_t* AddedIndex, bool* QuanChanged);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void openContainer();
		void openEventScript();
		void closeContainer();
		void closeEventScript();
		void purgeContainer();
		void BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void RamaLoaded();
		void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature();
		void ExecuteUbergraph_containerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
