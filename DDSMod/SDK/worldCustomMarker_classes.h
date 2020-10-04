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

// BlueprintGeneratedClass worldCustomMarker.worldCustomMarker_C
// 0x000C (0x03C8 - 0x03BC)
class AworldCustomMarker_C : public AworldMapMarker_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass worldCustomMarker.worldCustomMarker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveDestroyed();
	void ExecuteUbergraph_worldCustomMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
