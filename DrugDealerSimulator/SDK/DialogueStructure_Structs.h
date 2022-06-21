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
	 * UserDefinedStruct DialogueStructure.DialogueStructure
	 * Size -> 0x0031
	 */
	struct FDialogueStructure
	{
	public:
		class FString                                              Notatka_19_CCEAD5BF474DDCEBFEF96391B3E2E084;             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    FirstDialogueID_2_261964124D8104B14697A8B35698C812;      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartDialogueID_5_8B98C51C4238AF262D423094A7B3367E;      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TradeReturnID_6_1AFFF475480B64086B37C1AF92B9B31A;        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CV2I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FdialogueData>                               DialogueLines_10_37BA5A7C4A205C5EBF4C61A26AAC8DF6;       // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       BlockEscapeExit_17_8A01B2DF428343376613048FD546FC51;     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
