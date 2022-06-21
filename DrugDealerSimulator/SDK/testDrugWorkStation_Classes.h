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
	 * BlueprintGeneratedClass testDrugWorkStation.testDrugWorkStation_C
	 * Size -> 0x0007 (FullSize[0x04CC] - InheritedSize[0x04C5])
	 */
	class AtestDrugWorkStation_C : public AdrugWorkStation_C
	{
	public:
		unsigned char                                              UnknownData_9N2B[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActivateTaskID;                                          // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
