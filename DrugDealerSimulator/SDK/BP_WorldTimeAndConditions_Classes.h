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
	 * BlueprintGeneratedClass BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C
	 * Size -> 0x0011 (FullSize[0x0529] - InheritedSize[0x0518])
	 */
	class ABP_WorldTimeAndConditions_C : public AWorldTimeAndConditions
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       worldInitiated;                                          // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ShadowsSettingsChanged();
		void updateShadowStatus();
		void InWorldInitiated();
		void ExecuteUbergraph_BP_WorldTimeAndConditions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
