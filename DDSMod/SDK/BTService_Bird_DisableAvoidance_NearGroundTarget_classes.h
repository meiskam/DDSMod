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

// BlueprintGeneratedClass BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C
// 0x0010 (0x00A8 - 0x0098)
class UBTService_Bird_DisableAvoidance_NearGroundTarget_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       BBKey_DoADownTrace_;                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearGroundTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
