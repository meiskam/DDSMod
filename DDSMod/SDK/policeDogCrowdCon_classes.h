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

// BlueprintGeneratedClass policeDogCrowdCon.policeDogCrowdCon_C
// 0x0008 (0x0440 - 0x0438)
class ApoliceDogCrowdCon_C : public ADetourCrowdAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass policeDogCrowdCon.policeDogCrowdCon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_policeDogCrowdCon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
