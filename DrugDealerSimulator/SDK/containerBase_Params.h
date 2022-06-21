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
	 * Function containerBase.containerBase_C.ExpandRama
	 */
	struct AcontainerBase_C_ExpandRama_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.ParseOldInventory
	 */
	struct AcontainerBase_C_ParseOldInventory_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.CanAccessContainer
	 */
	struct AcontainerBase_C_CanAccessContainer_Params
	{
	public:
		bool                                                       CanAccess;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                DeclineReason;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function containerBase.containerBase_C.AcceptsCategory
	 */
	struct AcontainerBase_C_AcceptsCategory_Params
	{
	public:
		EitemCategories                                            Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ok;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function containerBase.containerBase_C.CheckFullyLooted
	 */
	struct AcontainerBase_C_CheckFullyLooted_Params
	{
	public:
		bool                                                       NotLooted;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function containerBase.containerBase_C.EndLootingSound
	 */
	struct AcontainerBase_C_EndLootingSound_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.GetOpenState
	 */
	struct AcontainerBase_C_GetOpenState_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function containerBase.containerBase_C.reconstructContentsReferences
	 */
	struct AcontainerBase_C_reconstructContentsReferences_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.respawnFurniture
	 */
	struct AcontainerBase_C_respawnFurniture_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.setBackpackDefaults
	 */
	struct AcontainerBase_C_setBackpackDefaults_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.returnItemSizing
	 */
	struct AcontainerBase_C_returnItemSizing_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Weight;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function containerBase.containerBase_C.resetContentSizes
	 */
	struct AcontainerBase_C_resetContentSizes_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.RemoveItem
	 */
	struct AcontainerBase_C_RemoveItem_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function containerBase.containerBase_C.AddItem
	 */
	struct AcontainerBase_C_AddItem_Params
	{
	public:
		struct FinventoryItemStruct                                itemData;                                                // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    itemQuantity;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceLooted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AddedIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       QuanChanged;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function containerBase.containerBase_C.UserConstructionScript
	 */
	struct AcontainerBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.ReceiveBeginPlay
	 */
	struct AcontainerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.openContainer
	 */
	struct AcontainerBase_C_openContainer_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.openEventScript
	 */
	struct AcontainerBase_C_openEventScript_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.closeContainer
	 */
	struct AcontainerBase_C_closeContainer_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.closeEventScript
	 */
	struct AcontainerBase_C_closeEventScript_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.purgeContainer
	 */
	struct AcontainerBase_C_purgeContainer_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AcontainerBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function containerBase.containerBase_C.RamaLoaded
	 */
	struct AcontainerBase_C_RamaLoaded_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature
	 */
	struct AcontainerBase_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function containerBase.containerBase_C.ExecuteUbergraph_containerBase
	 */
	struct AcontainerBase_C_ExecuteUbergraph_containerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
