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
	 * BlueprintGeneratedClass BP_TDE_THC.BP_TDE_THC_C
	 * Size -> 0x001C (FullSize[0x04CC] - InheritedSize[0x04B0])
	 */
	class ABP_TDE_THC_C : public ATDE_THC
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              spawnedTree[0x8];                                        // 0x04C0(0x0008) UNKNOWN PROPERTY: ObjectProperty BP_TDE_THC.BP_TDE_THC_C.spawnedTree
		float                                                      rotSpeed;                                                // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void EndEffect();
		void EffectTick(float DeltaTime);
		void StartEffect();
		void ExecuteUbergraph_BP_TDE_THC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
