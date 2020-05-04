#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C
// 0x0060 (0x0100 - 0x00A0)
class UBTTask_Bird_TurnAndRunFrom_Enemy_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Enemy;                                                    // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DistanceToEnemy;                                          // 0x00D0(0x0028) (Edit, BlueprintVisible)
	float                                              TurnSpeed;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Elapsed_time;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C");
		return ptr;
	}


	void OnFail_A030AE6644CF82915307329D4CCBBD31(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_A030AE6644CF82915307329D4CCBBD31(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
