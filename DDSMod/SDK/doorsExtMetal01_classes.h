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

// BlueprintGeneratedClass doorsExtMetal01.doorsExtMetal01_C
// 0x0008 (0x04C8 - 0x04C0)
class AdoorsExtMetal01_C : public AdoorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass doorsExtMetal01.doorsExtMetal01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_doorsExtMetal01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
