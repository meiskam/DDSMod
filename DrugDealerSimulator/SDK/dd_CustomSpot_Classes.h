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
	 * BlueprintGeneratedClass dd_CustomSpot.dd_CustomSpot_C
	 * Size -> 0x0034 (FullSize[0x054C] - InheritedSize[0x0518])
	 */
	class Add_CustomSpot_C : public AdeadDropBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box_1;                                                   // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                CustomStotName;                                          // 0x0528(0x0018) Edit, BlueprintVisible
		struct FVector                                             colliderExtent;                                          // 0x0540(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_dd_CustomSpot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
