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
	 * BlueprintGeneratedClass BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C
	 * Size -> 0x0060 (FullSize[0x0100] - InheritedSize[0x00A0])
	 */
	class UBTTask_Bird_TurnAndRunFrom_Enemy_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Enemy;                                                   // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              DistanceToEnemy;                                         // 0x00D0(0x0028) Edit, BlueprintVisible
		float                                                      TurnSpeed;                                               // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Elapsed_time;                                            // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFail_A030AE6644CF82915307329D4CCBBD31(EPathFollowingResult MovementResult);
		void OnSuccess_A030AE6644CF82915307329D4CCBBD31(EPathFollowingResult MovementResult);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
