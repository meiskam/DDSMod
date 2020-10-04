#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C
// 0x0008 (0x00A0 - 0x0098)
class UPM_Ser_ShoutChasePhrase_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C");
		return ptr;
	}


	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_PM_Ser_ShoutChasePhrase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
