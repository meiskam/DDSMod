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
	 * BlueprintGeneratedClass tempMixerTacka.tempMixerTacka_C
	 * Size -> 0x001C (FullSize[0x0858] - InheritedSize[0x083C])
	 */
	class AtempMixerTacka_C : public AworkStationMixerBase_C
	{
	public:
		unsigned char                                              UnknownData_I7P0[0x4];                                   // 0x083C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0840(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                mixModel;                                                // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      mixModelMinScale;                                        // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mixModelMaxScale;                                        // 0x0854(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void quantityChanged();
		void ExecuteUbergraph_tempMixerTacka(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
