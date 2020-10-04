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

// BlueprintGeneratedClass nightClubLookTrigger.nightClubLookTrigger_C
// 0x000B (0x0360 - 0x0355)
class AnightClubLookTrigger_C : public AlookAtTrigger_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass nightClubLookTrigger.nightClubLookTrigger_C");
		return ptr;
	}


	void UserConstructionScript();
	void playerLookedAt();
	void ExecuteUbergraph_nightClubLookTrigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
