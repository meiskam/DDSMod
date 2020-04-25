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

// BlueprintGeneratedClass BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent.BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C
// 0x0008 (0x00A0 - 0x0098)
class UBTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent.BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
