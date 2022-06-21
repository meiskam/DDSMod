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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InventoryComponent.InventoryComponent_C.Restack
	 */
	struct UInventoryComponent_C_Restack_Params
	{
	public:
		struct FGuid                                               SourceGuid;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               TargetGuid;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.AddLoot
	 */
	struct UInventoryComponent_C_AddLoot_Params
	{	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.UpdateBackpack
	 */
	struct UInventoryComponent_C_UpdateBackpack_Params
	{
	public:
		class FName                                                NewBackpack;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.CountItemsOfType
	 */
	struct UInventoryComponent_C_CountItemsOfType_Params
	{
	public:
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CountAmounts;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OutItems;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.UseInventoryItem
	 */
	struct UInventoryComponent_C_UseInventoryItem_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               LocalGuid;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmountLeft;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.SetItemLooted
	 */
	struct UInventoryComponent_C_SetItemLooted_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LootedState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.GetLootArray
	 */
	struct UInventoryComponent_C_GetLootArray_Params
	{
	public:
		TArray<bool>                                               LootArray;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.PurgeInventory
	 */
	struct UInventoryComponent_C_PurgeInventory_Params
	{
	public:
		bool                                                       BackpackOnly;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.HasAnyItems
	 */
	struct UInventoryComponent_C_HasAnyItems_Params
	{
	public:
		bool                                                       HasItems;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.CheckCanAdd
	 */
	struct UInventoryComponent_C_CheckCanAdd_Params
	{
	public:
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanAdd;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.AcceptVendorItems
	 */
	struct UInventoryComponent_C_AcceptVendorItems_Params
	{	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.PurgeVendorItems
	 */
	struct UInventoryComponent_C_PurgeVendorItems_Params
	{	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.CountVendorItemValue
	 */
	struct UInventoryComponent_C_CountVendorItemValue_Params
	{
	public:
		class AshopInstance_C*                                     ShopRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AllValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.DrawInventoryMoney
	 */
	struct UInventoryComponent_C_DrawInventoryMoney_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasAmount;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.CountInventoryMoney
	 */
	struct UInventoryComponent_C_CountInventoryMoney_Params
	{
	public:
		bool                                                       IncludeValuables;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AllMoney;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.GetItemOfGuid
	 */
	struct UInventoryComponent_C_GetItemOfGuid_Params
	{
	public:
		struct FGuid                                               LocalGuid;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInventoryListStructure                             itemData;                                                // 0x0000(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       ItemFound;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.RemoveItemOfType
	 */
	struct UInventoryComponent_C_RemoveItemOfType_Params
	{
	public:
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.RemoveItem
	 */
	struct UInventoryComponent_C_RemoveItem_Params
	{
	public:
		struct FGuid                                               LocalGuid;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.HandleOldBackpack
	 */
	struct UInventoryComponent_C_HandleOldBackpack_Params
	{
	public:
		struct FinventoryItemStruct                                backpackData;                                            // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		class FName                                                OutName;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.GetItemAtPocket
	 */
	struct UInventoryComponent_C_GetItemAtPocket_Params
	{
	public:
		int32_t                                                    PocketIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasItem;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FInventoryListStructure                             OutItem;                                                 // 0x0000(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.GetTotalWeight
	 */
	struct UInventoryComponent_C_GetTotalWeight_Params
	{
	public:
		float                                                      TotalWeight;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.GetItemList
	 */
	struct UInventoryComponent_C_GetItemList_Params
	{
	public:
		class FName                                                ItemsOfName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FilterByCategory;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EitemCategories                                            Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               HeldInGuid;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IncludePockets;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FInventoryListStructure>                     OutItems;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       StackExceeded;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.CountFrontItems
	 */
	struct UInventoryComponent_C_CountFrontItems_Params
	{
	public:
		bool                                                       BackpackOnly;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FrontItemCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.AddItem
	 */
	struct UInventoryComponent_C_AddItem_Params
	{
	public:
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CustomTagName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMixProportionsStruct                               MixProportions;                                          // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FGuid                                               SetHeldIn;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceAdd;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VendorItem;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PocketIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetLooted;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CountOnly;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllAdded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    QuantityLeft;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               OutLocalGuid;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.HandleOldInventory
	 */
	struct UInventoryComponent_C_HandleOldInventory_Params
	{
	public:
		TArray<struct FinventoryItemStruct>                        InventoryStructs;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		TArray<int32_t>                                            InventoryQuantities;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class AitemInventoryHolder_C*>                      itemContents;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            PocketIndexes;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.BlockDisplatcher
	 */
	struct UInventoryComponent_C_BlockDisplatcher_Params
	{	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.UnlockDispatcher
	 */
	struct UInventoryComponent_C_UnlockDispatcher_Params
	{	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.DispatchUpdate
	 */
	struct UInventoryComponent_C_DispatchUpdate_Params
	{	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.UpdateInventorySerialization
	 */
	struct UInventoryComponent_C_UpdateInventorySerialization_Params
	{
	public:
		class URamaSaveComponent*                                  RamaComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
	 */
	struct UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.BackpackChanged__DelegateSignature
	 */
	struct UInventoryComponent_C_BackpackChanged__DelegateSignature_Params
	{
	public:
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryComponent.InventoryComponent_C.InventoryStateChanged__DelegateSignature
	 */
	struct UInventoryComponent_C_InventoryStateChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
