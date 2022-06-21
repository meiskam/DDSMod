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
	 * Function inventoryCharacterBP.inventoryCharacterBP_C.UpdateBackpack
	 */
	struct AinventoryCharacterBP_C_UpdateBackpack_Params
	{
	public:
		class FName                                                BackpackID;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryCharacterBP.inventoryCharacterBP_C.UserConstructionScript
	 */
	struct AinventoryCharacterBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function inventoryCharacterBP.inventoryCharacterBP_C.ReceiveBeginPlay
	 */
	struct AinventoryCharacterBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function inventoryCharacterBP.inventoryCharacterBP_C.testTime
	 */
	struct AinventoryCharacterBP_C_testTime_Params
	{	};

	/**
	 * Function inventoryCharacterBP.inventoryCharacterBP_C.toggleCharacterEnabled
	 */
	struct AinventoryCharacterBP_C_toggleCharacterEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function inventoryCharacterBP.inventoryCharacterBP_C.ExecuteUbergraph_inventoryCharacterBP
	 */
	struct AinventoryCharacterBP_C_ExecuteUbergraph_inventoryCharacterBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
