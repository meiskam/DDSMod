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
	 * Function equipmentListWidget.equipmentListWidget_C.getSurfaceData
	 */
	struct UequipmentListWidget_C_getSurfaceData_Params
	{
	public:
		class FName                                                SurfaceID;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EVillaListCategories                                       Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVillaSurfaceFinish                                 SurfaceData;                                             // 0x0000(0x0048)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function equipmentListWidget.equipmentListWidget_C.Construct
	 */
	struct UequipmentListWidget_C_Construct_Params
	{	};

	/**
	 * Function equipmentListWidget.equipmentListWidget_C.Setup
	 */
	struct UequipmentListWidget_C_Setup_Params
	{
	public:
		struct FappartmentEquipment                                EqData;                                                  // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                EqID;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EVillaListCategories                                       Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget
	 */
	struct UequipmentListWidget_C_ExecuteUbergraph_equipmentListWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
