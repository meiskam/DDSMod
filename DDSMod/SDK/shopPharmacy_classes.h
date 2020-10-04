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

// BlueprintGeneratedClass shopPharmacy.shopPharmacy_C
// 0x000F (0x03E8 - 0x03D9)
class AshopPharmacy_C : public AshopInstance_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass shopPharmacy.shopPharmacy_C");
		return ptr;
	}


	void UserConstructionScript();
	void scriptResupplyEvent();
	void ExecuteUbergraph_shopPharmacy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
