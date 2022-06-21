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
	 * UserDefinedStruct LootPoolData.LootPoolData
	 * Size -> 0x0020
	 */
	struct FLootPoolData
	{
	public:
		class FString                                              Notatka_6_591F3B8A4E5942AA95AA70A5B7B4FF79;              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FLootPoolEntry>                              LootPool_7_6EEA015C48BACB9A74FE679DA052CABF;             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
