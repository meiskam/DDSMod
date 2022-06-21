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
	 * UserDefinedStruct contactPersonStruct.contactPersonStruct
	 * Size -> 0x006C
	 */
	struct FcontactPersonStruct
	{
	public:
		class FText                                                Name_16_FF9AED99407FDA5CC81F3A92D99C45A8;                // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Description_6_ECF19275436CC69E203CADB5419CC7F3;          // 0x0018(0x0018) Edit, BlueprintVisible
		class FText                                                Location_15_1B7284484103CF3DD7746CB1E1E68452;            // 0x0030(0x0018) Edit, BlueprintVisible
		class FText                                                job_4_A2613CE44D171CC80EB28680EF041B02;                  // 0x0048(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          Avatar_9_CA0FAF344B4601CB832D3A9A2A257CFB;               // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Age_12_198EA9EA4ECE6C576364EA856663C718;                 // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
