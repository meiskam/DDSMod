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
	 * Function DrugSalePoint.DrugSalePoint_C.peopleOverlaping
	 */
	struct ADrugSalePoint_C_peopleOverlaping_Params
	{
	public:
		bool                                                       Clear;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DrugSalePoint.DrugSalePoint_C.UserConstructionScript
	 */
	struct ADrugSalePoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DrugSalePoint.DrugSalePoint_C.ReceiveTick
	 */
	struct ADrugSalePoint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DrugSalePoint.DrugSalePoint_C.ExecuteUbergraph_DrugSalePoint
	 */
	struct ADrugSalePoint_C_ExecuteUbergraph_DrugSalePoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
