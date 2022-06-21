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
	 * UserDefinedStruct ClientMeta.ClientMeta
	 * Size -> 0x003D
	 */
	struct FClientMeta
	{
	public:
		class FText                                                ClientName_2_B9EC20324537479C558659914027D2FF;           // 0x0000(0x0018) Edit, BlueprintVisible
		struct FclientLooksData                                    ClientLooks_6_17F881CC4FD6EE020984C49BE3B559BE;          // 0x0018(0x0014) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TDSX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ClientAvatar_9_3424827B4EEA389CD5B9B3B6BAB27DD5;         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClientExp_12_F25930D04D16173258CC4EA2E973B822;           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDealer_15_1D392A6F4AEBD63467C2AEB66EFCB4C1;            // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
