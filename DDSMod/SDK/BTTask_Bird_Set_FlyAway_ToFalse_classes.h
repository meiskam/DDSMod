#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Bird_Set_FlyAway_ToFalse.BTTask_Bird_Set_FlyAway_ToFalse_C
// 0x0010 (0x00B0 - 0x00A0)
class UBTTask_Bird_Set_FlyAway_ToFalse_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       BBKey_FlyAway_;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Bird_Set_FlyAway_ToFalse.BTTask_Bird_Set_FlyAway_ToFalse_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToFalse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
