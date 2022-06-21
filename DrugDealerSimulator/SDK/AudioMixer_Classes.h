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
	 * Class AudioMixer.SynthComponent
	 * Size -> 0x0380 (FullSize[0x05C0] - InheritedSize[0x0240])
	 */
	class USynthComponent : public USceneComponent
	{
	public:
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundAttenuationSettings                           AttenuationOverrides;                                    // 0x0248(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundClass*                                         SoundClass;                                              // 0x04F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain*                       SourceEffectChain;                                       // 0x0500(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0508(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundSubmixSendInfo>                        SoundSubmixSends;                                        // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     BusSends;                                                // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     PreEffectBusSends;                                       // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsUISound : 1;                                          // 0x0540(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPreviewSound : 1;                                     // 0x0540(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJRS[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EnvelopeFollowerAttackTime;                              // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerReleaseTime;                             // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZLK[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioEnvelopeValue;                                    // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P48V[0x20];                                  // 0x0560(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USynthSound*                                         Synth;                                                   // 0x0580(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AudioComponent;                                          // 0x0588(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A4R2[0x30];                                  // 0x0590(0x0030) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start();
		void SetVolumeMultiplier(float VolumeMultiplier);
		void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
		bool IsPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioMixerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
		void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
		void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
		void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
		void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		int32_t STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
		void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
		void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
		void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_2Q8K[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x0090(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectSubmixEQPreset
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_EX51[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectSubmixEQSettings                       Settings;                                                // 0x0078(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbPreset
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_YJGT[0x5C];                                  // 0x0040(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbSettings                         Settings;                                                // 0x009C(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
		void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SynthSound
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class USynthSound : public USoundWaveProcedural
	{
	public:
		unsigned char                                              UnknownData_QF1B[0x20];                                  // 0x0260(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
