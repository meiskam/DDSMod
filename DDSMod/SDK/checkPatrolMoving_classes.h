#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass checkPatrolMoving.checkPatrolMoving_C
// 0x0008 (0x00A0 - 0x0098)
class UcheckPatrolMoving_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass checkPatrolMoving.checkPatrolMoving_C");
		return ptr;
	}


	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_checkPatrolMoving(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
