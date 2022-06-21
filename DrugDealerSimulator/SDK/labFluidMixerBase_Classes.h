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
	 * BlueprintGeneratedClass labFluidMixerBase.labFluidMixerBase_C
	 * Size -> 0x000C (FullSize[0x0848] - InheritedSize[0x083C])
	 */
	class AlabFluidMixerBase_C : public AworkStationMixerBase_C
	{
	public:
		unsigned char                                              UnknownData_CVC0[0x4];                                   // 0x083C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0840(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void setEndMixForm(EdrugForm* EndForm, float* Humidity);
		void checkMixContents(bool* LiquidFound);
		void UserConstructionScript();
		void addSubstance();
		void applyMix();
		void workFinished();
		void tryAddSubstance();
		void ExecuteUbergraph_labFluidMixerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
