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
	 * UserDefinedStruct ExpoEventData.ExpoEventData
	 * Size -> 0x0030
	 */
	struct FExpoEventData
	{
	public:
		class FText                                                ExpoEventName_2_45F02C6A45E4E19B2BB7A788FEF9AB9D;        // 0x0000(0x0018) Edit, BlueprintVisible
		class FString                                              Notatka_11_F6A8AA2441800AACF9DE92AA00D0D8F9;             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float                                                      ExpoEventValue_5_5F7210A44F6B0C4C78C417BC81500B56;       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExpoEventMedianePoints_8_10F9279F4013B26DC935E6AB51AB93D9; // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
