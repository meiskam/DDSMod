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
	 * BlueprintGeneratedClass millMortarSimpleBP.millMortarSimpleBP_C
	 * Size -> 0x001C (FullSize[0x07F4] - InheritedSize[0x07D8])
	 */
	class AmillMortarSimpleBP_C : public AdrugMillBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                contents;                                                // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             baseContentScale;                                        // 0x07E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void quantityChanged();
		void ExecuteUbergraph_millMortarSimpleBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
