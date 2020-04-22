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

// BlueprintGeneratedClass worldCustomMarker.worldCustomMarker_C
// 0x0008 (0x03B8 - 0x03B0)
class AworldCustomMarker_C : public AworldMapMarker_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

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
