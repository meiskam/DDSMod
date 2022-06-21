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
	 * UserDefinedStruct EddieLimitLevels.EddieLimitLevels
	 * Size -> 0x0018
	 */
	struct FEddieLimitLevels
	{
	public:
		class FString                                              CodeName_4_BEA046B449FE9679FD25E19CDD1402BB;             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    FromLevel_7_880D6C964F93A8C0676D7987E34C7E39;            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Multiplier_9_1D139CE54E3EC203F0A2BA9EA58072C1;           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
