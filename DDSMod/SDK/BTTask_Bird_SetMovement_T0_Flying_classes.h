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

// BlueprintGeneratedClass BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C
// 0x0148 (0x01E8 - 0x00A0)
class UBTTask_Bird_SetMovement_T0_Flying_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BBKey_AreWeFlying_;                                       // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_AreWeWalking_;                                      // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_AreWePerched_;                                      // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TimeToLand_;                                              // 0x0120(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_IsPerched_;                                         // 0x0148(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_IsLookingForPerch_;                                 // 0x0170(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_DoADownTrace_;                                      // 0x0198(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_FlyToPerch_;                                        // 0x01C0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C");
		return ptr;
	}


	void OnFail_DD4F82004EF7DB5A3D219180586AD970(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_DD4F82004EF7DB5A3D219180586AD970(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
