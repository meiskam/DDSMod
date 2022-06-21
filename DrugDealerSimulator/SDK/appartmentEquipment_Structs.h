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
	 * UserDefinedStruct appartmentEquipment.appartmentEquipment
	 * Size -> 0x0050
	 */
	struct FappartmentEquipment
	{
	public:
		class FText                                                Name_2_8A9A811049970E7E457E42A7203FEFEB;                 // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Description_4_5BDE9D2C4DB589001751F392B42CC593;          // 0x0018(0x0018) Edit, BlueprintVisible
		EequipmentCategory                                         Category_13_8A6CC0FB4389B3045160EFB604DEF997;            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RU2J[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon_7_C099379A4645F526989E00A2E1FEBD82;                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ActorClass_10_301502684B9020104DEA978B4AAB1CF6;          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          PlacementSound_17_4D97320A4CF81BAA891C21BE6493249A;      // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
