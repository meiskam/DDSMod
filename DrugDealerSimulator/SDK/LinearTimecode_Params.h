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
	 * Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
	 */
	struct ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params
	{
	public:
		struct FDropTimecode                                       Timecode;                                                // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDropTimecode                                       OutTimecode;                                             // 0x0000(0x001C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
	 */
	struct ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params
	{
	public:
		struct FDropTimecode                                       Timecode;                                                // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
	 */
	struct ULinearTimecodeComponent_GetDropFrameNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
	 */
	struct UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params
	{
	public:
		struct FDropTimecode                                       InTimecode;                                              // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
