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
	 * UserDefinedStruct InventoryListStructure.InventoryListStructure
	 * Size -> 0x0091
	 */
	struct FInventoryListStructure
	{
	public:
		class FName                                                ItemID_2_324B83ED437E8B40FE9C0C8E6B77F1EF;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemQuantity_5_5FC98A504C1F1F7038442980024ECBD0;         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemAmount_26_F0481C6644AA39BC24534C94A29D7450;          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                CustomTagName_8_56E12D1945183CB6DA2697B0F6423537;        // 0x0010(0x0018) Edit, BlueprintVisible
		int32_t                                                    PocketIndex_19_726B79DC427258996E799999DC88C63A;         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               LocalGuid_11_15F567AD47611473602F15A7A7DE1F5C;           // 0x002C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               HeldInGuid_14_F932307F422CBA047D25A9AD6A7F0AB2;          // 0x003C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6K3D[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMixProportionsStruct                               MixProportions_16_D1FE595547104A1D9071A9807CFE11BE;      // 0x0050(0x0040) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       FromVendor_23_056CA5AB4E56D7F67C10F2825EAB58AC;          // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
