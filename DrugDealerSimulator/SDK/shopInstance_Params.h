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
	 * Function shopInstance.shopInstance_C.GetShopMeta
	 */
	struct AshopInstance_C_GetShopMeta_Params
	{
	public:
		struct FShopDataStruct                                     ShopData;                                                // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function shopInstance.shopInstance_C.updateShopClassDefaults
	 */
	struct AshopInstance_C_updateShopClassDefaults_Params
	{	};

	/**
	 * Function shopInstance.shopInstance_C.UserConstructionScript
	 */
	struct AshopInstance_C_UserConstructionScript_Params
	{	};

	/**
	 * Function shopInstance.shopInstance_C.checkShopResupply
	 */
	struct AshopInstance_C_checkShopResupply_Params
	{	};

	/**
	 * Function shopInstance.shopInstance_C.resupplyShop
	 */
	struct AshopInstance_C_resupplyShop_Params
	{	};

	/**
	 * Function shopInstance.shopInstance_C.ReceiveBeginPlay
	 */
	struct AshopInstance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function shopInstance.shopInstance_C.scriptResupplyEvent
	 */
	struct AshopInstance_C_scriptResupplyEvent_Params
	{	};

	/**
	 * Function shopInstance.shopInstance_C.ExecuteUbergraph_shopInstance
	 */
	struct AshopInstance_C_ExecuteUbergraph_shopInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
