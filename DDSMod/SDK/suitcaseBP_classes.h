#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass suitcaseBP.suitcaseBP_C
// 0x0008 (0x0568 - 0x0560)
class AsuitcaseBP_C : public AbackpackBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass suitcaseBP.suitcaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void putMoney(int Amount);
	void ExecuteUbergraph_suitcaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
