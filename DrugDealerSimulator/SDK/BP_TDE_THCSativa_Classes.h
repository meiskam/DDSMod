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
	 * BlueprintGeneratedClass BP_TDE_THCSativa.BP_TDE_THCSativa_C
	 * Size -> 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
	 */
	class ABP_TDE_THCSativa_C : public ATDE_THCSativa
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void StartEffect();
		void EffectTick(float DeltaTime);
		void EndEffect();
		void ExecuteUbergraph_BP_TDE_THCSativa(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
