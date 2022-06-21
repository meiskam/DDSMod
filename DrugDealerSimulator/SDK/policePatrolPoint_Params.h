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
	 * Function policePatrolPoint.policePatrolPoint_C.UserConstructionScript
	 */
	struct ApolicePatrolPoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function policePatrolPoint.policePatrolPoint_C.ShortRadiusChanged
	 */
	struct ApolicePatrolPoint_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policePatrolPoint.policePatrolPoint_C.LongRadiusChanged
	 */
	struct ApolicePatrolPoint_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policePatrolPoint.policePatrolPoint_C.ExecuteUbergraph_policePatrolPoint
	 */
	struct ApolicePatrolPoint_C_ExecuteUbergraph_policePatrolPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
