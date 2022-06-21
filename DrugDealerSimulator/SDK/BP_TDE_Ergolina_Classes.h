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
	 * BlueprintGeneratedClass BP_TDE_Ergolina.BP_TDE_Ergolina_C
	 * Size -> 0x0058 (FullSize[0x0508] - InheritedSize[0x04B0])
	 */
	class ABP_TDE_Ergolina_C : public ATDE_Ergolina
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPostProcessComponent*                               lsdPostProcess;                                          // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Out;                                                     // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     mindBlown_v6;                                            // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     shepherd;                                                // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      fadeOut_NewTrack_0_167BFF254E4B7A37A514E9AA3632C212;     // 0x04E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         fadeOut__Direction_167BFF254E4B7A37A514E9AA3632C212;     // 0x04E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_48TP[0x3];                                   // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOut;                                                 // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       lsdActive;                                               // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       peak;                                                    // 0x04F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WDS5[0x6];                                   // 0x04F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            distortionMat;                                           // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void fadeOut__FinishedFunc();
		void fadeOut__UpdateFunc();
		void StartEffect();
		void EffectTick(float DeltaTime);
		void EndEffect();
		void retryResetEffect();
		void ExecuteUbergraph_BP_TDE_Ergolina(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
