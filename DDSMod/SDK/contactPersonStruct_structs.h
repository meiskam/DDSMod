#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct contactPersonStruct.contactPersonStruct
// 0x006C
struct FcontactPersonStruct
{
	struct FText                                       Name_16_FF9AED99407FDA5CC81F3A92D99C45A8;                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_6_ECF19275436CC69E203CADB5419CC7F3;           // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Location_15_1B7284484103CF3DD7746CB1E1E68452;             // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       job_4_A2613CE44D171CC80EB28680EF041B02;                   // 0x0048(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Avatar_9_CA0FAF344B4601CB832D3A9A2A257CFB;                // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Age_12_198EA9EA4ECE6C576364EA856663C718;                  // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
