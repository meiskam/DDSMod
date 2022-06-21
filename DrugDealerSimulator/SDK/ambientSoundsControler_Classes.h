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
	 * BlueprintGeneratedClass ambientSoundsControler.ambientSoundsControler_C
	 * Size -> 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
	 */
	class AambientSoundsControler_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AAmbientSound*>                               dayAmbientSounds;                                        // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class AAmbientSound*>                               nightAmbientSounds;                                      // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		class AdayTimeControler_C*                                 dayTimeCon;                                              // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void updateSounds();
		void ExecuteUbergraph_ambientSoundsControler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
