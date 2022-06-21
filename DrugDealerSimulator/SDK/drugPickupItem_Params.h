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
	 * Function drugPickupItem.drugPickupItem_C.GetItemName
	 */
	struct AdrugPickupItem_C_GetItemName_Params
	{
	public:
		class FText                                                OutName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.ReconstructRama
	 */
	struct AdrugPickupItem_C_ReconstructRama_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.makeAdditiveTypeModel
	 */
	struct AdrugPickupItem_C_makeAdditiveTypeModel_Params
	{
	public:
		struct FdrugData                                           drugData;                                                // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       BigPackage;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         OutModel;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.makePackageTypeModel
	 */
	struct AdrugPickupItem_C_makePackageTypeModel_Params
	{
	public:
		struct FdrugData                                           drugData;                                                // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FMixProportionsStruct                               MixProportions;                                          // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       BigPackage;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         OutModel;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.UserConstructionScript
	 */
	struct AdrugPickupItem_C_UserConstructionScript_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.ReceiveBeginPlay
	 */
	struct AdrugPickupItem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.configPackage
	 */
	struct AdrugPickupItem_C_configPackage_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.objectPickup
	 */
	struct AdrugPickupItem_C_objectPickup_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.verifyCorrectNaming
	 */
	struct AdrugPickupItem_C_verifyCorrectNaming_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.selectPackToggle
	 */
	struct AdrugPickupItem_C_selectPackToggle_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.retryConfig
	 */
	struct AdrugPickupItem_C_retryConfig_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.SubclassRamaLoaded
	 */
	struct AdrugPickupItem_C_SubclassRamaLoaded_Params
	{	};

	/**
	 * Function drugPickupItem.drugPickupItem_C.ExecuteUbergraph_drugPickupItem
	 */
	struct AdrugPickupItem_C_ExecuteUbergraph_drugPickupItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
