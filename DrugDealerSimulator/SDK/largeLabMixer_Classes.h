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
	 * BlueprintGeneratedClass largeLabMixer.largeLabMixer_C
	 * Size -> 0x0018 (FullSize[0x0854] - InheritedSize[0x083C])
	 */
	class AlargeLabMixer_C : public AworkStationMixerBase_C
	{
	public:
		unsigned char                                              UnknownData_S51T[0x4];                                   // 0x083C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0840(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                largeLabMixerArm;                                        // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      rotSpeed;                                                // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void GizmoSet();
		void ExecuteUbergraph_largeLabMixer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
