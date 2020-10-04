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

// BlueprintGeneratedClass metalWicket01.metalWicket01_C
// 0x000F (0x0508 - 0x04F9)
class AmetalWicket01_C : public AdoorBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass metalWicket01.metalWicket01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void resetWicket();
	void ExecuteUbergraph_metalWicket01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
