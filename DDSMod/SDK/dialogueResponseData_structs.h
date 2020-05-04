#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct dialogueResponseData.dialogueResponseData
// 0x0032
struct FdialogueResponseData
{
	struct FText                                       ResponseText_2_3DC4585B4FB4F1C79DACFAA7F3A5BBD7;          // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                ResponseNextID_5_B03F1ECB41D0DA0A004B2094CBDB92BE;        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExitsDialogue_8_F9D0948C4212613C0EB7A99AE04781AB;         // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EntersSale_10_5F69660840FE1C4711AEEE9A575B671C;           // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	struct FString                                     questEventName_14_5EE56CC74B5A697A833062903B51783A;       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               runQuestOnEnd_17_865977E34D8EC2A2492838B4D89C5623;        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LocalFunction_19_E42951F74D03145CE7173680C32D5F10;        // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
