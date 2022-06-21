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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AudioCapture.AudioCaptureComponent
	 * Size -> 0x00B0 (FullSize[0x0670] - InheritedSize[0x05C0])
	 */
	class UAudioCaptureComponent : public USynthComponent
	{
	public:
		int32_t                                                    JitterLatencyFrames;                                     // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZN9S[0xAC];                                  // 0x05C4(0x00AC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
