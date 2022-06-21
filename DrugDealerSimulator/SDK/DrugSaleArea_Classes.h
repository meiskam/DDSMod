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
	 * BlueprintGeneratedClass DrugSaleArea.DrugSaleArea_C
	 * Size -> 0x004D (FullSize[0x0375] - InheritedSize[0x0328])
	 */
	class ADrugSaleArea_C : public AActor
	{
	public:
		class UBillboardComponent*                                 Billboard;                                               // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              AreaID;                                                  // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                AreaParentName;                                          // 0x0348(0x0018) Edit, BlueprintVisible
		TArray<class ADrugSalePoint_C*>                            salePoints;                                              // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		int32_t                                                    areaMinLevel;                                            // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       areaLocked;                                              // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
