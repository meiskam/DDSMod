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
	 * UserDefinedStruct HideoutData.HideoutData
	 * Size -> 0x007C
	 */
	struct FHideoutData
	{
	public:
		class FText                                                HidoutName_2_0878FE454DDCB9B12F4A00ABECFB6214;           // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                HideoutDescription_4_3857FE4649F4BC6A12EB38B84D4BF5AE;   // 0x0018(0x0018) Edit, BlueprintVisible
		class FText                                                Area_6_E845C8BD4A2D60C0D54143A5C6C5163B;                 // 0x0030(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          HideoutIcon_9_2C1BD03846E7813C87DAFCB01A22E415;          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HideoutMinLevel_12_8C8008ED4E4843B2B1F8E6A7ACC654DC;     // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HidoutPrice_15_208A0A93481A551120BB4EAB2334C450;         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Floors_18_1F0977B745E8EB4634525FA553FFE51D;              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveStation_21_3A62421F4292A1519F766B8BBE1EC079;         // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AreaForever_42_1B24065B4610DCC26655459D0CF701B3;         // 0x005D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WBN1[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RespectBoost_24_663EAF1D45C2A8033B7209AA9DD9EC1F;        // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ClientBoost_27_D94690514103FD85A581DEB2864C3D59;         // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDealerBoost_39_D89D2A234CF0CA439535E581158CC71D;      // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RespectPercBoost_30_094A96FB4FEDF2F87B30AEBE0ABBA072;    // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RespectDropBoost_33_7ED87EB74917CD6D82779D91634462B8;    // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExpBoost_34_1A9687AA41E403E3ED455997C7981035;            // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SaleSpeedBoost_36_F2BD0EA5486334216A30C184348BC10D;      // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
