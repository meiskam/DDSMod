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
	 * BlueprintGeneratedClass pillMakerBase.pillMakerBase_C
	 * Size -> 0x0008 (FullSize[0x07D8] - InheritedSize[0x07D0])
	 */
	class ApillMakerBase_C : public AworkStationEquipmentBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void addSubstance();
		void tryAddSubstance();
		void makePills();
		void workFinished();
		void ExecuteUbergraph_pillMakerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
