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

// BlueprintGeneratedClass qaHashKey.qaHashKey_C
// 0x0018 (0x0040 - 0x0028)
class UqaHashKey_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     hashString;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass qaHashKey.qaHashKey_C");
		return ptr;
	}


	void asd();
	void ExecuteUbergraph_qaHashKey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
