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
	 * BlueprintGeneratedClass shopExpositionModel_HangingPlant.shopExpositionModel_HangingPlant_C
	 * Size -> 0x0030 (FullSize[0x0458] - InheritedSize[0x0428])
	 */
	class AshopExpositionModel_HangingPlant_C : public AinteractiveBaseObject_C
	{
	public:
		class UStaticMeshComponent*                                SM_HFullPot;                                             // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                DisplayName;                                             // 0x0438(0x0018) Edit, BlueprintVisible
		class UStaticMesh*                                         ProductModel;                                            // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
