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
	 * Class FacialAnimation.AudioCurveSourceComponent
	 * Size -> 0x0040 (FullSize[0x0690] - InheritedSize[0x0650])
	 */
	class UAudioCurveSourceComponent : public UAudioComponent
	{
	public:
		class FName                                                CurveSourceBindingName;                                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveSyncOffset;                                         // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FX6A[0x34];                                  // 0x065C(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
