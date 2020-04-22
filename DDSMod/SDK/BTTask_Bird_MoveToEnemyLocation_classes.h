#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_Bird_MoveToEnemyLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Enemy;                                                    // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C");
		return ptr;
	}


	void OnFail_F22B8A5A43E73BA6CA860ABAD38534D2(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
