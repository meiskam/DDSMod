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
	 * BlueprintGeneratedClass BTService_Bird_GetDistanceToEnemy.BTService_Bird_GetDistanceToEnemy_C
	 * Size -> 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
	 */
	class UBTService_Bird_GetDistanceToEnemy_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Enemy;                                                   // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              DistanceToEnemy;                                         // 0x00C8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ExecuteUbergraph_BTService_Bird_GetDistanceToEnemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
