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
	 * BlueprintGeneratedClass InventoryComponent.InventoryComponent_C
	 * Size -> 0x0150 (FullSize[0x0240] - InheritedSize[0x00F0])
	 */
	class UInventoryComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        ItemNames;                                               // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            itemQuantities;                                          // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ItemCurAmount;                                           // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGuid>                                       ItemLocalGuids;                                          // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGuid>                                       ItemHeldInGuids;                                         // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ItemPocketIndex;                                         // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               ItemSearchProgress;                                      // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               ItemVendorFlag;                                          // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FMixProportionsStruct>                       ItemMixProportions;                                      // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        ItemCustomTagName;                                       // 0x0188(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    ContainerWidth;                                          // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ContainerHeight;                                         // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    pocketCount;                                             // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SkipDebug;                                               // 0x01A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1PYI[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurBackpackID;                                           // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             InventoryStateChanged;                                   // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BackpackChanged;                                         // 0x01C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CurBackpackVendor;                                       // 0x01D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MJK6[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LootPool;                                                // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, int32_t>                                 ValuableMap;                                             // 0x01E0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      RamaVars;                                                // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void Restack(const struct FGuid& SourceGuid, const struct FGuid& TargetGuid, bool* Success);
		void AddLoot();
		void UpdateBackpack(const class FName& NewBackpack, bool FromVendor);
		void CountItemsOfType(const class FName& ItemID, bool CountAmounts, int32_t* OutItems);
		void UseInventoryItem(int32_t Amount, const struct FGuid& LocalGuid, const class FName& ItemID, bool* Success, int32_t* AmountLeft);
		void SetItemLooted(int32_t Index, bool LootedState);
		void GetLootArray(TArray<bool>* LootArray);
		void PurgeInventory(bool BackpackOnly);
		void HasAnyItems(bool* HasItems);
		void CheckCanAdd(const class FName& ItemID, int32_t Quantity, int32_t Amount, bool* CanAdd);
		void AcceptVendorItems();
		void PurgeVendorItems();
		void CountVendorItemValue(class AshopInstance_C* ShopRef, int32_t* AllValue);
		void DrawInventoryMoney(int32_t Amount, bool* HasAmount);
		void CountInventoryMoney(bool IncludeValuables, int32_t* AllMoney);
		void GetItemOfGuid(const struct FGuid& LocalGuid, struct FInventoryListStructure* itemData, bool* ItemFound);
		void RemoveItemOfType(const class FName& ItemID, int32_t Quantity);
		void RemoveItem(const struct FGuid& LocalGuid, int32_t Quantity);
		void HandleOldBackpack(const struct FinventoryItemStruct& backpackData, class FName* OutName);
		void GetItemAtPocket(int32_t PocketIndex, bool* HasItem, struct FInventoryListStructure* OutItem, int32_t* ArrayIndex);
		void GetTotalWeight(float* TotalWeight);
		void GetItemList(const class FName& ItemsOfName, bool FilterByCategory, EitemCategories Category, const struct FGuid& HeldInGuid, bool IncludePockets, TArray<struct FInventoryListStructure>* OutItems, bool* StackExceeded);
		void CountFrontItems(bool BackpackOnly, int32_t* FrontItemCount);
		void AddItem(const class FName& ItemID, const class FText& CustomTagName, int32_t Quantity, int32_t Amount, const struct FMixProportionsStruct& MixProportions, const struct FGuid& SetHeldIn, bool ForceAdd, bool VendorItem, int32_t PocketIndex, bool SetLooted, bool CountOnly, bool* AllAdded, int32_t* QuantityLeft, struct FGuid* OutLocalGuid);
		void HandleOldInventory(TArray<struct FinventoryItemStruct>* InventoryStructs, TArray<int32_t>* InventoryQuantities, TArray<class AitemInventoryHolder_C*>* itemContents, TArray<int32_t>* PocketIndexes);
		void BlockDisplatcher();
		void UnlockDispatcher();
		void DispatchUpdate();
		void UpdateInventorySerialization(class URamaSaveComponent* RamaComponent);
		void ExecuteUbergraph_InventoryComponent(int32_t EntryPoint);
		void BackpackChanged__DelegateSignature(bool FromVendor);
		void InventoryStateChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
