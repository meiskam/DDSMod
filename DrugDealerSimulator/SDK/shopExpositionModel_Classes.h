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
	 * BlueprintGeneratedClass shopExpositionModel.shopExpositionModel_C
	 * Size -> 0x0020 (FullSize[0x0448] - InheritedSize[0x0428])
	 */
	class AshopExpositionModel_C : public AinteractiveBaseObject_C
	{
	public:
		class FText                                                DisplayName;                                             // 0x0428(0x0018) Edit, BlueprintVisible
		class UStaticMesh*                                         ProductModel;                                            // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
