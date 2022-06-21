﻿#pragma once

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
	 * BlueprintGeneratedClass fluidMixerTempLabTray.fluidMixerTempLabTray_C
	 * Size -> 0x001C (FullSize[0x0864] - InheritedSize[0x0848])
	 */
	class AfluidMixerTempLabTray_C : public AlabFluidMixerBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0848(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                contentMesh;                                             // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             contentScale;                                            // 0x0858(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void quantityChanged();
		void ExecuteUbergraph_fluidMixerTempLabTray(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif