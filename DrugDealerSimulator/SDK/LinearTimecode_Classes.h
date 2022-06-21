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
	 * Class LinearTimecode.LinearTimecodeComponent
	 * Size -> 0x0060 (FullSize[0x02A0] - InheritedSize[0x0240])
	 */
	class ULinearTimecodeComponent : public USceneComponent
	{
	public:
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDropTimecode                                       DropTimecode;                                            // 0x0240(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BOM[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTimecodeChange;                                        // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QMX[0x30];                                  // 0x0270(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int32_t FrameNumber, struct FDropTimecode* OutTimecode);
		void STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int32_t* FrameNumber);
		int32_t GetDropFrameNumber();
		static UClass* StaticClass();
	};

	/**
	 * Class LinearTimecode.DropTimecodeToStringConversion
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
