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
	 * Class SoundVisualizations.SoundVisualizationStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundVisualizationStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetAmplitude(class USoundWave* SoundWave, int32_t Channel, float StartTime, float TimeLength, int32_t AmplitudeBuckets, TArray<float>* OutAmplitudes);
		void STATIC_CalculateFrequencySpectrum(class USoundWave* SoundWave, int32_t Channel, float StartTime, float TimeLength, int32_t SpectrumWidth, TArray<float>* OutSpectrum);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
