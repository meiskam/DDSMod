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
	 * UserDefinedStruct dialogueResponseData.dialogueResponseData
	 * Size -> 0x0032
	 */
	struct FdialogueResponseData
	{
	public:
		class FText                                                ResponseText_2_3DC4585B4FB4F1C79DACFAA7F3A5BBD7;         // 0x0000(0x0018) Edit, BlueprintVisible
		int32_t                                                    ResponseNextID_5_B03F1ECB41D0DA0A004B2094CBDB92BE;       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ExitsDialogue_8_F9D0948C4212613C0EB7A99AE04781AB;        // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EntersSale_10_5F69660840FE1C4711AEEE9A575B671C;          // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H9YQ[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              questEventName_14_5EE56CC74B5A697A833062903B51783A;      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       runQuestOnEnd_17_865977E34D8EC2A2492838B4D89C5623;       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       LocalFunction_19_E42951F74D03145CE7173680C32D5F10;       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
