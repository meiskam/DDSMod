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
	 * BlueprintGeneratedClass BP_Gas_Tank_Red.BP_Gas_Tank_Red_C
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ABP_Gas_Tank_Red_C : public AActor
	{
	public:
		class UStaticMeshComponent*                                Gas_Tank_Red;                                            // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
