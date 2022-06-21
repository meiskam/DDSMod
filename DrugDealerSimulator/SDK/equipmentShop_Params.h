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
	 * Function equipmentShop.equipmentShop_C.GetShopData
	 */
	struct AequipmentShop_C_GetShopData_Params
	{
	public:
		struct FShopDataStruct                                     ShopData;                                                // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function equipmentShop.equipmentShop_C.removeItems
	 */
	struct AequipmentShop_C_removeItems_Params
	{
	public:
		struct FappartmentEquipment                                Data;                                                    // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function equipmentShop.equipmentShop_C.UserConstructionScript
	 */
	struct AequipmentShop_C_UserConstructionScript_Params
	{	};

	/**
	 * Function equipmentShop.equipmentShop_C.ReceiveBeginPlay
	 */
	struct AequipmentShop_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function equipmentShop.equipmentShop_C.InitiateShopUI
	 */
	struct AequipmentShop_C_InitiateShopUI_Params
	{	};

	/**
	 * Function equipmentShop.equipmentShop_C.checkShopAvailability
	 */
	struct AequipmentShop_C_checkShopAvailability_Params
	{	};

	/**
	 * Function equipmentShop.equipmentShop_C.forceRestock
	 */
	struct AequipmentShop_C_forceRestock_Params
	{	};

	/**
	 * Function equipmentShop.equipmentShop_C.subclassInitiate
	 */
	struct AequipmentShop_C_subclassInitiate_Params
	{	};

	/**
	 * Function equipmentShop.equipmentShop_C.ExecuteUbergraph_equipmentShop
	 */
	struct AequipmentShop_C_ExecuteUbergraph_equipmentShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
