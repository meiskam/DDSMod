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
	 * BlueprintGeneratedClass TrashBin_LargeContainer.TrashBin_LargeContainer_C
	 * Size -> 0x0014 (FullSize[0x0520] - InheritedSize[0x050C])
	 */
	class ATrashBin_LargeContainer_C : public AInteractiveTrashBin_C
	{
	public:
		unsigned char                                              UnknownData_PBE0[0x4];                                   // 0x050C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Trash_Container_Green;                                   // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           ContainerMaterial;                                       // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
