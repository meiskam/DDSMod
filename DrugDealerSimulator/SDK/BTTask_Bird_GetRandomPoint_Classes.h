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
	 * BlueprintGeneratedClass BTTask_Bird_GetRandomPoint.BTTask_Bird_GetRandomPoint_C
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UBTTask_Bird_GetRandomPoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              RandomPointNearMyLocation;                               // 0x00A8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BTTask_Bird_GetRandomPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
