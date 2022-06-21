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
	 * BlueprintGeneratedClass SubstancePickupItem.SubstancePickupItem_C
	 * Size -> 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
	 */
	class ASubstancePickupItem_C : public ApickupItemBase_C
	{
	public:
		class FName                                                SubstanceID;                                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
