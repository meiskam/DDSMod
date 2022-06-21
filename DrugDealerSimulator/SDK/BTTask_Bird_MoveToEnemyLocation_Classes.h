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
	 * BlueprintGeneratedClass BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UBTTask_Bird_MoveToEnemyLocation_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Enemy;                                                   // 0x00A8(0x0028) Edit, BlueprintVisible

	public:
		void OnFail_F22B8A5A43E73BA6CA860ABAD38534D2(EPathFollowingResult MovementResult);
		void OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2(EPathFollowingResult MovementResult);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
