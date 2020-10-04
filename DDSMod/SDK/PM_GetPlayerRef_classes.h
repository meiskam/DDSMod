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

// BlueprintGeneratedClass PM_GetPlayerRef.PM_GetPlayerRef_C
// 0x0008 (0x00A8 - 0x00A0)
class UPM_GetPlayerRef_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PM_GetPlayerRef.PM_GetPlayerRef_C");
		return ptr;
	}


	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_PM_GetPlayerRef(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
